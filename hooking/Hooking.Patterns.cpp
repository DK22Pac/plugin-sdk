/*
 * This file is part of the CitizenFX project - http://citizen.re/
 *
 * See LICENSE and MENTIONS in the root of the source tree for information
 * regarding licensing.
 */

#ifndef _MSC_VER
#warning  SEH exceptions are supported only with MSVC
#endif

#include "Hooking.Patterns.h"

#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <algorithm>

#if PATTERNS_USE_HINTS
#include <map>
#endif


#if PATTERNS_USE_HINTS

// from boost someplace
template <std::uint64_t FnvPrime, std::uint64_t OffsetBasis>
struct basic_fnv_1
{
	std::uint64_t operator()(std::string_view text) const
	{
		std::uint64_t hash = OffsetBasis;
		for (auto it : text)
		{
			hash *= FnvPrime;
			hash ^= it;
		}

		return hash;
	}
};

static constexpr std::uint64_t fnv_prime = 1099511628211u;
static constexpr std::uint64_t fnv_offset_basis = 14695981039346656037u;

typedef basic_fnv_1<fnv_prime, fnv_offset_basis> fnv_1;

#endif

namespace hook
{

ptrdiff_t details::get_process_base()
{
	return ptrdiff_t(GetModuleHandle(nullptr));
}


#if PATTERNS_USE_HINTS
static auto& getHints()
{
	static std::multimap<uint64_t, uintptr_t> hints;
	return hints;
}
#endif

static void TransformPattern(std::string_view pattern, std::basic_string<uint8_t>& data, std::basic_string<uint8_t>& mask) 
{
	data.reserve(pattern.size() / 2);
	mask.reserve(pattern.size() / 2);

	static constexpr uint8_t hexLookup[] = 
	{
		255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, // 0-15
		255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, // 16-31
		255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, // 32-47
		// 0-9
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 255, 255, 255, 255, 255, 255, // 48-63
		// A-F
		255, 10, 11, 12, 13, 14, 15, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, // 64-79
		// G-Z
		255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, // 80-95
		// a-f
		255, 10, 11, 12, 13, 14, 15, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, // 96-111
		// g-z
		255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, // 112-127
		255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, // 128-143
		255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, // 144-159
		255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, // 160-175
		255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, // 176-191
		255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, // 192-207
		255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, // 208-223
		255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, // 224-239
		255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255  // 240-255
	};

	bool upperNibble = true;
	uint8_t tempDigit = 0;

	for (auto it = pattern.begin(); it != pattern.end(); ++it) 
	{
		char ch = *it;

		if (ch == ' ')
		{
			continue;
		}
		else if (ch == '?') 
		{
			data.push_back(0);
			mask.push_back(0);
		}
		else
		{
			uint8_t thisDigit = hexLookup[static_cast<uint8_t>(ch)];

			if (thisDigit != 255) 
			{
				if (upperNibble) 
				{
					tempDigit = thisDigit << 4;
					upperNibble = false;
				}
				else 
				{
					tempDigit |= thisDigit;
					upperNibble = true;

					data.push_back(tempDigit);
					mask.push_back(0xFF);
				}
			}
		}
	}
}

class executable_meta
{
private:
	uintptr_t m_begin;
	uintptr_t m_end;

	template<typename TReturn, typename TOffset>
	TReturn* getRVA(TOffset rva)
	{
		return (TReturn*)(m_begin + rva);
	}

public:
	explicit executable_meta(uintptr_t module)
		: m_begin(module), m_end(0)
	{
		static auto getSection = [](const PIMAGE_NT_HEADERS nt_headers, unsigned section) -> PIMAGE_SECTION_HEADER
		{
			return reinterpret_cast<PIMAGE_SECTION_HEADER>(
				(UCHAR*)nt_headers->OptionalHeader.DataDirectory +
				nt_headers->OptionalHeader.NumberOfRvaAndSizes * sizeof(IMAGE_DATA_DIRECTORY) +
				section * sizeof(IMAGE_SECTION_HEADER));
		};

		PIMAGE_DOS_HEADER dosHeader = getRVA<IMAGE_DOS_HEADER>(0);
		PIMAGE_NT_HEADERS ntHeader = getRVA<IMAGE_NT_HEADERS>(dosHeader->e_lfanew);

		for (int i = 0; i < ntHeader->FileHeader.NumberOfSections; i++)
		{
			auto sec = getSection(ntHeader, i);
			auto secSize = sec->SizeOfRawData != 0 ? sec->SizeOfRawData : sec->Misc.VirtualSize;
			if (sec->Characteristics & IMAGE_SCN_MEM_EXECUTE)
				m_end = m_begin + sec->VirtualAddress + secSize;
			if ((i == ntHeader->FileHeader.NumberOfSections - 1) && m_end == 0)
				m_end = m_begin + sec->PointerToRawData + secSize;
		}
	}

