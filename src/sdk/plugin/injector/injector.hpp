/*
 *  Injectors - Base Header
 *
 *  Copyright (C) 2012-2014 LINK/2012 <dma_2012@hotmail.com>
 *  Copyright (C) 2014 Deji <the_zone@hotmail.co.uk>
 *
 *  This software is provided 'as-is', without any express or implied
 *  warranty. In no event will the authors be held liable for any damages
 *  arising from the use of this software.
 * 
 *  Permission is granted to anyone to use this software for any purpose,
 *  including commercial applications, and to alter it and redistribute it
 *  freely, subject to the following restrictions:
 * 
 *     1. The origin of this software must not be misrepresented; you must not
 *     claim that you wrote the original software. If you use this software
 *     in a product, an acknowledgment in the product documentation would be
 *     appreciated but is not required.
 * 
 *     2. Altered source versions must be plainly marked as such, and must not be
 *     misrepresented as being the original software.
 * 
 *     3. This notice may not be removed or altered from any source
 *     distribution.
 *
 */
#pragma once
#include <windows.h>
#include <cstdint>
#include <cstdio>

/*
    The following macros (#define) are relevant on this header:

    INJECTOR_GVM_HAS_TRANSLATOR
        If defined, the user should provide their own address_manager::translator function.
        That function is responssible for translating a void pointer (that mayn't be an actual pointer) into an actual address.
        The meaning of that void pointer will be made by YOU when you send it to the functions that receive pointers on this library.
        The default translator does nothing but returns that void pointer as the address.

    INJECTOR_GVM_OWN_DETECT
        If defined,  the user should provide it's own game detection function thought game_version_manager::Detect
        By default it provide an good detection for the Grand Theft Auto series.

    INJECTOR_GVM_PLUGIN_NAME
        If this is defined, it will be used as the plugin name used at error messages.
        By default it will use ""Unknown Plugin Name"

    INJECTOR_GVM_DUMMY
        If defined, the game_version_manager will be a dummy object
        By default it provides a nice gvm for Grand Theft Auto series
        
    INJECTOR_OWN_GVM
        If defined, the game_version_manager should be implemented by the user before including this library.
        By default it provides a nice gvm for Grand Theft Auto series
*/


namespace injector
{

#if 1       // GVM and Address Translator, Not very interesting for the users, so skip reading those...
    
/*
 *  game_version_manager
 *      Detects the game, the game version and the game region
 *      This assumes the executable is decrypted, so, Silent's ASI Loader is recommended.
 */
#ifndef INJECTOR_OWN_GVM 
#ifndef INJECTOR_GVM_DUMMY
class game_version_manager
{
	public:
		// Set this if you would like that MessagesBox contain PluginName as caption
		const char* PluginName;
        
	private:
        char game, region, major, minor, cracker, steam;

	public:
		game_version_manager()
		{
		    #ifdef INJECTOR_GVM_PLUGIN_NAME
		        PluginName = INJECTOR_GVM_PLUGIN_NAME;
		    #else
                PluginName = "Unknown Plugin Name";
            #endif
			
			this->Clear();
		}
        

	    // Clear any information about game version
	    void Clear()
	    {
	        game = region = major = minor = cracker = steam = 0;
	    }
        
		// Checks if I don't know the game we are attached to
		bool IsUnknown()		{ return game == 0; }
		// Checks if this is the steam version
		bool IsSteam()			{ return steam != 0; }
		// Gets the game we are attached to (0, '3', 'V', 'S')
		char GetGame()			{ return game; }
		// Gets the region from the game we are attached to (0, 'U', 'E');
		char GetRegion()		{ return region; }
		// Get major and minor version of the game (e.g. [major = 1, minor = 0] = 1.0)
		int GetMajorVersion()	{ return major; }
		int GetMinorVersion()	{ return minor; }
        
        bool IsHoodlum()        { return cracker == 'H'; }
        
        // Region conditions
        bool IsUS() { return region == 'U'; }
        bool IsEU() { return region == 'E'; }

        // Game Conditions
        bool IsIII() { return game == '3'; }
        bool IsVC () { return game == 'V'; }
        bool IsSA () { return game == 'S'; }

		// Detects game, region and version; returns false if could not detect it
		bool Detect();
        
