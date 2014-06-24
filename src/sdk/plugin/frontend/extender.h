/*
 * Copyright (C) 2014  LINK/2012 <dma_2012@hotmail.com>
 * Licensed under zlib license, see LICENSE at top level directory.
 *
 *  Menu Extender, See Below For More Details
 *  This is suposed to be a low-level abstraction, not limiting your mind, and so only have basic/necessary functionalities.
 *
 */
#pragma once
#include <functional>

// Forward, do not include the files directly
struct MenuExtenderData;        // From SharedData
class CMenuManager;
class CSprite2d;
class CRect;
class CRGBA;
class CText;
struct CMenuItem;
struct CMenuEntryData;


namespace plugin {

/**
    MenuExtender
        This class can extend easily extend the game menu content.
        Instantiate this class ONLY ONCE!! Call Initialise() before using.
        Feel free to derive from this to build your menu pieces.

        What does this class provide?
            [*] Methods to register and create new menu pages
            [*] Methods to register and create new menu actions
            [*] Methods to register and create new menu entry type (unsure about this concept)
            [*] Methods to easily access and modify game menu pages
            [*] Events to easily work and modify the game menu behaviour without any effort to place a hook
                    [*] Action Event        -- Here you can handle any action any menu entry triggers
                    [*] User Input Event    -- Here you can handle user inputs (up, down, enter, esc, left/right)
                    [*] Background Event    -- Here you can change the background sprite, rect and color of any menu
                    [*] Drawing Event       -- Here you can handle a special drawing for an menu, draw a brief text or any other kind of drawing


        Some TIPS to save menu indices, action indices and type indices:
            [*] Register only the really amount of necessary pages, remember you can modify pages on the fly!
            [*] Do not register new actions... Yeah, for what? On the Action Event Handler here you can just check if the page and entry are yours!
            [*] Do not register new types... Same reason as above
            [*] As said above to not register action/types, you could use the MenuExtender::special_action and MenuExtender::special_type to use as dummy
                to redirect to your pointer checking
*/
class MenuExtender
{
    public:
        static const int max_entries = 12;      // Max entries in a menu page
        static const int max_pages = 127;       // Max possible menu pages
        static const int max_action = 255 - 1;  // (one of them is for dummyness)
        static const int max_types   = 127 - 1; // (^^^)
        static const int action_goto_page = 5;
        static const int type_goto_page = 11;

        static const int dummy_action = max_action + 1;
        static const int dummy_type   = max_types + 1;

    protected:
        MenuExtenderData* block;
        bool initialized;

    public:
        MenuExtender() : block(0), initialized(false)
        {}

        // This class can be extended deeply (and it's recommended to)
        virtual ~MenuExtender()
        {}


        /**
         *  Initialises the menu extender.
         *   
         *  Why not on constructor? Because exe may be encrypted when asi gets loaded with an static MenuExtender being constructed
         *  Please note you should initialise ONLY ONE MenuExtender EVER in a single plugin.
         */
        void Initialise();


        /**
         *  Gets the MenuExtender instance
         *  @return The currently initialized MenuExtender
         */
        static MenuExtender*& Instance();


        /**
         *  Registers new menu pages
         *  @param quantity     The quantity of pages to regiser
         *  @return             Returns an array of pages on null on failure
         */ 
        CMenuItem* RegisterMenuPage(int quantity = 1);

        /**
         *  Registers entry actions
         *  @param quantity     The quantity of actions to regiser
         *  @return             The first action registered or -1 on failure
         */
        int RegisterAction(int quantity = 1);

        /**
         *  Registers entry types
         *  @param quantity     The quantity of types to regiser
         *  @return             The first type registered or -1 on failure
         */
        int RegisterEntryType(int quantity = 1);



        /**
         *  Returns the pointer to the menu page at the specified index
         *  @param i            The index to retrieve the page from
         *  @return             The page at the specified index or null on failure
         */
        CMenuItem* GetPage(int i = 0);

        /**
         *  Returns the index from the specified menu page
         *  @param page         The page to retrieve the index from
         *  @return             The page index or -1 on failure
         */
        int GetPageIndex(const CMenuItem* page);

        /**
         *  Gets a page with the specified title
         *  @param title        The page title to find
         *  @return             The page with the specified title or null if page hasn't been found
         */
        CMenuItem* GetPage(const char* title);

        /**
         *  Gets a page with the specified title
         *  @param title        The page title to find
         *  @param pages        The pages array to find in
         *  @param npages       The number of pages in the array to find in
         */
        CMenuItem* GetPage(const char* title, CMenuItem* pages, size_t npages);


