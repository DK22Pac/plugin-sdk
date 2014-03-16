#include "CRunningScriptWrapper.h"
#include "game_sa\CTheScripts.h"

// Constructor
tRunningScriptWrapper_SavedReturnedValuesArray::tRunningScriptWrapper_SavedReturnedValuesArray()
{
	this -> numberOfReturnedValues = 0;
}
	
// Copy constructor
tRunningScriptWrapper_SavedReturnedValuesArray::tRunningScriptWrapper_SavedReturnedValuesArray(const tRunningScriptWrapper_SavedReturnedValuesArray& other)
{
	this -> numberOfReturnedValues = other.numberOfReturnedValues;
	
	for(int i = 0; i < other.numberOfReturnedValues; i++)
		this -> returnedValues[i] = other.returnedValues[i];
}

// Constructor
CRunningScriptWrapper::CRunningScriptWrapper()
{
	// Initializes variables
	this -> Init();

	this -> numberOfReturnedValues = 0;

	this -> InitWrapperVars();
}

// Calls a command. Return values: (-1 : invalid command ID, 0: continue, 1: WAIT)
char CRunningScriptWrapper::CallCommand(eCommandName commandID)
{
	*(__int16*)this -> CommandSpace = commandID;

	char result = this -> ProcessOneCommand();

	this -> numberOfReturnedValues = this -> pushReturnValueIndex;

	this -> InitWrapperVars();

	return result;
}

// Calls a command. Return values: (-1 : invalid command ID, 0: continue, 1: WAIT)
char CRunningScriptWrapper::CallCommand(__int16 commandID)
{
	return this -> CallCommand((eCommandName)commandID);
}

// Returns offset of global variable by number of variable
int CRunningScriptWrapper::GetGlobalVariableOffsetByNumber(int variableNum)
{
	return variableNum * sizeof(tScriptVarValue);
}

// Returns pointer to global variable
tScriptVarValue* CRunningScriptWrapper::GetPointerToGlobalVariableByOffset(int variableOffset)
{
	return (tScriptVarValue*)(char*)CTheScripts::ScriptSpace + variableOffset;
}

// Initializes wrapper variables
void CRunningScriptWrapper::InitWrapperVars()
{
	this -> baseIP = this -> CommandSpace;

	this -> curIP = this -> baseIP;

	this -> pushArgIndex = 0;

	this -> pushReturnValueIndex = 0;

	this -> CommandSpaceArguments = this -> CommandSpace + sizeof(__int16);
}


// Saves returned values to object of type tRunningScriptWrapper_SavedReturnedValuesArray.	
// This function may only be called after execution of CallCommand - pushing values past the execution of CallCommand will overwrite values
void CRunningScriptWrapper::SaveReturnedValues(tRunningScriptWrapper_SavedReturnedValuesArray& arrayOfSavedReturnedValues)
{
	arrayOfSavedReturnedValues.numberOfReturnedValues = this -> numberOfReturnedValues;

	for(int i = 0; i < this -> numberOfReturnedValues; i++)
	{		
		tRunningScriptWrapperDataValue& returnedValue = this -> ReturnedValues[i];
		tRunningScriptWrapper_SavedReturnedValue& savedReturnedValue = arrayOfSavedReturnedValues.returnedValues[i];
		
		switch(returnedValue.type)
		{			
		case RUNNING_SCRIPT_VALUE_TYPE_INT:
			savedReturnedValue.Int = *returnedValue.data.pInt;
			break;
		case RUNNING_SCRIPT_VALUE_TYPE_FLOAT:
			savedReturnedValue.Float = *returnedValue.data.pFloat;
			break;			
		case RUNNING_SCRIPT_VALUE_TYPE_TEXT_LABEL:
		case RUNNING_SCRIPT_VALUE_TYPE_STRING:
			strcpy(savedReturnedValue.Str, returnedValue.data.pStr);
			break;
		}		
	}
}

///////// Functions to pass arguments /////////

// Pushes boolean argument
void CRunningScriptWrapper::PushBoolean(bool value, bool bIsReturnedValue)
{
	this -> PushInt(value != false, bIsReturnedValue);
}

// Pushes float value
void CRunningScriptWrapper::PushFloat(float value, bool bIsReturnedValue)
{
	this -> tls[pushArgIndex].fParam = value;	

	if(bIsReturnedValue)
	{
		tRunningScriptWrapperDataValue& returnedValue = this -> ReturnedValues[this -> pushReturnValueIndex++];

		returnedValue.type = RUNNING_SCRIPT_VALUE_TYPE_FLOAT;
		returnedValue.data.pFloat = &this -> tls[pushArgIndex].fParam;
	}

	this -> WriteArgumentVariable(SCM_ARGUMENT_TYPE_LOCAL_NUMBER_VARIABLE, 1);
}

// Pushes integer value
void CRunningScriptWrapper::PushInt(__int32 value, bool bIsReturnedValue)
{
	this -> tls[pushArgIndex].nParam = value;	

	if(bIsReturnedValue)
	{
		tRunningScriptWrapperDataValue& returnedValue = this -> ReturnedValues[this -> pushReturnValueIndex++];

		returnedValue.type = RUNNING_SCRIPT_VALUE_TYPE_INT;
		returnedValue.data.pInt = &this -> tls[pushArgIndex].nParam;
	}

	this -> WriteArgumentVariable(SCM_ARGUMENT_TYPE_LOCAL_NUMBER_VARIABLE, 1);
}

// Pushes a pointer
void CRunningScriptWrapper::PushPointer(void* value, bool bIsReturnedValue)
{
	this -> PushInt((__int32)value, bIsReturnedValue);
}

