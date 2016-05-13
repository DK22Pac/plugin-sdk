#include "CPad.h"

// Keyboard cheat string, the last typed character is at index [0], the second last typed character is at index [1].
// Countof: KEYBOARD_CHEAT_STRING_COUNTOF
char* CPad::KeyBoardCheatString = (char*)VAR_CPad__KeyBoardCheatString;

// Array of cheat states
bool* CPad::CheatEnabledArray = (bool*)VAR_CPad__CheatEnabledArray;

// True if player has cheated
bool& CPad::bHasPlayerCheated = *(bool*)VAR_CPad__bHasPlayerCheated;

// mouse states
CMouseControllerState & CPad::PCTempMouseControllerState = *(CMouseControllerState *)0xB73404;
CMouseControllerState & CPad::NewMouseControllerState = *(CMouseControllerState *)0xB73418;
CMouseControllerState & CPad::OldMouseControllerState = *(CMouseControllerState *)0xB7342C;

// Constructor
CPad::CPad()
{
    ((void (__thiscall *)(CPad *))0x541D80)(this);
}
  
// Destructor
CPad::~CPad()
{
    ((void (__thiscall *)(CPad *))0x541D80)(this);
}

// Adds character to cheat string
void CPad::AddToPCCheatString(char character)
{
	((void (__cdecl*)(char))FUNC_CPad__AddToPCCheatString)(character);
}

// Processes keyboard input for cheat purpose
void CPad::DoCheats()
{
	((void (__cdecl*)())FUNC_CPad__DoCheats)();
}

// Resets cheats
void CPad::ResetCheats()
{
	((void (__cdecl*)())FUNC_CPad__ResetCheats)();
}

bool CPad::CycleWeaponRightJustDown()
{
	return ((bool (__thiscall *)(CPad *))0x540640)(this);
}

bool CPad::CycleWeaponLeftJustDown()
{
	return ((bool (__thiscall *)(CPad *))0x540610)(this);
}