        /**
         *  Adds a new entry into the specified menu page pointing to another menu
         *  @param page     The page to add the entry into
         *  @param target   The target page the entry should point to
         *  @return         Returns the newly created entry or null on failure or if page or target are null
         */
        CMenuEntryData* AddTargetMenu(CMenuItem* page, CMenuItem* target, const char* text);

        /**
         *  Adds a new entry into the specified menu page pointing to another menu.
         *  Be careful with this function, it will invalidate any index/pointer to the 'before' entry and the entries following it
         *  @param page     The page to add the entry into
         *  @param before   The new entry will be created before this entry
         *  @param target   The target page the entry should point to
         *  @return         Returns the newly created entry or null on failure or if page, target or before are null
         */
        CMenuEntryData* AddTargetMenuBefore(CMenuItem* page, CMenuEntryData* before, CMenuItem* target, const char* text);

        /**
         *  Sets the target menu page for the specified menu entry
         *  @param entry    The entry to change the target page
         *  @param target   The target page
         *  @param text     An gxt entry for entry or null to not change it's gxt entry
         *  @param prev     Optional previous page for the target page
         *  @return         Returns entry or null on failure or if entry is null
         */
        CMenuEntryData* SetTargetMenu(CMenuEntryData* entry, CMenuItem* target, const char* text, CMenuItem* prev = 0);


        /**
         *  Setups the specified array of pages with relative page relationship
         *
         *  What this does is changes any target page (or previous page) on the pages of the array to be relative to the first page index
         *  So if the second page on the array points (by target page) to a page number '4' it will be set to point to the page of index 4 on the array
         *  This basically does (pages[i].SomePageReference += GetPageIndex(pages[0])) on all pages of the array
         *
         *  If any page reference is negative, it will be turned to positive, absolute referencing a page.
         *
         *  @param pages    The array of pages to setup
         *  @param npage    The number of pages on the array
         */
        void RelativeSetup(CMenuItem* pages, size_t npages);


        /*
         *  Gets an entry at the specified menu page
         *  @param page         The page to search the entry for
         *  @param entryname    The entry name to search for
         *  @return             Returns the entry found or null on failure or if page is null
         */
        static CMenuEntryData* GetEntry(CMenuItem* page, const char* entryname);

        /*
         *  Adds a new menu entry into the specified menu page
         *  @param page         The page to add the entry in
         *  @return             Returns the added entry or null on failure or if page is null
         */
        CMenuEntryData* AddEntry(CMenuItem* page);

        /*
         *  Adds a new menu entry into the specified menu page
         *  Be careful with this function, it will invalidate any index/pointer to the 'before' entry and the entries following it
         *  @param page         The page to add the entry in
         *  @param before       Add the entry before this one
         *  @return             Returns the added entry or null on failure or if page or before are null
         */
        CMenuEntryData* AddEntryBefore(CMenuItem* page, CMenuEntryData* before);



        /**
         *  Gets the pointer to the main menu manager
         *  @return             The main menu manager
         */
        static CMenuManager* GetMenuManager();

        /**
         *  Gets the currently displayed page index in the menu manager
         *  @return             An modifiable reference to the currently displayed page index
         */
        static char& GetCurrentPageIndex();
       
        /**
         *  Gets the currently selected entry index in the menu manager
         *  @return             An modifiable reference to the currently selected entry index
         */
        static int& GetCurrentEntryIndex();


    public:

        struct ActionInfo;
        struct UserInputInfo;
        struct BackgroundInfo; 
        struct DrawInfo;
        struct StateTextInfo;

        /**
            Events registering

            Things you should know:
                [*] You'll receive events for every entry and menu, you may filter only the events you care about (related to your menu or something)
                [*] The callbacks returns a boolean specifying if it should forward the event (to the game itself or another plugin)
                [*] The event information objects you receive are mutable and can modify the behaviour of the menu
                [*] You can register only one handler! (Of course this limitation is per ASI not global)
        */
        
        /**
         *  Registers an action event, this is triggered when an menu entry gets pressed.
         *  Check out ActionInfo for more details
         */
        void RegisterActionListener(std::function<bool(ActionInfo&)> handler);

        /**
         *  Registers an user input event, this is triggered every frame on the input processing
         *  Check out UserInputInfo for more details
         */
        void RegisterUserInputListener(std::function<bool(UserInputInfo&)> handler);

