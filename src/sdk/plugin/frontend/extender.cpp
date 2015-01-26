/*
 * Copyright (C) 2014 LINK/2012 <dma_2012@hotmail.com>
 * Copyright (C) 2014 Silent <zdanio95@gmail.com>
 * Licensed under zlib license, see LICENSE at top level directory.
 *
 */

#include <cassert>
#include <algorithm>
#include "extender.h"
#include <injector/injector.hpp>
#include <game_sa/CMenuManager.h>
#include <plugin/shared/SharedData.hpp>


namespace plugin {

void MenuExtender::Initialise()
{
    Instance() = this;      // Set instance always
    if(!this->initialized)
    {
        // Initialise only once
        this->initialized = true;
        this->Initialise(&ControllerBlockManager::GetInterface(0)->menuExtender);
    }
}

MenuExtender*& MenuExtender::Instance()
{
    static MenuExtender* inst;
    return inst;
}


// Initialises the shared block
void MenuExtender::Initialise(MenuExtenderData* block)
{
    this->block = block;

    if(block->pItems == nullptr)        // Initializes only if it hasn't yet
    {
        block->nUsedTypes = 13;         // By default the game uses 13 entry types
        block->nUsedItems = 44;         // ...44 menu pages
        block->nUsedActions = 66;       // ...and 66 actions

        // Allocate the new menu pages array and copy the previous data into it
        block->pItems = (CMenuItem*) ControllerBlockManager::GetInstance().Alloc(sizeof(CMenuItem) * max_pages);
        injector::ReadMemoryRaw(0x8CE008, block->pItems, sizeof(CMenuItem) * block->nUsedItems, false);
        Patch(block->pItems);   // patch all references of aScreens
    }
}




// Registers @quantity into @used taking into account the maximum value @used can be is @max
// Returns the first value or -1 on failure
int MenuExtender::Register(short& used, short quantity, short max)
{
    if((used + quantity) <= max)
    {
        used += quantity;
        return used - quantity;
    }
    return -1;
}

// Registers @quantity number of menu pages and returns a pointer to them or null on failure
CMenuItem* MenuExtender::RegisterMenuPage(int quantity)
{
    auto i = Register(block->nUsedItems, quantity, max_pages);
    if(i != -1) return &block->pItems[i];
    return nullptr;
}



// Registers @quantity number of entry actions and returns the first action registered (next follows it)
// Returns -1 on failure
int MenuExtender::RegisterAction(int quantity)
{
    return Register(block->nUsedActions, quantity, max_action);
}

// Registers @quantity number of entry types and returns the first type registered (next follows it)
// Returns -1 on failure
int MenuExtender::RegisterEntryType(int quantity)
{
    return Register(block->nUsedTypes, quantity, max_types);
}





// Returns the pointer for the menu screen at index @i
CMenuItem* MenuExtender::GetPage(int i)
{
    return block && i >= 0? &block->pItems[i] : nullptr;
}

// Gets the screen index from @screen
int MenuExtender::GetPageIndex(const CMenuItem* screen)
{
    assert(initialized);
    return screen - GetPage(0);
}

// Get menu page with @title
CMenuItem* MenuExtender::GetPage(const char* title)
{
    return GetPage(title, block->pItems, max_pages);
}

// Get page with @title at the @pages array with size @npages
CMenuItem* MenuExtender::GetPage(const char* title, CMenuItem* pages, size_t npages)
{
    if(pages)
    {
        for(size_t i = 0; i < npages; ++i)
            if(!strcmp(title, pages[i].m_szTitleName)) return &pages[i];
    }
    return nullptr;
}



// Adds a new entry into into the specified menu @screen pointing to @target and using the gxt entry @text
// On failure or if @screen is null, returns null
CMenuEntryData* MenuExtender::AddTargetMenu(CMenuItem* screen, CMenuItem* target, const char* text)
{
    if(screen && target)
    {
        if(auto entry = AddEntry(screen))
        {
            SetTargetMenu(entry, target, text, screen);
            entry->m_nAlign = 3;
            return entry;
        }
    }
    return nullptr;
}


// Adds a new entry into the specified menu @screen poiting to @target and using gxt entry @text
// Adds the target before the specified @before
// On failure or if @screen or @before is null, returns null
CMenuEntryData* MenuExtender::AddTargetMenuBefore(CMenuItem* screen, CMenuEntryData* before, CMenuItem* target, const char* text)
{
    if(screen && before && target)
    {
        if(auto entry = AddEntryBefore(screen, before))
        {
            SetTargetMenu(entry, target, text, screen);
            target->m_nStartingEntry = entry - &screen->m_aEntries[0];
            entry->m_nAlign = 3;
            return entry;
        }
    }
    return nullptr;
}


// Sets the screen @target for the menu @entry. The entry will use the gxt entry @text and optionally the previous menu @prev
// On failure or if @entry is null, returns null
CMenuEntryData* MenuExtender::SetTargetMenu(CMenuEntryData* entry, CMenuItem* target, const char* text, CMenuItem* prev)
{
    if(entry && target)
    {
        if(prev) target->m_nPrevMenu = GetPageIndex(prev);
        entry->m_nActionType = action_goto_page;
        entry->m_nType = type_goto_page;
        entry->m_nTargetMenu = GetPageIndex(target);
        strcpy(entry->m_szName, text);
        return entry;
    }
    return nullptr;
}


// Setups the specified menu @pages array replacing all pages references (NextPage, PrevPage, ...) with a relative relationship on the array.
// The size of the pages array is specified by @npages
void MenuExtender::RelativeSetup(CMenuItem* pages, size_t npages)
{
    if(pages)
    {
        // Find base index for pages array
        auto base = npages? GetPageIndex(&pages[0]) : 0;

        for(size_t i = 0; i < npages; ++i)
        {
            auto& page = pages[i];

            // Set relative prev menu
            page.m_nPrevMenu = page.m_nPrevMenu < 0? -page.m_nPrevMenu : base + page.m_nPrevMenu;

            // Set relative target menus
            for(int k = 0; k < max_entries; k++)
            {
                auto& entry = page.m_aEntries[k];
                entry.m_nTargetMenu = entry.m_nTargetMenu < 0? -entry.m_nTargetMenu : base + entry.m_nTargetMenu;
            }
        }
    }
}





// Gets the menu entry on the specified menu @screen with the gxt entry @entryname
// On failure or if @screen is null, returns null
CMenuEntryData* MenuExtender::GetEntry(CMenuItem* screen, const char* entryname)
{
    if(screen)
    {
        for(int i = 0; i < max_entries; ++i)
        {
            auto& entry = screen->m_aEntries[i];
            if(!strcmp(entryname, entry.m_szName)) return &entry;
        }
    }
    return nullptr;
}

// Adds a menu entry into the specified menu @screen
// On failure or if @screen is null, returns null
CMenuEntryData* MenuExtender::AddEntry(CMenuItem* screen)
{
    if(screen)
    {
        for(int i = 0; i < max_entries; ++i)
        {
            auto& entry = screen->m_aEntries[i];
            if(entry.m_szName[0] == 0)
            {
                memset(&entry, 0, sizeof(entry));
                return &entry;
            }
        }
    }
    return nullptr;
}

// Adds a new menu entry at the page @screen before entry @before
CMenuEntryData* MenuExtender::AddEntryBefore(CMenuItem* screen, CMenuEntryData* before)
{
    if(screen && before)
    {
        for(int i = 0; i < max_entries; ++i)
        {
            auto& entry = screen->m_aEntries[i];
            if(&entry == before)
            {
                auto distance = std::distance(before, std::end(screen->m_aEntries));
                if(distance > 1)    // At leat one free space on the aEntries array
                {
                    // Move the items after the @before entry (and itself)
                    memmove(before+1, before, sizeof(CMenuEntryData) * (distance - 1));
                    // Done
                    memset(&entry, 0, sizeof(entry));
                    return &entry;
                }
            }
        }
    }
    return nullptr;
}







// Gets the pointer to the main CMenuManager
CMenuManager* MenuExtender::GetMenuManager()
{
    return injector::lazy_pointer<0xBA6748>().xget();
}

// Gets the current screen index in the CMenuManager @menumgr
char& MenuExtender::GetCurrentPageIndex()
{
    return *(char*)((uintptr_t)(GetMenuManager())+0x15D);
}

// Gets the current selected entry in the CMenuManager @menumgr
int& MenuExtender::GetCurrentEntryIndex()
{
    return *(int*)((uintptr_t)(GetMenuManager())+0x54);
}




/*
    Handlers
*/
static std::function<bool(MenuExtender::ActionInfo&)> action_handler;
static bool(__fastcall *action_handler_ptr)(void*, int, signed char, unsigned char);
        
static std::function<bool(MenuExtender::BackgroundInfo&)> background_handler;
static void(__fastcall *background_handler_ptr)(CSprite2d*, int, CRect*, CRGBA*);

static std::function<bool(MenuExtender::DrawInfo&)> draw_handler;
static void(__fastcall *draw_handler_ptr)(void*, int, unsigned char);

static std::function<bool(MenuExtender::UserInputInfo&)> userinput_handler;
static void(__fastcall *userinput_handler_ptr)(void*, int, unsigned char, unsigned char, unsigned char, unsigned char, char);

static std::function<bool(MenuExtender::StateTextInfo&)> state_text_handler;
static const char*(__fastcall *state_text_handler_ptr)(CText*, int, const char*);


MenuExtender::EventInfo::EventInfo(bool use_page, bool use_entry) :
        menumgr(GetMenuManager()),
        page(nullptr), entry(nullptr), user(nullptr)
{
    if(use_page)
    {
        auto i = GetCurrentPageIndex();
        if(i >= 0 && i < max_pages)
        {
            if(page = Instance()->GetPage(i))
            {
                if(use_entry)
                {
                    i = GetCurrentEntryIndex();
                    if(i >= 0 && i < max_entries) entry = &page->m_aEntries[i];
                }
            }
        }
    }
}

MenuExtender::ActionInfo::ActionInfo(int wheel, int enter) :
    EventInfo(true, true),
    action(entry? entry->m_nActionType : 0), wheel(wheel), enter(enter)
{}




/*
    Event Handlers Registers
*/
void MenuExtender::RegisterActionListener(std::function<bool(ActionInfo&)> handler)
{
    action_handler = handler;
    PatchActionHandler();
}

void MenuExtender::RegisterUserInputListener(std::function<bool(UserInputInfo&)> handler)
{
    userinput_handler = handler;
    PatchUserInputHandler();
}

void MenuExtender::RegisterBackgroundListener(std::function<bool(BackgroundInfo&)> handler)
{
    background_handler = handler;
    PatchBackgroundHandler();
}

void MenuExtender::RegisterDrawListener(std::function<bool(DrawInfo&)> handler)
{
    draw_handler = handler;
    PatchDrawHandler();
}

void MenuExtender::RegisterStateTextListener(std::function<bool(StateTextInfo&)> handler)
{
    state_text_handler = handler;
    PatchStateTextHandler();
}




/*
    Event Handlers Patchers
*/
void MenuExtender::PatchActionHandler()
{
    static bool patched = false;
    if(!patched)
    {
        using namespace injector;
        patched = true;
        action_handler_ptr = MakeCALL(0x576FEF, raw_ptr(ActionHandler)).get();
    }
}

bool __fastcall MenuExtender::ActionHandler(void* self, int, signed char wheel, unsigned char enter)
{
    ActionInfo info(wheel, enter);
    return ((action_handler && !action_handler(info)) || action_handler_ptr(self, 0, info.wheel, info.enter));
}


void MenuExtender::PatchBackgroundHandler()
{
    static bool patched = false;
    if(!patched)
    {
        using namespace injector;
        patched = true;
        background_handler_ptr = MakeCALL(0x57B9FD, raw_ptr(BackgroundHandler)).get();
    }
}

void __fastcall MenuExtender::BackgroundHandler(CSprite2d* self, int, CRect* rect, CRGBA* rgba)
{
    BackgroundInfo info(self, rect, rgba);
    if(!background_handler || background_handler(info)) return background_handler_ptr(info.sprite, 0, info.rect, info.rgba);
}

void MenuExtender::PatchUserInputHandler()
{
    static bool patched = false;
    if(!patched)
    {
        using namespace injector;
        patched = true;
        userinput_handler_ptr = MakeCALL(0x58061B, raw_ptr(UserInputHandler)).get();
    }
}

void __fastcall MenuExtender::UserInputHandler(void* self, int, unsigned char down, unsigned char up, unsigned char enter, unsigned char exit, char wheel)
{
    UserInputInfo info(down, up, enter, exit, wheel);
    if(!userinput_handler || userinput_handler(info)) return userinput_handler_ptr(self, 0, info.down, info.up, info.enter, info.exit, info.wheel);
}

void MenuExtender::PatchDrawHandler()
{
    static bool patched = false;
    if(!patched)
    {
        using namespace injector;
        patched = true;
        draw_handler_ptr = MakeCALL(0x57BA58, raw_ptr(DrawHandler)).get();
    }
}

void __fastcall MenuExtender::DrawHandler(void* self, int, unsigned char drawtitle)
{
    DrawInfo info(drawtitle);
    if(!draw_handler || draw_handler(info)) return draw_handler_ptr(self, 0, info.drawtitle);
}


/*
    So, this event handler (StateText) is a bit more complicated...
    We should keep track of the entry index being parsed...
*/

static int iStateTextEntryIndex;    // The entry index being parsed

template<bool ResetCounter>
struct StateTextEntryIncreaser      // Hooks at CFont::SetAligment to reset or increase the entry index
{
    typedef int (*FuncBefore_t)(int);

