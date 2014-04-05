#pragma once
#include <cstdint>
#include <windows.h>

// Constat values for easy tweaking...

// SharedData version
#define CBM_INTERFACE_VERSION       (0x1)

// The following values should never change for compatibility between shared memories
#define CBM_NAME                    "GTA_PLUGIN_SDK"    // Name of the mapped memory
#define CBM_SIZE                    (1024)              // Size of the mapped memory
#define CBM_DATA_SIZE               (2048)              // Size of he SharedData memory

#pragma pack(push, 1)

struct SharedData;  // See SharedData.hpp

// Mapped memory structure, this structure has an "real" size of 'mmap_size' bytes
// This structure should be backward compatible
struct ControllerBlock
{
    uint32_t    version;        // Interface version        (CBM_INTERFACE_VERSION)
    HANDLE      heap;           // Windows Heap used to allocate memory common between the libraries
                                // Every data that will be shared between the libraries should be allocate on this heap
    
    
    uint32_t    data_size;      // The size of the memory allocated for the 'data' block
    SharedData* data;    // Shared data between the plugins
};

#pragma pack(pop)

/*
 *  ControllerBlockManager
 *      This stores the instance of the controller block (SharedBase*) and controls it's behaviour
 *      It's an per-library class and it works as follow:
 * 
 *          * The first plugin to load will note that there's no controller block created yet, so it will create it
 *          * Then this first plugin will allocate it's SharedData block and store it at ControllerBlock::data
 *          * This first plugin and all others will map this controller block and possibily access the shared data
 *          * If any plugin loaded next finds out that it's 'interface_version' is greather than the current ControllerBlock::version
 *            It will tweak the shared data to fit it's new needs. This tweak should be backward compatible!!
 *          * When each plugin exits, it will unmap it's view of the controller block, but do nothing with the shared data itself
 * 
 *      Known problems of this technique: 
 *          * Not thread-safe
 *          * The shared data will never be freed, that means that plugins should get loaded and unloaded only once
 * 
 *          All those looks ok and not a problem at all for it's pratical usage
 * 
 */
class ControllerBlockManager
{
    public:
        
        // Simple initialization
        ControllerBlockManager() : hMemory(NULL), pMemory(0)
        {
            // Don't open the controller here, an lazy-open is better
            // because if the plugin end up not using any piece of the controller block
            // no resource will be wasted
            // Let the block be open at 'GetController' method
        }
        
        // Finishes this controller block manager
        ~ControllerBlockManager()
        {
            // Closes any mapped controller
            this->Close();
        }
        
        
        // -------------------------> Interface  Access Routines
        
        // Gets the shared controller block pointer
        ControllerBlock* GetController()
        {
            // If the block isn't opened yet, open it, force it, we should have it!!
            if(!this->Open()) Raise();
            return pMemory;
        }
        
        SharedData* GetInterface()
        {
            // Make sure the controller is open and get it's data part
            return GetController()->data;
        }
        
        // Gets the controller block manager singleton
        static ControllerBlockManager& GetInstance()
        {
            static ControllerBlockManager singleton;
            return singleton;
        }
       
        
        
        // -------------------------> Shared Memory Allocation Routines
        
        // Allocates memory with @size, if requested (@zeromem) the memory will be filled with 0x0
        void* Alloc(size_t size, bool zeromem = false)
        {
            return HeapAlloc(GetController()->heap, zeromem? HEAP_ZERO_MEMORY : 0, size);
        }
        
        // Reallocates memory @pMem with @size and if requested (@zeromem) fills the new space with 0x0
        void* Realloc(void* pMem, size_t size, bool zeromem = false)
        {
            return HeapReAlloc(GetController()->heap, zeromem? HEAP_ZERO_MEMORY : 0, pMem, size);
        }
        
        // Frees memory @pMem
        void Free(void* pMem)
        {
            HeapFree(GetController()->heap, 0, pMem);
        }
        

        // -------------------> Open / Close Routines
        
        // Creates or opens the controller block
        bool Open(bool bOpenExistingOnly = false)
        {
            if(!this->IsOpen())                 // If not open yet...
            {
                this->OpenController();         // Try to open an existing block...
                
                if(bOpenExistingOnly == false)
                {
                    if(!this->IsOpen())             // No block existing yet...
                        this->CreateController();   // Create the block now!
                }
            }
            return (this->IsOpen());
        }
        
