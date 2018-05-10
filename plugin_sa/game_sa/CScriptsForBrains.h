/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CEntity.h"
#include "CObject.h"
#include "CVector.h"

class PLUGIN_API CScriptsForBrains {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CScriptsForBrains)
public:

    struct
    {
        short m_nIMGindex;
        char m_nAttachType;
        char m_nType;
        char Status;
    private:
        char __pad[3];
    public:
        float Radius;
        unsigned short m_nModelID;
        unsigned short m_nPriority;
        int field_10;
    } m_aScriptForBrains[70];

    SUPPORTED_10US void AddNewScriptBrain(short ImgIndex, short Model, unsigned short Priority, signed char attachType, signed char Type, float Radius);
    SUPPORTED_10US void AddNewStreamedScriptBrainForCodeUse(short a2, char *a3, signed char attachtype);
    SUPPORTED_10US void CheckIfNewEntityNeedsScript(CEntity *pEntity, signed char attachType, void *unused);
    SUPPORTED_10US signed short GetIndexOfScriptBrainWithThisName(char const *name, signed char Attachtype);
    SUPPORTED_10US bool HasAttractorScriptBrainWithThisNameLoaded(char const *name);
    SUPPORTED_10US void Init();
    SUPPORTED_10US bool IsObjectWithinBrainActivationRange(CObject *entity, CVector const *point);
    SUPPORTED_10US void MarkAttractorScriptBrainWithThisNameAsNoLongerNeeded(char const *name);
    SUPPORTED_10US void RequestAttractorScriptBrainWithThisName(char const *name);
    SUPPORTED_10US void StartAttractorScriptBrainWithThisName(char const *name, CEntity *pEntity, unsigned char bHasAScriptBrain);
    SUPPORTED_10US void StartNewStreamedScriptBrain(unsigned char index, CEntity *pEntity, unsigned char bHasAScriptBrain);
    SUPPORTED_10US void StartOrRequestNewStreamedScriptBrain(unsigned char index, CEntity *pEntity, signed char attachType, unsigned char bAddToWaitingArray);
    SUPPORTED_10US void StartOrRequestNewStreamedScriptBrainWithThisName(char const *name, CEntity *pEntity, signed char attachType);
    SUPPORTED_10US void SwitchAllObjectBrainsWithThisID(signed char ID, bool bStatus);
};

#include "meta/meta.CScriptsForBrains.h"