    static FuncBefore_t& FuncBefore() { static FuncBefore_t x; return x; }

    static int Increaser(int a1)
    {
        iStateTextEntryIndex = ResetCounter? -1 : iStateTextEntryIndex + 1;
        return FuncBefore()(a1);
    }

    static void Patch(uintptr_t addr)
    {
        FuncBefore() = injector::MakeCALL(addr, injector::raw_ptr( (void*) &Increaser)).get();
    }
};

void MenuExtender::PatchStateTextHandler()
{
    static bool patched = false;
    if(!patched)
    {
        using namespace injector;
        patched = true;
        injector::MakeRelativeOffset(0x579D9D+2, 0x579DEE);
        state_text_handler_ptr = MakeCALL(0x57A161, raw_ptr(StateTextHandler)).get();
        StateTextEntryIncreaser<true>::Patch(0x5794CB);     // Reset the entry index here
        StateTextEntryIncreaser<false>::Patch(0x579AC9);    // Increase the entry index here
    }
}

const char* __fastcall MenuExtender::StateTextHandler(CText* self, int, const char* gxtentry)
{
    StateTextInfo info(self, gxtentry);

    // Ok, so, we're hooking the language entries for state text, let's see if this is it
    if(!strncmp(info.gxtentry, "FEL_", 4) && info.page)
    {
        // Get the currently parsing entry
        info.parsing_entry = &info.page->m_aEntries[iStateTextEntryIndex];

        if(info.parsing_entry->m_nType < 1 || info.parsing_entry->m_nType > 8)
        {
            // If it's not language action, it's to be handled by us!!!
            if(info.parsing_entry->m_nActionType != 36) // Language Action
            {
                info.gxtentry = gxtentry = "";

                if(state_text_handler)
                {
                    if(!state_text_handler(info) || info.text)
                        return info.text;
                }

                // If the text doesn't get found, we're not suposed to have a state text (info.gxtentry is probably empty)
                const char* text = state_text_handler_ptr(info.ctext, 0, info.gxtentry);
                return text[0]? text : nullptr;
            }
        }
        else
        {
            auto GetSavedGameDateAndTime = (const char*(*)(int)) injector::lazy_pointer<0x618D00>().get();
            return GetSavedGameDateAndTime(iStateTextEntryIndex - 1);
        }
    }
    return state_text_handler_ptr(info.ctext, 0, info.gxtentry);
}



/*
    Patches the game to use the specified MenuEntriesList
*/
void MenuExtender::Patch(CMenuItem* MenuEntriesList)
{
    // Wrapper around Silent's patch() function
    auto patch = [](uintptr_t addr, void* val, int size)
    {
        injector::WriteMemory<void*>(addr, val, true);
    };

    patch(0x57345A, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x57370A, &MenuEntriesList->m_nStartingEntry, 4);
    patch(0x573713, &MenuEntriesList->m_nPrevMenu, 4);
    patch(0x573728, &MenuEntriesList->m_nPrevMenu, 4);
    patch(0x57373D, &MenuEntriesList->m_nPrevMenu, 4);
    patch(0x573752, &MenuEntriesList->m_nPrevMenu, 4);
    patch(0x573772, &MenuEntriesList->m_aEntries->m_nTargetMenu, 4);
    patch(0x573EA9, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x576B08, &MenuEntriesList->m_aEntries[1].m_nTargetMenu, 4);
    patch(0x576B1E, &MenuEntriesList->m_aEntries[1].m_nTargetMenu, 4);
    patch(0x576B38, MenuEntriesList, 4);
    patch(0x576B58, &MenuEntriesList->m_aEntries->m_szName, 4);
    patch(0x577017, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x57723D, &MenuEntriesList->m_aEntries->m_nTargetMenu, 4);
    patch(0x577280, &MenuEntriesList->m_aEntries->m_nType, 4);
    patch(0x5772F2, &MenuEntriesList->m_aEntries->m_nType, 4);
    patch(0x579568, MenuEntriesList, 4);
    patch(0x57967E, MenuEntriesList, 4);
    patch(0x5796AF, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x57981F, &MenuEntriesList->m_aEntries->m_szName, 4);
    patch(0x5798D6, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x5798FC, &MenuEntriesList->m_aEntries->m_nType, 4);
    patch(0x579AB2, &MenuEntriesList->m_aEntries->m_nAlign, 4);
    patch(0x579AE4, &MenuEntriesList->m_aEntries->m_wPosnX, 4);
    patch(0x579AEE, &MenuEntriesList->m_aEntries->m_wPosnY, 4);
    patch(0x579AF7, &MenuEntriesList->m_aEntries->m_nType, 4);
    patch(0x579B10, &MenuEntriesList->m_szTitleName[4], 4);
    patch(0x579B17, &MenuEntriesList->m_aEntries->m_wPosnX, 4);
    patch(0x579B2E, &MenuEntriesList->m_szTitleName[6], 4);
    patch(0x579B3A, &MenuEntriesList->m_aEntries->m_wPosnY, 4);
    patch(0x579B43, &MenuEntriesList->m_aEntries->m_wPosnX, 4);
    patch(0x579B5A, &MenuEntriesList->m_aEntries->m_wPosnY, 4);
    patch(0x579B70, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x579B7A, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x579B8B, &MenuEntriesList->m_aEntries->m_szName, 4);
    patch(0x579B9F, &MenuEntriesList->m_aEntries->m_nType, 4);
    patch(0x579BC3, &MenuEntriesList->m_aEntries->m_wPosnX, 4);
    patch(0x579C83, &MenuEntriesList->m_aEntries->m_wPosnX, 4);
    patch(0x579D20, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x579D3F, &MenuEntriesList->m_szTitleName[6], 4);
    patch(0x579D4A, &MenuEntriesList->m_aEntries->m_wPosnY, 4);
    patch(0x579D93, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x57A18A, &MenuEntriesList->m_aEntries->m_wPosnY, 4);
    patch(0x57A1BD, &MenuEntriesList->m_aEntries->m_wPosnX, 4);
    patch(0x57A235, &MenuEntriesList->m_aEntries->m_nType, 4);
    patch(0x57A39F, &MenuEntriesList->m_aEntries->m_wPosnY, 4);
    patch(0x57A455, &MenuEntriesList->m_aEntries->m_nAlign, 4);
    patch(0x57A469, &MenuEntriesList->m_aEntries->m_wPosnX, 4);
    patch(0x57A4B9, &MenuEntriesList->m_aEntries->m_wPosnX, 4);
    patch(0x57A4DA, &MenuEntriesList->m_aEntries->m_wPosnX, 4);
    patch(0x57A54F, &MenuEntriesList->m_aEntries->m_wPosnY, 4);
    patch(0x57A615, &MenuEntriesList->m_aEntries->m_szName, 4);
    patch(0x57A65D, &MenuEntriesList->m_aEntries->m_szName, 4);
    patch(0x57A6A5, &MenuEntriesList->m_aEntries->m_szName, 4);
    patch(0x57A6E6, &MenuEntriesList->m_aEntries->m_szName, 4);
    patch(0x57A729, &MenuEntriesList->m_aEntries->m_szName, 4);
    patch(0x57A77C, &MenuEntriesList->m_aEntries->m_szName, 4);
    patch(0x57A7BE, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x57B27E, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x57B4F2, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x57B519, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x57B52A, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x57B534, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x57B588, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x57B5A4, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x57B5C9, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x57B5E9, &MenuEntriesList->m_aEntries[1].m_nActionType, 4);
    patch(0x57B601, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x57B629, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x57B69C, &MenuEntriesList->m_aEntries->m_nType, 4);
    patch(0x57B6F1, &MenuEntriesList->m_aEntries->m_nType, 4);
    patch(0x57C313, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x57CD6B, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x57D26C, &MenuEntriesList->m_aEntries[2].m_nTargetMenu, 4);
    patch(0x57D287, &MenuEntriesList->m_aEntries[2].m_nTargetMenu, 4);
    patch(0x57D2D2, &MenuEntriesList->m_aEntries[2].m_nTargetMenu, 4);
    patch(0x57D6D8, &MenuEntriesList->m_aEntries->m_szName, 4);
    patch(0x57D701, &MenuEntriesList->m_aEntries->m_szName, 4);
    patch(0x57E3F7, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x57FE0A, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x57FE25, &MenuEntriesList->m_aEntries->m_szName, 4);
    patch(0x57FE57, &MenuEntriesList->m_aEntries->m_wPosnY, 4);
    patch(0x57FE96, &MenuEntriesList->m_aEntries->m_wPosnY, 4);
    patch(0x57FF5F, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x57FFAE, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x580316, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x580496, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x5804EB, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x5805D3, &MenuEntriesList->m_aEntries->m_nActionType, 4);
    patch(0x57FE57, &MenuEntriesList->m_aEntries->m_wPosnY, 4);
    patch(0x57FE96, &MenuEntriesList->m_aEntries->m_wPosnY, 4);
}

}