		// Gets the game version as text, the buffer must contain at least 32 bytes of space.
        char* GetVersionText(char* buffer)
        {
            const char* g = this->IsIII()? "III" : this->IsVC()? "VC" : this->IsSA()? "SA" : "UNK";
            const char* r = this->IsUS()? "US" : this->IsEU()? "EURO" : "UNK_REGION";
            const char* s = this->IsSteam()? "Steam" : "";
            sprintf(buffer, "GTA %s %d.%d %s%s", g, major, minor, r, s);
            return buffer;
        }


	public:
		// Raises a error saying that you could not detect the game version
		void RaiseCouldNotDetect()
		{
			MessageBoxA(0,
				"Could not detect the game version\nContact the mod creator!",
				PluginName, MB_ICONERROR
			);
		}

		// Raises a error saying that the exe version is incompatible (and output the exe name)
		void RaiseIncompatibleVersion()
		{
			char buf[128], v[32];
			sprintf(buf,
				"An incompatible exe version has been detected! (%s)\nContact the mod creator!",
				GetVersionText(v)
				);
			MessageBoxA(0, buf, PluginName, MB_ICONERROR);
		}
};
#else   // INJECTOR_GVM_DUMMY
class game_version_manager
{
    public:
        bool Detect() { return true; }
};
#endif  // INJECTOR_GVM_DUMMY
#endif  // INJECTOR_OWN_GVM


/*
 *  address_manager
 *      Address translator from 1.0 executables to other executables offsets
 *      Inherits from game_version_manager ;)
 */
class address_manager : public game_version_manager
{
    private:
        address_manager()
        {
            this->Detect();
        }
        
        // You could implement your translator for the address your plugin uses
        // If not implemented, the translator won't translate anything, just return the samething as before
        #ifdef INJECTOR_GVM_HAS_TRANSLATOR
                void* translator(void* p);
        #else
                void* translator(void* p) { return p; }
        #endif

    public:
        // Translates address p to the running executable pointer
        void* translate(void* p)
        {
            return translator(p);
        }
        
        
    public:
        // Address manager singleton
        static address_manager& singleton()
        {
            static address_manager m;
            return m;
        }
        
        // Static version of translate()
        static void* translate_address(void* p)
        {
            return singleton().translate(p);
        }
        
        //
        static void set_name(const char* modname)
        {
            singleton().PluginName = modname;
        }
        
    public:
        // Functors for memory translation:
        
        // Translates nothing translator
        struct fn_mem_translator_nop
        {
            void* operator()(void* p) const
            { return p; }
        };
        
        // Real translator
        struct fn_mem_translator
        {
            void* operator()(void* p) const
            { return translate_address(p); }
        };
};

#endif  // #if 1



/*
 *  auto_ptr_cast 
 *      Casts itself to another pointer type in the lhs
 */
union auto_ptr_cast
{
	void*	 p;
	uintptr_t a;

	auto_ptr_cast() : p(0)                          {}
    auto_ptr_cast(const auto_ptr_cast& x) : p(x.p)  {}
	explicit auto_ptr_cast(void* x)    : p(x)       {}
	explicit auto_ptr_cast(uint32_t x) : a(x)       {}

	template<class T>
	operator T*() { return reinterpret_cast<T*>(p); }
	/*
	template<class T>
	operator const T*() { return reinterpret_cast<const T*>(p); }
	*/
};

/*
 *  basic_memory_pointer
 *      A memory pointer class that is capable of many operations, including address translation
 *      MemTranslator is the translator functor
 */
template<class MemTranslator>
union basic_memory_pointer
{
    private:
        void*	  p;
        uintptr_t a;
        
        // Translates address p to the running executable pointer
        static auto_ptr_cast memory_translate(void* p)
        {
            return auto_ptr_cast(MemTranslator()(p));
        }

    public:
        basic_memory_pointer()            : p(0)                           {}
        basic_memory_pointer(void* x)     : p(x)                           {}
        basic_memory_pointer(uintptr_t x) : a(x)                           {}
        basic_memory_pointer(const auto_ptr_cast& x) : p(x.p)              {}
        basic_memory_pointer(const basic_memory_pointer& rhs) : p(rhs.p)  {}

