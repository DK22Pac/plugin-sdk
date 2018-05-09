/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CRunningScript.h"
#include "CPed.h"
#include "CVehicle.h"
#include "CObject.h"
#include "CMissionCleanup.h"

#define VAR_CTheScripts__ScriptSpace 0xA49960

union tScriptParam
{
	int iParam;
	float fParam;
};

class PLUGIN_API CTheScripts
{
public:
	// Script space, where main.scm MAIN section is loaded.
	// Size: 200000 bytes
	static char* ScriptSpace;

	static tScriptParam *ScriptParams;
    
    static CRunningScript *&pIdleScripts;
    static CRunningScript *&pActiveScripts;



    static bool& DbgFlag;                                   
    static unsigned short& NumberOfEntriesInSwitchTable;    
    static void* SwitchDefaultAddress;                      
    static bool& SwitchDefaultExists;                       
    static int& ValueToCheckInSwitchStatement;	                
    static unsigned short& NumberOfEntriesStillToReadForSwitch;	
    //static ScriptSequenceTaskArray          	       
    static unsigned short& NumberOfScriptCheckpoints;	
    //static ScriptCheckpointArray	                   
    //static ScriptEffectSystemArray	               
    static bool& bDrawSubtitlesBeforeFade;             
    static bool& bDrawOddJobTitleBeforeFade;           
    static bool& bScriptHasFadedOut;               
    static bool& bAddNextMessageToPreviousBriefs;  
    static int& ForceRandomCarModel;	           
    static bool& bDrawCrossHair;                   
    static bool& bEnableCraneRelease;              
    static bool& bEnableCraneLower;                    
    static bool& bEnableCraneRaise;                    
    static float& fCameraHeadingStepWhenPlayerIsAttached;
    static float& fCameraHeadingWhenPlayerIsAttached;  
    static bool& bDisplayHud;	                       
    static bool& HideAllFrontEndMapBlips;              
    static bool& RadarShowBlipOnAllLevels;             
    static unsigned char& RadarZoomValue;              
    static bool& bPlayerIsOffTheMap;	               
    static char& RiotIntensity;                        
    static bool& bPlayerHasMetDebbieHarry;             
    static bool& bDisplayNonMiniGameHelpMessages;      
    static bool& bMiniGameInProgress;                  
    static int& ScriptPickupCycleIndex;	               
    static char& FailCurrentMission;	                     
    static bool& bAlreadyRunningAMissionScript;	             
    static int& LargestNumberOfMissionScriptLocalVariables;  
    static unsigned short& NumberOfExclusiveMissionScripts;  
    static unsigned short& NumberOfMissionScripts;           
    static unsigned int& LargestMissionScriptSize;           
    static unsigned int& MainScriptSize;                     
    //static MultiScriptArray	                             
    static bool& bUsingAMultiScriptFile;                     
    static int& StoreVehicleIndex;                           
    static bool& StoreVehicleWasRandom;                      
    static unsigned short& CommandsExecuted;                 
    static unsigned short& ScriptsUpdated;                   
    //static ScriptConnectLodsObjects	             
    static int* VehicleModelsBlockedByScript;        
    static int* InvisibilitySettingArray;            
    static CVector* BuildingSwapArray;               
    static unsigned short& NumberOfIntroRectanglesThisFrame;
    static unsigned short& MessageWidth;                    
    static unsigned short& MessageCentre;                   
    static bool& bUseMessageFormatting;                   
    static bool& UseTextCommands;                         
    static unsigned short& NumberOfIntroTextLinesThisFrame; 
    static unsigned short& NumberOfUsedObjects;             
    //static UsedObjectArray	                                //00A44B70
    static int& LastRandomPedId;                 
    static int& LastMissionPassedTime;           
    static int& OnAMissionFlag;                  
    //static EntitiesWaitingForScriptBrain	                //00A476B4
    //static StreamedScripts	                                //00A47B60
    //static ScriptResourceManager	                        //00A485A8
    //static UpsideDownCars	                                //00A4892C
    static tScriptVarValue* LocalVariablesForCurrentMission;             //tScriptVar LocalVariablesForCurrentMission[1024]
    static CRunningScript* ScriptsArray;                                  //  CRunningScript ScriptsArray[96]
    static unsigned short& NumberOfScriptSearchLights;       
    static CMissionCleanup& MissionCleanUp;                  
    //static StuckCars	                                    //00A90AB0
    //static ScriptsForBrains	                                //00A90CF0
    //static ScriptSphereArray	                            //00A91268
    //static IntroTextLines	                                //00A913E8
    //static IntroRectangles	                                //00A92D68
    //static ScriptSprites	                                //00A94B68
    //static ScriptSearchLightArray	                        //00A94D68



    static bool IsPedStopped(CPed* ped);
    static bool IsVehicleStopped(CVehicle* vehicle);
    static void RemoveThisPed(CPed* ped);
    static void CleanUpThisPed(CPed* ped);
    static void CleanUpThisVehicle(CVehicle* vehicle);
    static void CleanUpThisObject(CObject* object);
    static void ClearSpaceForMissionEntity(CVector const& position, CEntity* entity);
    static bool IsPlayerOnAMission();
    static void HighlightImportantArea(unsigned int markerID, float x1, float y1, float x2, float y2, float z);
};