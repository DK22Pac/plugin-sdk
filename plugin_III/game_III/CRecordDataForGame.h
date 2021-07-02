/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CControllerState.h"

enum PLUGIN_API eRecordState : unsigned short {
    RECORD_STATE_NONE = 0,
    RECORD_STATE_RECORD = 1,
    RECORD_STATE_PLAYBACK = 2
};

class PLUGIN_API CRecordDataForGame {
public:
    SUPPORTED_10EN_11EN_STEAM static int &FId;
    SUPPORTED_10EN_11EN_STEAM static unsigned char *&pDataBufferPointer;
    SUPPORTED_10EN_11EN_STEAM static unsigned char *&pDataBuffer;
    SUPPORTED_10EN_11EN_STEAM static unsigned short &RecordingState;

    SUPPORTED_10EN_11EN_STEAM static unsigned short CalcGameChecksum();
    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static unsigned char *PackCurrentPadValues(unsigned char *buf, CControllerState *os, CControllerState *ns);
    SUPPORTED_10EN_11EN_STEAM static void SaveOrRetrieveDataForThisFrame();
    SUPPORTED_10EN_11EN_STEAM static unsigned char *UnPackCurrentPadValues(unsigned char *buf, unsigned char total, CControllerState *state);
};

struct PLUGIN_API tGameBuffer {
    float m_fTimeStep;
    unsigned int m_nTimeInMilliseconds;
    unsigned char m_nSizeOfPads[2];
    unsigned short m_nChecksum;
    unsigned char m_ControllerBuffer[116];
};

SUPPORTED_10EN_11EN_STEAM extern tGameBuffer &BufferDataToBeSaved;

VALIDATE_SIZE(tGameBuffer, 0x80);

#include "meta/meta.CRecordDataForGame.h"