        template<class T>
        explicit basic_memory_pointer(T* x) : p((void*)x) {}
        
        // Gets the translated pointer (plus automatic casting to lhs)
        auto_ptr_cast get() const               { return memory_translate(p); }
        
        // Gets the translated pointer (casted to T*)
        template<class T> T* get() const        { return get(); }
        
        // Gets the raw pointer, without translation (casted to T*)
        template<class T> T* get_raw() const    { return auto_ptr_cast(p); }
        
        // This type can get assigned from void* and uintptr_t
        basic_memory_pointer& operator=(void* x)		{ return p = x, *this; }
        basic_memory_pointer& operator=(uintptr_t x)	{ return a = x, *this; }
        
        /* Arithmetic */
        basic_memory_pointer operator+(const basic_memory_pointer& rhs) const
        { return basic_memory_pointer(this->a + rhs.a); }
        
        basic_memory_pointer operator-(const basic_memory_pointer& rhs) const
        { return basic_memory_pointer(this->a - rhs.a); }
        
        basic_memory_pointer operator*(const basic_memory_pointer& rhs) const
        { return basic_memory_pointer(this->a * rhs.a); }
        
        basic_memory_pointer operator/(const basic_memory_pointer& rhs) const
        { return basic_memory_pointer(this->a / rhs.a); }
        
        
        /* Comparision */
        bool operator==(const basic_memory_pointer& rhs) const
        { return this->a == rhs.a; }
        
        bool operator!=(const basic_memory_pointer& rhs) const
        { return this->a != rhs.a; }
        
        bool operator<(const basic_memory_pointer& rhs) const
        { return this->a < rhs.a; }
        
        bool operator<=(const basic_memory_pointer& rhs) const
        { return this->a <= rhs.a; }
        
        bool operator>(const basic_memory_pointer& rhs) const
        { return this->a > rhs.a; }
        
        bool operator>=(const basic_memory_pointer& rhs) const
        { return this->a >=rhs.a; }
        
#if __cplusplus >= 201103L
        /* Conversion to other types */
        explicit operator uintptr_t()
        { return this->a; }
        explicit operator bool()
        { return this->p != nullptr; }
#else
        operator bool()
        { return this->p != nullptr; }
#endif

};

// Typedefs including memory translator for the above type
typedef basic_memory_pointer<address_manager::fn_mem_translator>       memory_pointer;
typedef basic_memory_pointer<address_manager::fn_mem_translator_nop>   memory_pointer_raw;

// Makes a memory_pointer_raw from another random type
template<class T>
inline memory_pointer_raw  raw_ptr(T p)
{
    return memory_pointer_raw(p);
}


/*
 *  lazy_pointer
 *      Lazy pointer, where it's final value will get evaluated only once when finally needed.
 */
template<uintptr_t addr>
struct lazy_pointer
{
    // Returns the final pointer
    static auto_ptr_cast xget()
    {
        static void* ptr = nullptr;
        if(!ptr) ptr = memory_pointer(addr).get();
        return auto_ptr_cast(ptr);
    }

    // Returns the final raw pointer
    static memory_pointer_raw get()
    {
        return xget();
    }
};



/*
 *  memory_pointer_tr
 *      Stores a basic_memory_pointer<Tr> as a raw pointer from translated pointer
 */
union memory_pointer_tr
{
    private:
        void*     p;
        uintptr_t a;
    
    public:
        template<class Tr>
        memory_pointer_tr(const basic_memory_pointer<Tr>& ptr)
            : p(ptr.get())
        {}      // Constructs from a basic_memory_pointer
      
        memory_pointer_tr(const auto_ptr_cast& ptr)
            : p(ptr.p)
        {}  // Constructs from a auto_ptr_cast, probably comming from basic_memory_pointer::get
        
        memory_pointer_tr(const memory_pointer_tr& rhs)
            : p(rhs.p)
        {}  // Constructs from my own type, copy constructor
        
        memory_pointer_tr(uintptr_t x)
            : p(memory_pointer(x).get())
        {}  // Constructs from a integer, translating the address
      
        memory_pointer_tr(void* x)
            : p(memory_pointer(x).get())
        {}  // Constructs from a void pointer, translating the address
        