// Pushes a short string value
void CRunningScriptWrapper::PushShortString(const char* value, bool bIsReturnedValue)
{
	this -> PushStringAsVar(value, RUNNING_SCRIPT_VALUE_TYPE_TEXT_LABEL, bIsReturnedValue);
}

// Pushes a long string value
void CRunningScriptWrapper::PushLongString(const char* value, bool bIsReturnedValue)
{
	this -> PushStringAsVar(value, RUNNING_SCRIPT_VALUE_TYPE_STRING, bIsReturnedValue);
}

// Pushes a varlen string
void CRunningScriptWrapper::PushVarlenString(const char* value)
{
	// Set type of argument
	*(BYTE*)this -> CommandSpaceArguments = SCM_ARGUMENT_TYPE_STATIC_PASCAL_STRING;
	this -> CommandSpaceArguments += sizeof(BYTE);

	// Get and write string length
	int len = strlen(value);	
	*(BYTE*)this -> CommandSpaceArguments = len;
	this -> CommandSpaceArguments += sizeof(BYTE);

	memcpy(this -> CommandSpaceArguments, value, len);	

	this -> CommandSpaceArguments += len;
}

// Pushes string value
void CRunningScriptWrapper::PushStringAsVar(const char* value, eRunningScriptWrapperDataValueType valueType, bool bIsReturnedValue)
{
	char* pVar = (char*)&this -> tls[pushArgIndex];

	int SCMnumberOfVarsTaken;
	eArgumentDataTypesFormat_GTA_III_VC_SA SCMargumentType;

	if(valueType == RUNNING_SCRIPT_VALUE_TYPE_TEXT_LABEL)
	{
		SCMnumberOfVarsTaken = 2;
		SCMargumentType = SCM_ARGUMENT_TYPE_LOCAL_SHORT_STRING_VARIABLE;
	}
	else
	{
		SCMnumberOfVarsTaken = 4;
		SCMargumentType = SCM_ARGUMENT_TYPE_LOCAL_LONG_STRING_VARIABLE;
	}

	strncpy(pVar, value, SCMnumberOfVarsTaken * sizeof(tScriptVarValue));

	if(bIsReturnedValue)
	{
		tRunningScriptWrapperDataValue& returnedValue = this -> ReturnedValues[this -> pushReturnValueIndex++];

		returnedValue.type = valueType;
		returnedValue.data.pStr = pVar;
	}
	
	this -> WriteArgumentVariable(SCMargumentType, SCMnumberOfVarsTaken);
}

// Push a global variable value
void CRunningScriptWrapper::PushGlobalVariable(int globalVarOffset, eRunningScriptWrapperDataValueType valueType, bool bIsReturnedValue)
{
	if(bIsReturnedValue)
	{
		tScriptVarValue* pVar = this -> GetPointerToGlobalVariableByOffset(globalVarOffset);

		tRunningScriptWrapperDataValue& returnedValue = this -> ReturnedValues[this -> pushReturnValueIndex++];
		returnedValue.type = valueType;
		returnedValue.data.pInt = (__int32*)pVar;
	}

	// Set type of argument
	*(BYTE*)this -> CommandSpaceArguments = SCM_ARGUMENT_TYPE_GLOBAL_NUMBER_VARIABLE;
	this -> CommandSpaceArguments += sizeof(BYTE);

	*(WORD*)this -> CommandSpaceArguments = globalVarOffset;
	this -> CommandSpaceArguments += sizeof(WORD);
}

// Pushes a return argument
void CRunningScriptWrapper::PushReturnArgument(eRunningScriptWrapperDataValueType valueType)
{
	tScriptVarValue* pVar = &this -> tls[this -> pushArgIndex];

	tRunningScriptWrapperDataValue& returnedValue = this -> ReturnedValues[this -> pushReturnValueIndex++];
	returnedValue.type = valueType;
	returnedValue.data.pInt = (__int32*)pVar;

	switch(valueType)
	{
	case RUNNING_SCRIPT_VALUE_TYPE_INT:
		this -> WriteArgumentVariable(SCM_ARGUMENT_TYPE_LOCAL_NUMBER_VARIABLE, 1);
		break;
	case RUNNING_SCRIPT_VALUE_TYPE_FLOAT:
		this -> WriteArgumentVariable(SCM_ARGUMENT_TYPE_LOCAL_NUMBER_VARIABLE, 1);
		break;
	case RUNNING_SCRIPT_VALUE_TYPE_TEXT_LABEL:
		this -> WriteArgumentVariable(SCM_ARGUMENT_TYPE_LOCAL_SHORT_STRING_VARIABLE, 2);
		break;
	case RUNNING_SCRIPT_VALUE_TYPE_STRING:
		this -> WriteArgumentVariable(SCM_ARGUMENT_TYPE_LOCAL_LONG_STRING_VARIABLE, 4);
		break;
	}
}

// Pushes return arguments
void CRunningScriptWrapper::PushReturnArguments(eRunningScriptWrapperDataValueType valueType, int count)
{
	while(count > 0)
	{
		this -> PushReturnArgument(valueType);
		count--;
	}
}

// Writes an argument a local/global variable
void CRunningScriptWrapper::WriteArgumentVariable(eArgumentDataTypesFormat_GTA_III_VC_SA argumentType, int numberOfLocalVarsTaken)
{
	// Set type of argument
	*(BYTE*)this -> CommandSpaceArguments = argumentType;
	this -> CommandSpaceArguments += sizeof(BYTE);

	*(WORD*)this -> CommandSpaceArguments = pushArgIndex;
	this -> CommandSpaceArguments += sizeof(WORD);

	this -> pushArgIndex += numberOfLocalVarsTaken;	// short string takes 2 variables
}