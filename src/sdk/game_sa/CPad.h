#pragma once
#include <plugin/plugin.h>

#define FUNC_CPad__AddToPCCheatString 0x438480
#define FUNC_CPad__DoCheats 0x439AF0
#define FUNC_CPad__ResetCheats 0x438450

#define VAR_CPad__KeyBoardCheatString 0x969110
#define VAR_CPad__CheatEnabledArray 0x969130
#define VAR_CPad__bHasPlayerCheated 0x96918C

// #define MAX_SIZEOF_

#pragma pack(push, 1)
// Set values to 128 unless otherwise specified
class CControllerState
{
public:
        signed short LeftStickX; // move/steer left (-128?)/right (+128)
        signed short LeftStickY; // move back(+128)/forwards(-128?)
        signed short RightStickX; // numpad 6(+128)/numpad 4(-128?)
        signed short RightStickY;
        
        signed short LeftShoulder1;
        signed short LeftShoulder2;
        signed short RightShoulder1; // target / hand brake
        signed short RightShoulder2; 
        
        signed short DPadUp; // radio change up
        signed short DPadDown; // radio change down
        signed short DPadLeft;
        signed short DPadRight;


        signed short Start;
        signed short Select;


        signed short ButtonSquare; // jump / reverse
        signed short ButtonTriangle; // get in/out
        signed short ButtonCross; // sprint / accelerate
        signed short ButtonCircle; // fire


        signed short ShockButtonL;
        signed short ShockButtonR; // look behind


        signed short m_bChatIndicated;
        signed short m_bPedWalk;
        signed short m_bVehicleMouseLook;
        signed short m_bRadioTrackSkip;

		/*
		NOINLINE CControllerState() {
			PREPARE_FOR_REDIRECTION()	// redirect to 
                // memset(this, 0, sizeof(CControllerState));
				// GetCurrentDirectory(3, "fds");
        }
		*/
};
#pragma pack(pop)

VALIDATE_SIZE(CControllerState, 0x30);

#define KEYBOARD_CHEAT_STRING_COUNTOF 30
#define MIN_VALID_CHEAT_STRING_LEN 6

#pragma pack(push, 1)
class PLUGIN_API CPad
{
public:
	bool CycleWeaponRightJustDown();
	bool CycleWeaponLeftJustDown();

	// VARIABLES

  CControllerState NewState;
  CControllerState OldState;
  __int16 SteeringLeftRightBuffer[10];
  int DrunkDrivingBufferUsed;
  CControllerState PCTempKeyState;
  CControllerState PCTempJoyState;
  CControllerState PCTempMouseState;
  char Phase;
  char field_109;
  __int16 Mode;
  __int16 ShakeDur;
  __int16 DisablePlayerControls;
  char ShakeFreq;
  char bHornHistory[5];
  char field_116;
  char field_117;
  char field_118;
  char m_bDisablePlayerEnterCar;
  char m_bDisablePlayerDuck;
  char m_bDisablePlayerFireWeapon;
  char m_bDisablePlayerFireWeaponWithL1;
  char m_bDisablePlayerCycleWeapon;
  char m_bDisablePlayerJump;
  char m_bDisablePlayerDisplayVitalStats;
  char field_120;
  char field_121;
  char field_122;
  char field_123;
  char field_124;
  char field_125;
  char field_126;
  char field_127;
  int field_128;
  int field_12C;
  char field_130;
  char field_131;
  __int16 field_132;


	// Static variables

	// Keyboard cheat string, the last typed character is at index [0], the second last typed character is at index [1].
	// Countof: KEYBOARD_CHEAT_STRING_COUNTOF
	static char* KeyBoardCheatString;

	// Array of cheat states
	static bool* CheatEnabledArray;

	// True if player has cheated
	static bool& bHasPlayerCheated;

	// FUNCTIONS

	// Constructor
	NOINLINE CPad();
  
	// Destructor
	NOINLINE ~CPad();

	// Adds character to cheat string
	static void AddToPCCheatString(char character);

	// Processes keyboard input for cheat purpose
	static void DoCheats();

	// Resets cheats
	static void ResetCheats();
};
#pragma pack(pop)

VALIDATE_SIZE(CPad, 0x134);