        // Just to be method-compatible with basic_memory_pointer ...
        auto_ptr_cast        get()      { return auto_ptr_cast(p);     }
        template<class T> T* get()      { return get(); }
        template<class T> T* get_raw()  { return get(); }

        memory_pointer_tr operator+(const uintptr_t& rhs) const
        { return memory_pointer_raw(this->a + rhs); }
        
        memory_pointer_tr operator-(const uintptr_t& rhs) const
        { return memory_pointer_raw(this->a - rhs); }
        
        memory_pointer_tr operator*(const uintptr_t& rhs) const
        { return memory_pointer_raw(this->a * rhs); }
        
        memory_pointer_tr operator/(const uintptr_t& rhs) const
        { return memory_pointer_raw(this->a / rhs); }
        
#if __cplusplus >= 201103L && 1
       explicit operator uintptr_t()
       { return this->a; }
#else
#endif

};








/*
 *  ProtectMemory
 *      Makes the address @addr have a protection of @protection
 */
inline bool ProtectMemory(memory_pointer_tr addr, size_t size, DWORD protection)
{
	return VirtualProtect(addr.get(), size, protection, &protection) != 0;
}

/*
 *  UnprotectMemory
 *      Unprotect the memory at @addr with size @size so it have all accesses (execute, read and write)
 *      Returns the old protection to out_oldprotect
 */
inline bool UnprotectMemory(memory_pointer_tr addr, size_t size, DWORD& out_oldprotect)
{
	return VirtualProtect(addr.get(), size, PAGE_EXECUTE_READWRITE, &out_oldprotect) != 0;
}

/*
 *  scoped_unprotect
 *      RAII wrapper for UnprotectMemory
 *      On construction unprotects the memory, on destruction reprotects the memory
 */
struct scoped_unprotect
{
    memory_pointer_raw  addr;
    size_t              size;
    DWORD               dwOldProtect;
    bool                bUnprotected;

    scoped_unprotect(memory_pointer_tr addr, size_t size)
    {
        if(size == 0) bUnprotected = false;
        else          bUnprotected = UnprotectMemory(this->addr = addr.get<void>(), this->size = size, dwOldProtect);
    }
    