        /**
         *  Registers an background event, this is triggered every frame on the menu rendering
         *  Check out BackgroundInfo for more details
         */
        void RegisterBackgroundListener(std::function<bool(BackgroundInfo&)> handler);

        /**
         *  Registers an drawing event, this is triggered every frame on the menu rendering
         *  Check out DrawInfo for more details
         */
        void RegisterDrawListener(std::function<bool(DrawInfo&)> handler);

        /**
         *  Registers an state text event, this is triggered every frame on the menu rendering if a custom page is being displayed
         *  An state text event is those "ON/OFF", "1,2,3,...." texts after a menu entry
         *  Check out StateTextInfo for more details
         */
        void RegisterStateTextListener(std::function<bool(StateTextInfo&)> handler);




        /**
         *  Base for any event information
         */
        struct EventInfo
        {
            CMenuManager*         menumgr;      ///< The menu manager that triggered the event
            CMenuItem*            page;         ///< The menu page that triggered the event or null if none
            CMenuEntryData*       entry;        ///< The menu entry index in the page that triggered the event or null
            void*                 user;         ///< High-Level User Data

            EventInfo(bool use_page, bool use_entry);
        };

        /**
         * Action event (triggered by clicking an menu entry)
         */
        struct ActionInfo : EventInfo
        {
            unsigned char         action;       ///< The action triggered
            signed   char         wheel;        ///< The left/right movement (( < 0 is left; > 0 is right ))
            unsigned char         enter;        ///< The enter press

            ActionInfo(int wheel, int enter);
        };

        // Base for any user input event (triggered every frame)
        struct UserInputInfo : EventInfo
        {
            unsigned char down, up, enter, exit;    ///< Booleans, all obvious....
            char wheel;                             ///< The left/right movement (( < 0 is left; > 0 is right ))

            UserInputInfo(unsigned char down, unsigned char up, unsigned char enter, unsigned char exit, char wheel) :
                EventInfo(true, true), down(down), up(up), enter(enter), exit(exit), wheel(wheel)
            {}
        };


        /**
         *  Background event (triggered every frame)
         */
        struct BackgroundInfo : EventInfo
        {
            CSprite2d* sprite;                  ///< The sprite used for background or null for none
            CRect*     rect;                    ///< The rect to draw the sprite in, modify the value pointed by
            CRGBA*     rgba;                    ///< The color to draw the sprite in, modify the value pointed by

            BackgroundInfo(CSprite2d* sprite, CRect* rect, CRGBA* rgba) :
                EventInfo(true, false), sprite(sprite), rect(rect), rgba(rgba)
            {}
        };

        /**
         *  Drawing event (triggered every frame)
         */
        struct DrawInfo : EventInfo
        {
            unsigned char drawtitle;            ///< Boolean to specify if the menu title should be drawn

            DrawInfo(unsigned char drawtitle) :
                EventInfo(true, true), drawtitle(drawtitle)
            {}
        };


        /**
         *  State text event (triggered every frame if in a custom menu page)
         */
        struct StateTextInfo : EventInfo
        {
            CText* ctext;                   ///< CText
            const char* gxtentry;           ///< GXT entry for the state
            const char* text;               ///< Raw text for the state  (may be null to use gxt entry)
            CMenuEntryData* parsing_entry;  ///< The entry being parsed to draw the state text

            StateTextInfo(CText* ctext, const char* gxtentry) :
                EventInfo(true, true), ctext(ctext), gxtentry(gxtentry), text(nullptr)
            {}
        };






    /*
        Action Handler Patching
    */
    private:
        static void PatchActionHandler();
        static bool __fastcall ActionHandler(void* self, int, signed char wheel, unsigned char enter);


    /*
        Background Handler Patching
    */
    private:
        static void PatchBackgroundHandler();
        static void __fastcall BackgroundHandler(CSprite2d* self, int, CRect* rect, CRGBA* rgba);

    /*
        User Input Handler Patching
    */
    private:
        static void PatchUserInputHandler();
        static void __fastcall UserInputHandler(void* self, int, unsigned char down, unsigned char up, unsigned char enter, unsigned char exit, char wheel);


    /*
        Draw Handler Patching
    */
    private:
        static void PatchDrawHandler();
        static void __fastcall DrawHandler(void* self, int, unsigned char drawtitle);
  
    /*
        State Text Patching
    */
    private:
        static void PatchStateTextHandler();
        static const char* __fastcall StateTextHandler(CText* self, int, const char* gxtentry);


    private:
        void Patch(CMenuItem* entries);
        static int Register(short& used, short quantity, short max);
        void Initialise(MenuExtenderData* block);
};



};
