/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API cAudioScriptObject {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(cAudioScriptObject)

public:
    unsigned short m_nEventId;
private:
    char _pad2[2];
public:
    CVector m_vecPosition;
    int m_nStatusIndex; //!< >=0 - sound index, <0 - error status

    SUPPORTED_10EN_11EN_STEAM static void LoadAllAudioScriptObjects(unsigned char *buffer, unsigned int size);
    SUPPORTED_10EN_11EN_STEAM static void SaveAllAudioScriptObjects(unsigned char *buffer, int *outSize);
};

VALIDATE_SIZE(cAudioScriptObject, 0x14);

#include "meta/meta.cAudioScriptObject.h"
