#pragma once
#include <game_sa/eCommandName.h>
#include <game_sa/CRunningScript.h>

enum eRunningScriptWrapperDataValueType
{
	RUNNING_SCRIPT_VALUE_TYPE_INT = 1,			// 4 bytes, integer
	RUNNING_SCRIPT_VALUE_TYPE_FLOAT = 2,		// 4 bytes, float
	RUNNING_SCRIPT_VALUE_TYPE_TEXT_LABEL = 3,	// 8 bytes, short string
	RUNNING_SCRIPT_VALUE_TYPE_STRING = 4		// 16 bytes, long string
};

#pragma pack(push, 1)
struct tRunningScriptWrapperDataValue
{
	eRunningScriptWrapperDataValueType type;

	union {		
		__int32* pInt;
		float* pFloat;
		char* pStr;
	} data;
};
#pragma pack(pop)

VALIDATE_SIZE(tRunningScriptWrapperDataValue, 0x8);

#pragma pack(push, 1)
struct PLUGIN_API tRunningScriptWrapper_SavedReturnedValue
{
	eRunningScriptWrapperDataValueType type;

	union {
		__int32 Int;
		float Float;
		char Str[256];
	};
};
#pragma pack(pop)

VALIDATE_SIZE(tRunningScriptWrapper_SavedReturnedValue, 0x104);

const int maxNumberOfReturnedValues = 60;

#pragma pack(push, 1)
struct PLUGIN_API tRunningScriptWrapper_SavedReturnedValuesArray
{
	int numberOfReturnedValues;

	tRunningScriptWrapper_SavedReturnedValue returnedValues[maxNumberOfReturnedValues];

	// Constructor
	tRunningScriptWrapper_SavedReturnedValuesArray();
	
	// Copy constructor
	tRunningScriptWrapper_SavedReturnedValuesArray(const tRunningScriptWrapper_SavedReturnedValuesArray& other);
};
#pragma pack(pop)

VALIDATE_SIZE(tRunningScriptWrapper_SavedReturnedValuesArray, 0x3CF4);

#pragma pack(push, 1)
class PLUGIN_API CRunningScriptWrapper : public CRunningScript
{
// private:
public:
	// Used to put code of command into
	uint8_t CommandSpace[2000];

	uint8_t* CommandSpaceArguments;

	// VARIABLES
	int pushArgIndex;

	int pushReturnValueIndex;

public:
	// Number of returned values
	int numberOfReturnedValues;

	// Returned values
	tRunningScriptWrapperDataValue ReturnedValues[maxNumberOfReturnedValues];


private:
	char reserved[32];	// for the future purpose of extending a struct.
	
public:

	// FUNCTIONS

	// Constructor
	CRunningScriptWrapper();

	// Saves returned values to object of type tRunningScriptWrapper_SavedReturnedValuesArray.	
	// This function may only be called after execution of CallCommand - pushing values past the execution of CallCommand will overwrite values
	void SaveReturnedValues(tRunningScriptWrapper_SavedReturnedValuesArray& arrayOfSavedReturnedValues);

	// Calls a command. Return values: (-1 : invalid command ID, 0: continue, 1: WAIT)
	char CallCommand(eCommandName commandID);

	// Calls a command. Return values: (-1 : invalid command ID, 0: continue, 1: WAIT)
	char CallCommand(__int16 commandID);

	// Returns offset of global variable by number of variable
	static int GetGlobalVariableOffsetByNumber(int variableNum);

	// Returns pointer to global variable
	tScriptVarValue* GetPointerToGlobalVariableByOffset(int variableOffset);

	///////// Functions to pass arguments /////////

	// Pushes boolean argument
	void PushBoolean(bool value, bool bIsReturnedValue = true);

	// Pushes float value
	void PushFloat(float value, bool bIsReturnedValue = true);

	// Pushes integer value
	void PushInt(__int32 value, bool bIsReturnedValue = true);

	// Pushes a pointer
	void PushPointer(void* value, bool bIsReturnedValue = true);

	// Pushes a short string value
	void PushShortString(const char* value, bool bIsReturnedValue = true);

	// Pushes a long string value
	void PushLongString(const char* value, bool bIsReturnedValue = true);

	// Pushes a varlen string
	void PushVarlenString(const char* value);

	// Push a global variable value
	void PushGlobalVariable(int globalVarOffset, eRunningScriptWrapperDataValueType valueType, bool bIsReturnedValue = true);

	// Pushes a return argument
	void PushReturnArgument(eRunningScriptWrapperDataValueType valueType);

	// Pushes return arguments
	void PushReturnArguments(eRunningScriptWrapperDataValueType valueType, int count);

private:
	// Initializes wrapper variables
	void InitWrapperVars();

	// Pushes string value
	void PushStringAsVar(const char* value, eRunningScriptWrapperDataValueType valueType, bool bIsReturnedValue);

	// Writes an argument a local/global variable
	void WriteArgumentVariable(eArgumentDataTypesFormat_GTA_III_VC_SA argumentType, int numberOfLocalVarsTaken);
};
#pragma pack(pop)

VALIDATE_SIZE(CRunningScriptWrapper, 0xAC0);