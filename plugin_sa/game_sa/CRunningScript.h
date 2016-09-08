/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"
#include "ePedType.h"
#include "eCommandName.h"
#include "eWeaponType.h"

#define FUNC_CRunningScript__Init 0x4648E0
#define FUNC_CRunningScript__GetArrayOffsetAndValueOfIndexVariable 0x463CF0
#define FUNC_CRunningScript__GetOffsetOfGlobalVariable 0x464700
#define FUNC_CRunningScript__GetPointerToScriptVariable 0x464790
#define FUNC_CRunningScript__GetPointerLocalVariableByArrayIndex 0x463CC0

#define FUNC_CRunningScript__ProcessOneCommand 0x469EB0
#define FUNC_CRunningScript__CollectParameters 0x464080
#define FUNC_CRunningScript__CollectStringParameter 0x463D50
#define FUNC_CRunningScript__StoreParameters 0x464370
#define FUNC_CRunningScript__CollectParametersToNewScript 0x464500
#define FUNC_CRunningScript__Process 0x469F00
#define FUNC_CRunningScript__DoDeatharrestCheck 0x485A50
#define FUNC_CRunningScript__CollectNextParameterWithoutIncreasingPC 0x464250
#define FUNC_CRunningScript__SetIntructionPointer 0x464DA0
#define FUNC_CRunningScript__UpdateCompareFlag 0x4859D0
#define FUNC_CRunningScript__AddScriptToList 0x464C00
#define FUNC_CRunningScript__RemoveScriptFromList 0x464BD0
#define FUNC_CRunningScript__GetPadState 0x485B10
#define FUNC_CRunningScript__TerminateThisScript 0x465AA0

#define FUNC_CRunningScript__CheckDamagedWeaponType 0x43D9E0
#define FUNC_CRunningScript__CarInAreaCheckCommand 0x488EC0
#define FUNC_CRunningScript__CharInAreaCheckCommand 0x488B50
#define FUNC_CRunningScript__LocateCarCommand 0x487A20
#define FUNC_CRunningScript__LocateCharCarCommand 0x487420
#define FUNC_CRunningScript__LocateCharCharCommand 0x4870F0
#define FUNC_CRunningScript__LocateCharCommand 0x486D80
#define FUNC_CRunningScript__LocateCharObjectCommand 0x487720
#define FUNC_CRunningScript__LocateObjectCommand 0x487D10
#define FUNC_CRunningScript__ObjectInAreaCheckCommand 0x489150
#define FUNC_CRunningScript__ThisIsAValidRandomPed 0x489490

// Command handlers
#define FUNC_CRunningScript__ProcessCommands_0To99 0x465E60
#define FUNC_CRunningScript__ProcessCommands_100To199 0x466DE0
#define FUNC_CRunningScript__ProcessCommands_200To299 0x469390
#define FUNC_CRunningScript__ProcessCommands_300To399 0x47C100
#define FUNC_CRunningScript__ProcessCommands_400To499 0x47D210
#define FUNC_CRunningScript__ProcessCommands_500To599 0x47E090
#define FUNC_CRunningScript__ProcessCommands_600To699 0x47F370
#define FUNC_CRunningScript__ProcessCommands_700To799 0x47FA30
#define FUNC_CRunningScript__ProcessCommands_800To899 0x481300
#define FUNC_CRunningScript__ProcessCommands_900To999 0x483BD0
#define FUNC_CRunningScript__ProcessCommands_1000To1099 0x489500
#define FUNC_CRunningScript__ProcessCommands_1100To1199 0x48A320
#define FUNC_CRunningScript__ProcessCommands_1200To1299 0x48B590
#define FUNC_CRunningScript__ProcessCommands_1300To1399 0x48CDD0
#define FUNC_CRunningScript__ProcessCommands_1400To1499 0x48EAA0
#define FUNC_CRunningScript__ProcessCommands_1500To1599 0x490DB0
#define FUNC_CRunningScript__ProcessCommands_1600To1699 0x493FE0
#define FUNC_CRunningScript__ProcessCommands_1700To1799 0x496E00
#define FUNC_CRunningScript__ProcessCommands_1800To1899 0x46D050
#define FUNC_CRunningScript__ProcessCommands_1900To1999 0x46B460
#define FUNC_CRunningScript__ProcessCommands_2000To2099 0x472310
#define FUNC_CRunningScript__ProcessCommands_2100To2199 0x470A90
#define FUNC_CRunningScript__ProcessCommands_2200To2299 0x474900
#define FUNC_CRunningScript__ProcessCommands_2300To2399 0x4762D0
#define FUNC_CRunningScript__ProcessCommands_2400To2499 0x478000
#define FUNC_CRunningScript__ProcessCommands_2500To2599 0x47A760
#define FUNC_CRunningScript__ProcessCommands_2600To2699 0x479DA0