        // Closes the controller block
        void Close()
        {
            this->CloseController();
        }
        
        // Checks if the controller block is open
        bool IsOpen()
        {
            return (this->pMemory && this->hMemory);
        }
        
        
    private:
        HANDLE              hMemory;        // Handle to the mapped memory
        ControllerBlock*    pMemory;        // Pointer to the mapped memory

        // Initialises the shared interface
        void InitialiseInterface()
        {
            pMemory->version = CBM_INTERFACE_VERSION;
            pMemory->data = (SharedData*) this->Alloc(pMemory->data_size = 2048, true);
        }
        
        // Checks if the controller interface is up to date with this interface_version
        bool IsInterfaceUpToDate()
        {
            return (pMemory->version >= CBM_INTERFACE_VERSION);
        }
        
        // Updates the controller block interface with this interface_version information
        void UpdateInterface()
        {
            // Nothing here, no interface updating exists yet
            // I hope this doesn't get needed at all :)
            // Here we should update the controller block interface to a newer version to the current in use
            // Maybe we'll not even need to reallocate some memory because CBM_DATA_SIZE is big enought, check data_size
            
            Raise();    // Raise an error, this should never be called for now
        }
        

        
        // Tries to open the controller block (if it already exists)
        void OpenController()
        {
            // Get handle to the mapped memory
            if(hMemory || (hMemory = OpenFileMappingA(FILE_MAP_ALL_ACCESS, FALSE, CBM_NAME)))
            {
                // Get the mapped memory pointer
                this->MapMemory();

                if(this->IsOpen())
                {
                    // Updates the controller interface if necessary
                    if(this->IsInterfaceUpToDate() == false)
                        this->UpdateInterface();
                }
            }
        }
        
        // Creates the controller block (meaning it still doesn't exist and needs to be created)
        void CreateController()
        {
            // Creates the memory mapping
            if(hMemory || (hMemory = CreateFileMappingA(INVALID_HANDLE_VALUE, NULL, PAGE_READWRITE | SEC_COMMIT, 0, CBM_SIZE, CBM_NAME)))
            {
                // Get the mapped memory pointer
                this->MapMemory();
                
                // Initialies the controller block
                pMemory->heap = HeapCreate(0, 8000, 0);
                if(!pMemory->heap) Raise();
                this->InitialiseInterface();
            }
        }
        
        // Closes the controller block
        void CloseController()
        {
            if(hMemory)
            {
                HANDLE hHeap = pMemory->heap;           // Backup the heap handle
                this->CloseController(0);               // Close the controller now
                
                // If the controller doesn't exist anymore destroy it's memory heap
                if(!this->DoesControllerExist())       
                {
                    HeapDestroy(hHeap);
                }
            }
        }
        
        // Another piece of CloseController(), this does the actual closing
        void CloseController(int)
        {
            // Dispose the mapped pointer
            this->UnmapMemory();
            // Finishes the memory handle
            CloseHandle(hMemory);
            hMemory = NULL;
        }
        
        // Checks if the controller already exists in the process
        bool DoesControllerExist()
        {
            // If it's open of course it exists
            if(this->IsOpen()) return true;
            
            // Open it to check if it exists
            if(HANDLE hMap = OpenFileMappingA(FILE_MAP_ALL_ACCESS, FALSE, CBM_NAME))
            {
                // Yes, it does, close it and tell that it exists
                CloseHandle(hMap);
                return true;
            }
            
            // Nope
            return false;
        }
        
        

        
        // Maps the mapped memory to a pointer
        void MapMemory()
        {
            if(!pMemory)
            {
                // Map the memory
                pMemory = (ControllerBlock*) MapViewOfFile(hMemory, FILE_MAP_ALL_ACCESS, 0, 0, 0);
            }
        }
        
        // Unmaps the mapped memory pointer
        void UnmapMemory()
        {
            if(pMemory)
            {
                UnmapViewOfFile(pMemory);
                pMemory = 0;
            }
        }

        // Raises that an error happened
        void Raise()
        {
            MessageBoxA(0, "Fatal error on ControllerBlockManager", "Plugin SDK", MB_ICONERROR);
            ExitProcess(222);
        }
        
};


