/*
 * Copyright (C) 2014 LINK/2012 <dma_2012@hotmail.com>
 * Copyright (C) 2014 Silent <zdanio95@gmail.com>
 * Licensed under zlib license, see LICENSE at top level directory.
 *
 */

#include <cassert>
#include "MenuExtender.h"
#include <injector/injector.hpp>
#include <game_sa/CMenuManager.h>       // For MenuItem / MenuItemEntry
#include "shared/SharedData.hpp"

namespace plugin {

// Initialises this manager
void MenuExtender::Initialise()
{
    if(!this->initialized)
    {
        this->initialized = true;
        this->Initialise(&ControllerBlockManager::GetInterface(0)->menuExtender);
    }
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

// Registers @quantity number of menu pages and returns a pointer to them or null on failure
CMenuItem* MenuExtender::RegisterMenuScreen(int quantity)
{
    auto i = Register(block->nUsedItems, quantity, max_pages);
    if(i != -1) return &block->pItems[i];
    return nullptr;
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
CMenuItem* MenuExtender::GetScreen(int i)
{
    return block? &block->pItems[i] : nullptr;
}

// Gets the screen index from @screen
int MenuExtender::GetScreenIndex(const CMenuItem* screen)
{
    assert(initialized);
    return screen - GetScreen(0);
}

// Gets the screen with name @title or null on failure
CMenuItem* MenuExtender::GetScreen(const char* title)
{
    for(int i = 0; i < max_pages; ++i)
    {
        auto& screen = block->pItems[i];
        if(!strcmp(title, screen.m_szTitleName)) return &screen;
    }
    return nullptr;
}




// Adds a new into into the specified menu @screen pointing to @target and using the gxt entry @text
// On failure or if @screen is null, returns null
CMenuEntryData* MenuExtender::AddTargetMenu(CMenuItem* screen, CMenuItem* target, const char* text)
{
    if(auto entry = AddEntry(screen))
    {
        SetTargetMenu(entry, target, text, screen);
        entry->m_nAlign = 3;
    }
    return nullptr;
}

// Sets the screen @target for the menu @entry. The entry will use the gxt entry @text and optionally the previous menu @prev
// On failure or if @entry is null, returns null
CMenuEntryData* MenuExtender::SetTargetMenu(CMenuEntryData* entry, CMenuItem* target, const char* text, CMenuItem* prev)
{
    if(entry)
    {
        if(prev) target->m_nPrevMenu = GetScreenIndex(prev);
        entry->m_nActionType = action_goto_page;
        entry->m_nType = type_goto_page;
        entry->m_nTargetMenu = GetScreenIndex(target);
        strcpy(entry->m_szName, text);
        return entry;
    }
    return nullptr;
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

// Gets the pointer to the main CMenuManager
CMenuManager* MenuExtender::GetMenuManager()
{
    return injector::lazy_pointer<0xBA6748>().xget();
}

// Gets the current screen index in the CMenuManager @menumgr
int MenuExtender::GetScreenFromMenuManager(CMenuManager* menumgr)
{
    return *(char*)((uintptr_t)(menumgr)+0x15D);
}

// Gets the current selected entry in the CMenuManager @menumgr
int MenuExtender::GetEntryFromMenuManager(CMenuManager* menumgr)
{
    return *(int*)((uintptr_t)(menumgr)+0x54);
}



/*
    Event Handlers Registers
*/
void MenuExtender::RegisterActionHandler(std::function<bool(ActionInfo&)> handler)
{
    action_handler() = handler;
    PatchActionHandler();
}

void MenuExtender::RegisterUserInputHandler(std::function<bool(UserInputInfo&)> handler)
{
    userinput_handler() = handler;
    PatchUserInputHandler();
}

void MenuExtender::RegisterBackgroundHandler(std::function<bool(BackgroundInfo&)> handler)
{
    background_handler() = handler;
    PatchBackgroundHandler();
}

void MenuExtender::RegisterDrawHandler(std::function<bool(DrawInfo&)> handler)
{
    draw_handler() = handler;
    PatchDrawHandler();
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
        action_handler_ptr() = MakeCALL(0x576FEF, raw_ptr(ActionHandler)).get();
    }
}

bool __fastcall MenuExtender::ActionHandler(void* self, int, signed char wheel, unsigned char enter)
{
    ActionInfo info(wheel, enter);
    return (action_handler()(info) || action_handler_ptr()(self, 0, info.wheel, info.enter));
}


void MenuExtender::PatchBackgroundHandler()
{
    static bool patched = false;
    if(!patched)
    {
        using namespace injector;
        patched = true;
        background_handler_ptr() = MakeCALL(0x57B9FD, raw_ptr(BackgroundHandler)).get();
    }
}

void __fastcall MenuExtender::BackgroundHandler(CSprite2d* self, int, CRect* rect, CRGBA rgba)
{
    BackgroundInfo info(self, rect, &rgba);
    if(background_handler()(info)) return background_handler_ptr()(info.sprite, 0, info.rect, *info.rgba);
}

void MenuExtender::PatchUserInputHandler()
{
    static bool patched = false;
    if(!patched)
    {
        using namespace injector;
        patched = true;
        userinput_handler_ptr() = MakeCALL(0x58061B, raw_ptr(UserInputHandler)).get();
    }
}

void __fastcall MenuExtender::UserInputHandler(void* self, int, unsigned char down, unsigned char up, unsigned char enter, unsigned char exit, char wheel)
{
    UserInputInfo info(down, up, enter, exit, wheel);
    if(userinput_handler()(info)) return userinput_handler_ptr()(self, 0, info.down, info.up, info.enter, info.exit, info.wheel);
}

void MenuExtender::PatchDrawHandler()
{
    static bool patched = false;
    if(!patched)
    {
        using namespace injector;
        patched = true;
        draw_handler_ptr() = MakeCALL(0x57BA58, raw_ptr(DrawHandler)).get();
    }
}

void __fastcall MenuExtender::DrawHandler(void* self, int, unsigned char drawtitle)
{
    DrawInfo info(drawtitle);
    if(draw_handler()(info)) return draw_handler_ptr()(self, 0, info.drawtitle);
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