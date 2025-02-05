#pragma once

// Trampolines are useless on x86 arch
#ifdef _WIN64

#include <cassert>
#include <memory>
#include <type_traits>
#include <cstddef>

// Trampoline class for big (>2GB) jumps
// Never needed in 32-bit processes so in those cases this does nothing but forwards to Memory functions
// NOTE: Each Trampoline class allocates a page of executable memory for trampolines and does NOT free it when going out of scope
class Trampoline
{
public:
	template<typename T>
	static Trampoline* MakeTrampoline( T addr )
	{
		return MakeTrampolineInternal( uintptr_t(addr), SINGLE_TRAMPOLINE_SIZE, 1 );
	}

	template<typename T>
	static Trampoline* MakeTrampoline( T addr, size_t size, size_t align )
	{
		return MakeTrampolineInternal( uintptr_t(addr), size, align );
	}

	template<typename Func>
	LPVOID Jump( Func func )
	{
		LPVOID addr;
		memcpy( &addr, std::addressof(func), sizeof(addr) );
		return CreateCodeTrampoline( addr );
	}

	template<typename T>
	auto* Pointer( size_t align = alignof(T) )
	{
		return static_cast<std::remove_extent_t<std::remove_const_t<T>>*>(GetNewSpace( sizeof(T), align ));
	}

	template<typename T>
	auto& Reference( size_t align = alignof(T) )
	{
		return *Pointer<T>( align );
	}

	std::byte* RawSpace( size_t size, size_t align = 1 )
	{
		return static_cast< std::byte* >(GetNewSpace( size, align ));
	}


private:
	static Trampoline* MakeTrampolineInternal( uintptr_t addr, size_t size, size_t align )
	{
		Trampoline* current = ms_first;
		while ( current != nullptr )
		{
			if ( current->FeasibleForAddresss( addr, size, align ) ) return current;

			current = current->m_next;
		}

		size_t sizeToAlloc = size + ((sizeof(Trampoline) + align - 1) & ~(align - 1));

		void* space = FindAndAllocateMem(addr, sizeToAlloc);
		void* usableSpace = reinterpret_cast<char*>(space) + sizeof(Trampoline);
		return new( space ) Trampoline( usableSpace, sizeToAlloc - sizeof(Trampoline) );
	}


	Trampoline( const Trampoline& ) = delete;
	Trampoline& operator=( const Trampoline& ) = delete;

	explicit Trampoline( void* memory, size_t size )
		: m_next( std::exchange( ms_first, this ) ), m_pageMemory( memory ), m_spaceLeft( size )
	{
	}

	static constexpr size_t SINGLE_TRAMPOLINE_SIZE = 14;
	bool FeasibleForAddresss( uintptr_t addr, size_t size, size_t align ) const
	{
		const uintptr_t pageMem = reinterpret_cast<uintptr_t>(m_pageMemory);
		if (IsAddressFeasible(pageMem, addr))
		{
			// Check if there is enough size (incl. alignment)
			// Like in std::align
			size_t offset = static_cast<size_t>(pageMem & (align - 1));
			if (offset != 0)
			{
				offset = align - offset; // number of bytes to skip
			}
			return m_spaceLeft >= offset && m_spaceLeft - offset >= size;
		}
		return false;
	}

	LPVOID CreateCodeTrampoline( LPVOID addr )
	{
		uint8_t* trampolineSpace = static_cast<uint8_t*>(GetNewSpace( SINGLE_TRAMPOLINE_SIZE, 1 ));

		// Create trampoline code
		const uint8_t jmp[] = { 0xFF, 0x25, 0x00, 0x00, 0x00, 0x00 };
		memcpy(trampolineSpace, jmp, sizeof(jmp));
		memcpy(trampolineSpace + sizeof(jmp), &addr, sizeof(addr));

		return trampolineSpace;
	}

	LPVOID GetNewSpace( size_t size, size_t alignment )
	{
		void* space = std::align( alignment, size, m_pageMemory, m_spaceLeft );
		if ( space != nullptr )
		{
			m_pageMemory = static_cast<uint8_t*>(m_pageMemory) + size;
			m_spaceLeft -= size;
		}
		else
		{
			assert( !"Out of trampoline space!" );
		}
		return space;
	}

	static void* FindAndAllocateMem( const uintptr_t addr, size_t& size )
	{
		uintptr_t curAddr = addr;

		SYSTEM_INFO systemInfo;
		GetSystemInfo( &systemInfo );
		const DWORD granularity = systemInfo.dwAllocationGranularity;

		// Align size up to allocation granularity
		size = (size + granularity - 1) & ~size_t(granularity - 1);

		// Find the first unallocated page after 'addr' and try to allocate a page for trampolines there
		while ( true )
		{
			MEMORY_BASIC_INFORMATION MemoryInf;
			if ( VirtualQuery( reinterpret_cast<LPCVOID>(curAddr), &MemoryInf, sizeof(MemoryInf) ) == 0 ) break;
			if ( MemoryInf.State == MEM_FREE && MemoryInf.RegionSize >= size )
			{
				// Align up to allocation granularity
				uintptr_t alignedAddr = uintptr_t(MemoryInf.BaseAddress);
				alignedAddr = (alignedAddr + granularity - 1) & ~uintptr_t(granularity - 1);

				if ( !IsAddressFeasible( alignedAddr, addr ) ) break;

				LPVOID mem = VirtualAlloc( reinterpret_cast<LPVOID>(alignedAddr), size, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE );
				if ( mem != nullptr )
				{
					return mem;
				}
			}
			curAddr += MemoryInf.RegionSize;
		}
		return nullptr;
	}

	static bool IsAddressFeasible( uintptr_t trampolineOffset, uintptr_t addr )
	{
		const ptrdiff_t diff = trampolineOffset - addr;
		return diff >= INT32_MIN && diff <= INT32_MAX;
	}

	Trampoline* m_next = nullptr;
	void* m_pageMemory = nullptr;
	size_t m_spaceLeft = 0;

	static inline Trampoline* ms_first = nullptr;
};


#endif