	executable_meta(uintptr_t begin, uintptr_t end)
		: m_begin(begin), m_end(end)
	{
	}

	inline uintptr_t begin() const { return m_begin; }
	inline uintptr_t end() const   { return m_end; }
};

namespace details
{

void basic_pattern_impl::Initialize(std::string_view pattern)
{
	// get the hash for the base pattern
#if PATTERNS_USE_HINTS
	m_hash = fnv_1()(pattern);
#endif

	// transform the base pattern from IDA format to canonical format
	TransformPattern(pattern, m_bytes, m_mask);

#if PATTERNS_USE_HINTS
	// if there's hints, try those first
#if PATTERNS_CAN_SERIALIZE_HINTS
	if (m_rangeStart == reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr)))
#endif
	{
		auto range = getHints().equal_range(m_hash);

		if (range.first != range.second)
		{
			std::for_each(range.first, range.second, [&] (const auto& hint)
			{
				ConsiderHint(hint.second);
			});

			// if the hints succeeded, we don't need to do anything more
			if (!m_matches.empty())
			{
				m_matched = true;
				return;
			}
		}
	}
#endif
}

void basic_pattern_impl::EnsureMatches(uint32_t maxCount)
{
	if (m_matched || (!m_rangeStart && !m_rangeEnd))
	{
		return;
	}

	// scan the executable for code
	executable_meta executable = m_rangeStart != 0 && m_rangeEnd != 0 ? executable_meta(m_rangeStart, m_rangeEnd) : executable_meta(m_rangeStart);

	auto matchSuccess = [&] (uintptr_t address)
	{
#if PATTERNS_USE_HINTS
		getHints().emplace(m_hash, address);
#else
		(void)address;
#endif

		return (m_matches.size() == maxCount);
	};

	const uint8_t* pattern = m_bytes.data();
	const uint8_t* mask = m_mask.data();
	const size_t maskSize = m_mask.size();
	const size_t lastWild = m_mask.find_last_not_of(uint8_t(0xFF));

	ptrdiff_t Last[256];

	std::fill(std::begin(Last), std::end(Last), lastWild == std::string::npos ? -1 : static_cast<ptrdiff_t>(lastWild) );

	for ( ptrdiff_t i = 0; i < static_cast<ptrdiff_t>(maskSize); ++i )
	{
		if ( Last[ pattern[i] ] < i )
		{
			Last[ pattern[i] ] = i;
		}
	}

	#ifdef _MSC_VER
	__try
	{
	#endif
		for (uintptr_t i = executable.begin(), end = executable.end() - maskSize; i <= end;)
		{
			uint8_t* ptr = reinterpret_cast<uint8_t*>(i);
			ptrdiff_t j = maskSize - 1;

			while ((j >= 0) && pattern[j] == (ptr[j] & mask[j])) j--;

			if (j < 0)
			{
				m_matches.emplace_back(ptr);

				if (matchSuccess(i))
				{
					break;
				}
				i++;
			}
			else i += std::max(ptrdiff_t(1), j - Last[ptr[j]]);
		}
	#ifdef _MSC_VER
	}
	__except ((GetExceptionCode() == EXCEPTION_ACCESS_VIOLATION) ? EXCEPTION_EXECUTE_HANDLER : EXCEPTION_CONTINUE_SEARCH)
	{
	}
	#endif

	m_matched = true;
}

bool basic_pattern_impl::ConsiderHint(uintptr_t offset)
{
	uint8_t* ptr = reinterpret_cast<uint8_t*>(offset);

#if PATTERNS_CAN_SERIALIZE_HINTS
	const uint8_t* pattern = m_bytes.data();
	const uint8_t* mask = m_mask.data();

	for (size_t i = 0, j = m_mask.size(); i < j; i++)
	{
		if (pattern[i] != (ptr[i] & mask[i]))
		{
			return false;
		}
	}
#endif

	m_matches.emplace_back(ptr);

	return true;
}

#if PATTERNS_USE_HINTS && PATTERNS_CAN_SERIALIZE_HINTS
void basic_pattern_impl::hint(uint64_t hash, uintptr_t address)
{
	auto& hints = getHints();

	auto range = hints.equal_range(hash);

	for (auto it = range.first; it != range.second; ++it)
	{
		if (it->second == address)
		{
			return;
		}
	}

	hints.emplace(hash, address);
}
#endif

}
}
