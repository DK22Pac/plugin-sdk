/*
 * Copyright (C) 2014  LINK/2012 <dma_2012@hotmail.com>
 * Licensed under zlib license, see LICENSE at top level directory.
 *
 *  Menu Extender, See Below For More Details
 *
 */

#include <functional>

// Forward, do not include the files directly
struct MenuExtenderData;        // From SharedData
class CMenuManager;
class CSprite2d;
class CRect;
class CRGBA;
struct CMenuItem;
struct CMenuEntryData;


namespace plugin {

/*
    MenuExtender
        This class can extend easily extend the game menu content.
        Instantiate this class ONLY ONCE!! Call Initialise() before using.
        Feel free to derive from this to build your menu pieces.

        What does this class provide?
            [*] Methods to register and create new menu screens
            [*] Methods to register and create new menu actions
            [*] Methods to register and create new menu entry type (unsure about this concept)
            [*] Methods to easily access and modify game screens
            [*] Events to easily work and modify the game menu behaviour without any effort to place a hook
                    [*] Action Event        -- Here you can handle any action any menu entry triggers
                    [*] User Input Event    -- Here you can handle user inputs (up, down, enter, esc, left/right)
                    [*] Background Event    -- Here you can change the background sprite, rect and color of any menu
                    [*] Drawing Event       -- Here you can handle a special drawing for an menu, draw a brief text or any other kind of drawing


        Some TIPS to save menu indices, action indices and type indices:
            [*] Register only the really amount of necessary pages, remember you can modify pages on the fly!
            [*] Do not register new actions... Yeah, for what? On the Action Event Handler here you can just check if the screen and entry are yours!
            [*] Do not register new types... Same reason as above

*/
class MenuExtender
{
    public:
        static const int max_entries = 12;      // Max entries in a menu screen
        static const int max_pages = 128;       // Max possible menu pages
        static const int max_action = 255;
        static const int max_types   = 128;
        static const int action_goto_page = 5;
        static const int type_goto_page = 11;

    protected:
        MenuExtenderData* block;
        bool initialized;

    public:
        // INSTANTIATE ONLY ONCE!!!!!!!!!!
        MenuExtender() : block(0), initialized(false)
        {}

        // This class can be extended
        virtual ~MenuExtender()
        {}

        // Initialises the menu extender.
        // Why not on constructor? Because exe may be encrypted when asi gets loaded with an static MenuExtender being constructed
        void Initialise();

        // Registers @quantity number of menu pages and returns a pointer to them or null on failure
        CMenuItem* RegisterMenuScreen(int quantity = 1);

        // Registers @quantity number of entry actions and returns the first action registered (next follows it)
        // Returns -1 on failure
        int RegisterAction(int quantity = 1);

        // Registers @quantity number of entry types and returns the first type registered (next follows it)
        // Returns -1 on failure
        int RegisterEntryType(int quantity = 1);

        // Returns the pointer for the menu screen at index @i
        CMenuItem* GetScreen(int i = 0);

        // Gets the screen index from @screen
        int GetScreenIndex(const CMenuItem* screen);

        // Gets the screen with name @title or null on failure
        CMenuItem* GetScreen(const char* title);

        // Adds a new into into the specified menu @screen pointing to @target and using the gxt entry @text
        // On failure or if @screen is null, returns null
        CMenuEntryData* AddTargetMenu(CMenuItem* screen, CMenuItem* target, const char* text);

        // Sets the screen @target for the menu @entry. The entry will use the gxt entry @text and optionally the previous menu @prev
        // On failure or if @entry is null, returns null
        CMenuEntryData* SetTargetMenu(CMenuEntryData* entry, CMenuItem* target, const char* text, CMenuItem* prev = 0);

        // Gets the menu entry on the specified menu @screen with the gxt entry @entryname
        // On failure or if @screen is null, returns null
        CMenuEntryData* GetEntry(CMenuItem* screen, const char* entryname);

        // Adds a menu entry into the specified menu @screen
        // On failure or if @screen is null, returns null
        CMenuEntryData* AddEntry(CMenuItem* screen);

        // Gets the pointer to the main CMenuManager
        static CMenuManager* GetMenuManager();

        // Gets the current screen index in the CMenuManager @menumgr
        static int GetScreenFromMenuManager(CMenuManager* menumgr);
       
        // Gets the current selected entry index in the CMenuManager @menumgr
        static int GetEntryFromMenuManager(CMenuManager* menumgr);


    public:

        struct ActionInfo;
        struct UserInputInfo;
        struct BackgroundInfo; 
        struct DrawInfo;

        /*
            Events registering

            Things you should know:
                [*] You'll receive events for every entry and menu, you may filter only the events you care about (related to your menu or something)
                [*] The callbacks returns a boolean specifying if it should forward the event (to the game itself or another plugin)
                [*] The event information objects you receive are mutable and can modify the behaviour of the menu
                [*] You can register only one handler! (Of course this limitation is per ASI not global)
        */
        
        // Registers an action event, this is triggered when an menu entry gets pressed.
        // Check out ActionInfo for more details
        static void RegisterActionHandler(std::function<bool(ActionInfo&)> handler);

        // Registers an user input event, this is triggered every frame on the input processing
        // Check out UserInputInfo for more details
        static void RegisterUserInputHandler(std::function<bool(UserInputInfo&)> handler);