enum eArgumentDataTypesFormat_GTA_III_VC_SA : __int8
{
	SCM_ARGUMENT_TYPE_END_OF_ARGUMENTS,
	SCM_ARGUMENT_TYPE_STATIC_INT_32BITS,
	SCM_ARGUMENT_TYPE_GLOBAL_NUMBER_VARIABLE,
	SCM_ARGUMENT_TYPE_LOCAL_NUMBER_VARIABLE,
	SCM_ARGUMENT_TYPE_STATIC_INT_8BITS,
	SCM_ARGUMENT_TYPE_STATIC_INT_16BITS,
	SCM_ARGUMENT_TYPE_STATIC_FLOAT,

	// Types below are only available in GTA SA
	SCM_ARGUMENT_TYPES_INTRODUCED_IN_GTASA,

	// Number arrays
	SCM_ARGUMENT_TYPE_GLOBAL_NUMBER_ARRAY = SCM_ARGUMENT_TYPES_INTRODUCED_IN_GTASA,

	SCM_ARGUMENT_TYPE_LOCAL_NUMBER_ARRAY,
	SCM_ARGUMENT_TYPE_STATIC_SHORT_STRING,
	SCM_ARGUMENT_TYPE_GLOBAL_SHORT_STRING_VARIABLE,
	SCM_ARGUMENT_TYPE_LOCAL_SHORT_STRING_VARIABLE,
	SCM_ARGUMENT_TYPE_GLOBAL_SHORT_STRING_ARRAY,
	SCM_ARGUMENT_TYPE_LOCAL_SHORT_STRING_ARRAY,
	SCM_ARGUMENT_TYPE_STATIC_PASCAL_STRING,
	SCM_ARGUMENT_TYPE_STATIC_LONG_STRING,
	SCM_ARGUMENT_TYPE_GLOBAL_LONG_STRING_VARIABLE,
	SCM_ARGUMENT_TYPE_LOCAL_LONG_STRING_VARIABLE,
	SCM_ARGUMENT_TYPE_GLOBAL_LONG_STRING_ARRAY,
	SCM_ARGUMENT_TYPE_LOCAL_LONG_STRING_ARRAY,
};


union tScriptVarValue 
{
	unsigned __int32	dwParam;
	__int32			nParam;
	float			fParam;
	void		*pParam;
	char		*szParam;
};

VALIDATE_SIZE(tScriptVarValue, 0x4);

#pragma pack(push, 1)
class PLUGIN_API CRunningScript
{
public:
	// FUNCTIONS
	CRunningScript	*next;
	CRunningScript	*prev;
	char			threadName[8];
	uint8_t			*baseIP;
	uint8_t			*curIP;			
	uint8_t			*gosubStack[8];
	uint16_t		gosubStackLevel;
	uint16_t			_f3A;
	tScriptVarValue	tls[32];	
	uint32_t		timers[2];	
	bool			isActive;
	bool			condResult;	
	bool			MissionCleanUpFlag;
	bool			IsExternalThread;
	uint8_t			_fC8;
	char			scrType;
	uint8_t			_fCA;
	uint8_t			_fCB;
	uint32_t		wakeTime;
	uint16_t		logicalOp;
	bool			notFlag;
	bool			bDeathArrestCheckEnabled;
	bool			wastedOrBusted;
	uint8_t			_fD5;
	uint16_t		_fD6;
	uint32_t		sceneSkipOffset;
	bool			missionFlag;
	// VARIABLES

	// bellow is align in 4 bytes
	uint16_t		scmFunction;
	uint8_t			IsCustom;

	// Initializes member variables.
	void Init();

	// Processes running script
	void Process();

	// Processes one command
	char ProcessOneCommand();

	// Performs death arrest check
	void DoDeatharrestCheck();

	/////// USED HEAVILY IN COMMANDS //////

	// Reads array offset and value from array index variable.
	void GetArrayOffsetAndValueOfIndexVariable(__int16 *pOffset, __int32 *pIdx);

	// Returns offset of global variable
	__int16 GetOffsetOfGlobalVariable();

