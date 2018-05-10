/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include "CRunningScript.h"

class PLUGIN_API CStreamedScripts {
public:
    struct
    {
        void *data;
        char m_nStatus;
        char field_5;
        short m_nScmIndex;
        char m_Name[20];
        int m_nsize;
    } m_aScripts[82];

    int m_nLargestExternalSize;
    short m_nCountOfScripts;
    short field_A46;

    SUPPORTED_10US signed int FindStreamedScript(char const *scriptname);
    SUPPORTED_10US signed int FindStreamedScriptQuiet(char const *scriptName);
    SUPPORTED_10US signed short GetProperIndexFromIndexUsedByScript(short scmIndex);
    SUPPORTED_10US char const *GetStreamedScriptFilename(unsigned short index);
    SUPPORTED_10US unsigned short GetStreamedScriptWithThisStartAddress(unsigned char *dataPtr);
    SUPPORTED_10US void Initialise();
    SUPPORTED_10US void LoadStreamedScript(RwStream *stream, int index);
    SUPPORTED_10US void ReInitialise();
    SUPPORTED_10US void ReadStreamedScriptData();
    SUPPORTED_10US int RegisterScript(char const *scriptName);
    SUPPORTED_10US void RemoveStreamedScriptFromMemory(int index);
    SUPPORTED_10US CRunningScript *StartNewStreamedScript(int index);
};
VALIDATE_SIZE(CStreamedScripts, 0xA48);

#include "meta/meta.CStreamedScripts.h"