        // Registers an background event, this is triggered every frame on the menu rendering
        // Check out BackgroundInfo for more details
        static void RegisterBackgroundHandler(std::function<bool(BackgroundInfo&)> handler);

        // Registers an drawing event, this is triggered every frame on the menu rendering
        // Check out DrawInfo for more details
        static void RegisterDrawHandler(std::function<bool(DrawInfo&)> handler);



        // Base for any event information
        struct EventInfo
        {
            CMenuManager*         menumgr;      // The menu manager that triggered the event (CMenuManager)
            int                   screen;       // The menu page index that triggered the event (use GetScreen() to retrieve an CMenuItem)
            int                   entry;        // The menu entry index in the page that triggered the event or -1
            
            EventInfo(CMenuManager* menumgr, bool use_screen, bool use_entry) :
                menumgr(menumgr),
                screen(use_screen? GetScreenFromMenuManager(menumgr) : -1),
                entry(use_entry? GetEntryFromMenuManager(menumgr) : -1)
            { }
        };

        // Base for any action event (triggered by clicking an menu entry)
        struct ActionInfo : EventInfo
        {
            unsigned char         _rsvact;      // Reserved, don't touch!!!
            signed   char         wheel;        // The left/right movement (( < 0 is left; > 0 is right ))
            unsigned char         enter;        // The enter press

            ActionInfo(int wheel, int enter) :
                EventInfo(GetMenuManager(), true, true), _rsvact(0), wheel(wheel), enter(enter)
            {}
        };

        // Base for any user input event (triggered every frame)
        struct UserInputInfo : EventInfo
        {
            unsigned char down, up, enter, exit;    // Booleans, all obvious....
            char wheel;                             // The left/right movement (( < 0 is left; > 0 is right ))

            UserInputInfo(unsigned char down, unsigned char up, unsigned char enter, unsigned char exit, char wheel) :
                EventInfo(GetMenuManager(), true, true), down(down), up(up), enter(enter), exit(exit), wheel(wheel)
            {}
        };

        // Base for any background event (triggered every frame)
        struct BackgroundInfo : EventInfo
        {
            CSprite2d* sprite;                  // The sprite used for background or null for none
            CRect*     rect;                    // The rect to draw the sprite in, modify the value pointed by
            CRGBA*     rgba;                    // The color to draw the sprite in, modify the value pointed by

            BackgroundInfo(CSprite2d* sprite, CRect* rect, CRGBA* rgba) :
                EventInfo(GetMenuManager(), true, false), sprite(sprite), rect(rect), rgba(rgba)
            {}
        };

        // Base for any drawing event (triggered every frame)
        struct DrawInfo : EventInfo
        {
            unsigned char drawtitle;            // Boolean to specify if the menu title should be drawn

            DrawInfo(unsigned char drawtitle) :
                EventInfo(GetMenuManager(), true, true), drawtitle(drawtitle)
            {}
        };







    /*
        Action Handler Patching
    */
    private:
        static std::function<bool(ActionInfo&)>& action_handler()
        { static std::function<bool(ActionInfo&)> x; return x; }

        typedef bool(__fastcall *action_handler_t)(void*, int, signed char, unsigned char);
        static action_handler_t& action_handler_ptr() { static action_handler_t x; return x; }

        static void PatchActionHandler();

        static bool __fastcall ActionHandler(void* self, int, signed char wheel, unsigned char enter);


    /*
        Background Handler Patching
    */
    private:
        static std::function<bool(BackgroundInfo&)>& background_handler()
        { static std::function<bool(BackgroundInfo&)> x; return x; }

        typedef void(__fastcall *background_handler_t)(CSprite2d*, int, CRect*, CRGBA);
        static background_handler_t& background_handler_ptr() { static background_handler_t x; return x; }

        static void PatchBackgroundHandler();

        static void __fastcall BackgroundHandler(CSprite2d* self, int, CRect* rect, CRGBA rgba);

    /*
        User Input Handler Patching
    */
    private:
        static std::function<bool(UserInputInfo&)>& userinput_handler()
        { static std::function<bool(UserInputInfo&)> x; return x; }

        typedef void(__fastcall *userinput_handler_t)(void*, int, unsigned char, unsigned char, unsigned char, unsigned char, char);
        static userinput_handler_t& userinput_handler_ptr() { static userinput_handler_t x; return x; }


        static void PatchUserInputHandler();

        static void __fastcall UserInputHandler(void* self, int, unsigned char down, unsigned char up, unsigned char enter, unsigned char exit, char wheel);


    /*
        Draw Handler Patching
    */
    private:
        static std::function<bool(DrawInfo&)>& draw_handler()
        { static std::function<bool(DrawInfo&)> x; return x; }

        typedef void(__fastcall *draw_handler_t)(void*, int, unsigned char);
        static draw_handler_t& draw_handler_ptr() { static draw_handler_t x; return x; }

        static void PatchDrawHandler();

        static void __fastcall DrawHandler(void* self, int, unsigned char drawtitle);
  
    private:
        void Patch(CMenuItem* entries);
        static int Register(short& used, short quantity, short max);
        void Initialise(MenuExtenderData* block);
};



};