	// Returns pointer to script variable of any type.
	tScriptVarValue* GetPointerToScriptVariable(unsigned __int8 variableType);

	// Collects parameters
	void CollectParameters(__int16 count);

	// Collects parameter and returns it.
	tScriptVarValue CollectNextParameterWithoutIncreasingPC();

	// Collects string parameter
	void CollectStringParameter(char *pBuffer, unsigned __int8 nBufferLength);

	// Stores parameters
	void StoreParameters(__int16 count);

	// Collects parameters and puts them to local variables of new script
	void CollectParametersToNewScript(CRunningScript* pNewScript);

	// Sets instruction pointer, used in GOTO-like commands
	void SetIntructionPointer(__int32 newIP);

	// Updates comparement flag, used in conditional commands
	void UpdateCompareFlag(bool state);

	// Terminates a script
	void TerminateThisScript();

	///////////////////

	// Returns condition result
	bool GetConditionResult();

	// Returns pointer to local variable pointed by offset and array index as well as multiplier.
	void GetPointerLocalVariableByArrayIndex(__int16 off, __int16 idx, unsigned __int8 mul);

	// Adds script to list
	void AddScriptToList(CRunningScript ** list);

	// Removes script from list
	void RemoveScriptFromList(CRunningScript ** list);

	// Returns state of pad button.
	short GetPadState(unsigned short playerIndex, unsigned short buttonID);

	// Command handlers
	char ProcessCommands_0To99(eCommandName commandID);
	char ProcessCommands_100To199(eCommandName commandID);
	char ProcessCommands_200To299(eCommandName commandID);
	char ProcessCommands_300To399(eCommandName commandID);
	char ProcessCommands_400To499(eCommandName commandID);
	char ProcessCommands_500To599(eCommandName commandID);
	char ProcessCommands_600To699(eCommandName commandID);
	char ProcessCommands_700To799(eCommandName commandID);
	char ProcessCommands_800To899(eCommandName commandID);
	char ProcessCommands_900To999(eCommandName commandID);
	char ProcessCommands_1000To1099(eCommandName commandID);
	char ProcessCommands_1100To1199(eCommandName commandID);
	char ProcessCommands_1200To1299(eCommandName commandID);
	char ProcessCommands_1300To1399(eCommandName commandID);
	char ProcessCommands_1400To1499(eCommandName commandID);
	char ProcessCommands_1500To1599(eCommandName commandID);
	char ProcessCommands_1600To1699(eCommandName commandID);
	char ProcessCommands_1700To1799(eCommandName commandID);
	char ProcessCommands_1800To1899(eCommandName commandID);
	char ProcessCommands_1900To1999(eCommandName commandID);
	char ProcessCommands_2000To2099(eCommandName commandID);
	char ProcessCommands_2100To2199(eCommandName commandID);
	char ProcessCommands_2200To2299(eCommandName commandID);
	char ProcessCommands_2300To2399(eCommandName commandID);
	char ProcessCommands_2400To2499(eCommandName commandID);
	char ProcessCommands_2500To2599(eCommandName commandID);
	char ProcessCommands_2600To2699(eCommandName commandID);

	// Checks if damage ID is valid to expected damage weapon ID.
	static bool CheckDamagedWeaponType(eWeaponType damageWeaponID, eWeaponType expectedDamageWeaponID);

	// Processes commands that check if car is in specified area.
	void CarInAreaCheckCommand(eCommandName commandID);

	// Processes commands that check if char is in specified area.
	void CharInAreaCheckCommand(eCommandName commandID);

	// Processes commands that locate a vehicle
	void LocateCarCommand(eCommandName commandID);

	// Processes commands where char locates car
	void LocateCharCarCommand(eCommandName commandID);

	// Processes commands where char locates another char
	void LocateCharCharCommand(eCommandName commandID);

	// Processes commands where char locates map point
	void LocateCharCommand(eCommandName commandID);

	// Processes commands where char locates object
	void LocateCharObjectCommand(eCommandName commandID);

	// Processes commands where object locates map point
	void LocateObjectCommand(eCommandName commandID);

	// Processes commands that check if object is in area
	void ObjectInAreaCheckCommand(eCommandName commandID);

	// Checks if ped type conforms to valid ped types.
	bool ThisIsAValidRandomPed(ePedType pedType, bool civilian, bool gang, bool criminal);
};
#pragma pack(pop)

VALIDATE_SIZE(CRunningScript, 0xE0);