    ~scoped_unprotect()
    {
        if(bUnprotected) ProtectMemory(this->addr.get(), this->size, this->dwOldProtect);
    }
};








/*
 *  WriteMemoryRaw 
 *      Writes into memory @addr the content of @value with a sizeof @size
 *      Does memory unprotection if @vp is true
 */
inline void WriteMemoryRaw(memory_pointer_tr addr, void* value, size_t size, bool vp)
{
    scoped_unprotect xprotect(addr, vp? size : 0);
    memcpy(addr.get(), value, size);
}

/*
 *  ReadMemoryRaw 
 *      Reads the memory at @addr with a sizeof @size into address @ret
 *      Does memory unprotection if @vp is true
 */
inline void ReadMemoryRaw(memory_pointer_tr addr, void* ret, size_t size, bool vp)
{
    scoped_unprotect xprotect(addr, vp? size : 0);
    memcpy(ret, addr.get(), size);
}

/*
 *  MemoryFill 
 *      Fills the memory at @addr with the byte @value doing it @size times
 *      Does memory unprotection if @vp is true
 */
inline void MemoryFill(memory_pointer_tr addr, uint8_t value, size_t size, bool vp)
{
    scoped_unprotect xprotect(addr, vp? size : 0);
    memset(addr.get(), value, size);
}

/*
 *  WriteObject
 *      Assigns the object @value into the same object type at @addr
 *      Does memory unprotection if @vp is true
 */
template<class T>
inline T& WriteObject(memory_pointer_tr addr, const T& value, bool vp = false)
{
    scoped_unprotect xprotect(addr, vp? sizeof(value) : 0);
    return (*addr.get<T>() = value);
}

/*
 *  ReadObject
 *      Assigns the object @value with the value of the same object type at @addr
 *      Does memory unprotection if @vp is true
 */
template<class T>
inline T& ReadObject(memory_pointer_tr addr, T& value, bool vp = false)
{
    scoped_unprotect xprotect(addr, vp? sizeof(value) : 0);
    return (value = *addr.get<T>());
}


/*
 *  WriteMemory
 *      Writes the object of type T into the address @addr
 *      Does memory unprotection if @vp is true
 */
template<class T>
inline void WriteMemory(memory_pointer_tr addr, T value, bool vp = false)
{
    WriteObject(addr, value, vp);
}

/*
 *  ReadMemory
 *      Reads the object type T at address @addr
 *      Does memory unprotection if @vp is true
 */
template<class T>
inline T ReadMemory(memory_pointer_tr addr, bool vp = false)
{
    T value;
    return ReadObject(addr, value, vp);
}








/*
 *  GetAbsoluteOffset
 *      Gets absolute address based on relative offset @rel_value from instruction that ends at @end_of_instruction
 */
inline memory_pointer_raw GetAbsoluteOffset(int rel_value, memory_pointer_tr end_of_instruction)
{
    return end_of_instruction.get<char>() + rel_value;
}

/*
 *  GetRelativeOffset
 *      Gets relative offset based on absolute address @abs_value for instruction that ends at @end_of_instruction
 */
inline int GetRelativeOffset(memory_pointer_tr abs_value, memory_pointer_tr end_of_instruction)
{
	return uintptr_t(abs_value.get<char>() - end_of_instruction.get<char>());
}

/*
 *  ReadRelativeOffset
 *      Reads relative offset from address @at
 */
inline memory_pointer_raw ReadRelativeOffset(memory_pointer_tr at, size_t sizeof_addr = 4, bool vp = true)
{
	switch(sizeof_addr)
	{
		case 1: return (GetAbsoluteOffset(ReadMemory<int8_t> (at, vp), at+sizeof_addr));
		case 2: return (GetAbsoluteOffset(ReadMemory<int16_t>(at, vp), at+sizeof_addr));
		case 4: return (GetAbsoluteOffset(ReadMemory<int32_t>(at, vp), at+sizeof_addr));
	}
	return nullptr;
}

/*
 *  MakeRelativeOffset
 *      Writes relative offset into @at based on absolute destination @dest
 */
inline void MakeRelativeOffset(memory_pointer_tr at, memory_pointer_tr dest, size_t sizeof_addr = 4, bool vp = true)
{
	switch(sizeof_addr)
	{
		case 1: WriteMemory<int8_t> (at, static_cast<int8_t> (GetRelativeOffset(dest, at+sizeof_addr)), vp);
		case 2: WriteMemory<int16_t>(at, static_cast<int16_t>(GetRelativeOffset(dest, at+sizeof_addr)), vp);
		case 4: WriteMemory<int32_t>(at, static_cast<int32_t>(GetRelativeOffset(dest, at+sizeof_addr)), vp);
	}
}

/*
 *  GetBranchDestination
 *      Gets the destination of a branch instruction at address @at
 *      *** Works only with JMP and CALL for now ***
 */
inline memory_pointer_raw GetBranchDestination(memory_pointer_tr at, bool vp = true)
{
	switch(ReadMemory<uint8_t>(at, vp))
	{
        // We need to handle other instructions (and prefixes) later...
		case 0xE8:	// call rel
		case 0xE9:	// jmp rel
			return ReadRelativeOffset(at + 1, 4, vp);
	}
	return nullptr;
}

/*
 *  MakeJMP
 *      Creates a JMP instruction at address @at that jumps into address @dest
 *      If there was already a branch instruction there, returns the previosly destination of the branch
 */
inline memory_pointer_raw MakeJMP(memory_pointer_tr at, memory_pointer_tr dest, bool vp = true)
{
	auto p = GetBranchDestination(at, vp);
	WriteMemory<uint8_t>(at, 0xE9, vp);
	MakeRelativeOffset(at+1, dest, 4, vp);
	return p;
}

/*
 *  MakeCALL
 *      Creates a CALL instruction at address @at that jumps into address @dest
 *      If there was already a branch instruction there, returns the previosly destination of the branch
 */
inline memory_pointer_raw MakeCALL(memory_pointer_tr at, memory_pointer_tr dest, bool vp = true)
{
	auto p = GetBranchDestination(at, vp);
	WriteMemory<uint8_t>(at, 0xE8, vp);
	MakeRelativeOffset(at+1, dest, 4, vp);
	return p;
}

/*
 *  MakeJA
 *      Creates a JA instruction at address @at that jumps if above into address @dest
 *      If there was already a branch instruction there, returns the previosly destination of the branch
 */
inline void MakeJA(memory_pointer_tr at, memory_pointer_tr dest, bool vp = true)
{
	WriteMemory<uint16_t>(at, 0x87F0, vp);
	MakeRelativeOffset(at+2, dest, 4, vp);
}

/*
 *  MakeNOP
 *      Creates a bunch of NOP instructions at address @at
 */
inline void MakeNOP(memory_pointer_tr at, size_t count = 1, bool vp = true)
{
    MemoryFill(at, 0x90, count, vp);
}

/*
 *  MakeRET
 *      Creates a RET instruction at address @at popping @pop values from the stack
 *      If @pop is equal to 0 it will use the 1 byte form of the instruction
 */
inline void MakeRET(memory_pointer_tr at, uint16_t pop = 0, bool vp = true)
{
    WriteMemory<uint8_t>(at, pop? 0xC2 : 0xC3, vp);
    if(pop) WriteMemory<uint16_t>(at+1, pop, vp);
}






#ifndef INJECTOR_GVM_OWN_DETECT // Should we implement our detection method?

// Detects game, region and version; returns false if could not detect it
inline bool game_version_manager::Detect()
{
    // Cleanup data
    this->Clear();

    // Find NT header
    uintptr_t          base     = (uintptr_t) GetModuleHandleA(NULL);;
    IMAGE_DOS_HEADER*  dos      = (IMAGE_DOS_HEADER*)(base);
    IMAGE_NT_HEADERS*  nt       = (IMAGE_NT_HEADERS*)(base + dos->e_lfanew);
            
    // Look for game and version thought the entry-point
    // Thanks to Silent for many of the entry point offsets
    switch(base + nt->OptionalHeader.AddressOfEntryPoint)
    {
        case 0x5C1E70:  // GTA III 1.0
            game = '3', major = 1, minor = 0, region = 0, steam = false;
            return true;
            
        case 0x5C2130:  // GTA III 1.1
            game = '3', major = 1, minor = 1, region = 0, steam = false;
            return true;
            
        case 0x5C6FD0:  // GTA III 1.1 (Cracked Steam Version)
        case 0x9912ED:  // GTA III 1.1 (Encrypted Steam Version)
            game = '3', major = 1, minor = 1, region = 0, steam = true;
            return true;
    
        case 0x667BF0:  // GTA VC 1.0
            game = 'V', major = 1, minor = 0, region = 0, steam = false;
            return true;
            
        case 0x667C40:  // GTA VC 1.1
            game = 'V', major = 1, minor = 1, region = 0, steam = false;
            return true;

        case 0x666BA0:  // GTA VC 1.1 (Cracked Steam Version)
        case 0xA402ED:  // GTA VC 1.1 (Encrypted Steam Version)
            game = 'V', major = 1, minor = 1, region = 0, steam = true;
            return true;
    
        case 0x82457C:  // GTA SA 1.0 US Cracked
        case 0x824570:  // GTA SA 1.0 US Compact
            game = 'S', major = 1, minor = 0, region = 'U', steam = false;
            cracker = injector::ReadMemory<uint8_t>(raw_ptr(0x406A20), true) == 0xE9? 'H' : 0;
            return true;

        case 0x8245BC:  // GTA SA 1.0 EU Cracked
            game = 'S', major = 1, minor = 0, region = 'E', steam = false;
            return true;
            
        case 0x8252FC:  // GTA SA 1.1 US Cracked
            game = 'S', major = 1, minor = 1, region = 'U', steam = false;
            return true;
            
        case 0x82533C:  // GTA SA 1.1 EU Cracked
            game = 'S', major = 1, minor = 1, region = 'E', steam = false;
            return true;
            
        case 0x85EC4A:  // GTA SA 3.0 (Cracked Steam Version)
        case 0xD3C3DB:  // GTA SA 3.0 (Encrypted Steam Version)
            game = 'S', major = 3, minor = 0, region = 0, steam = true;
            return true;

        default:
            return false;
    }
}

#endif




} // namespace 

