/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CQuaternion.h"

enum PLUGIN_API eSequenceType : unsigned int {
    KF_ROT = 1,
    KF_TRANS = 2
};

#pragma pack(push, 1)
struct PLUGIN_API KeyFrameCompressed {
    short rot[4]; //!< 4096
    short deltaTime; //!< 60
};
#pragma pack(pop)

struct PLUGIN_API KeyFrameTransCompressed : public KeyFrameCompressed {
    short trans[3]; //!< 128
};

struct PLUGIN_API KeyFrame {
    CQuaternion rotation;
    float deltaTime; //!< relative to previous key frame
};

struct PLUGIN_API KeyFrameTrans : public KeyFrame {
    CVector translation;
};

class PLUGIN_API CAnimBlendSequence {
    PLUGIN_NO_DEFAULT_CONSTRUCTION_VIRTUALBASE(CAnimBlendSequence)

public:
    int m_nType;
    char szName[24];
    int m_nNumFrames;
    void *keyFrames;
    void *keyFramesCompressed;

    // virtual function #0 (destructor)


    SUPPORTED_10EN_11EN_STEAM void RemoveQuaternionFlips();
    SUPPORTED_10EN_11EN_STEAM void SetName(char const *name);
    SUPPORTED_10EN_11EN_STEAM void SetNumFrames(int numFrames, bool translation);

    inline KeyFrame *GetKeyFrame(int n) {
        return this->m_nType & KF_TRANS ?
            &((KeyFrameTrans*)this->keyFrames)[n] :
            &((KeyFrame*)this->keyFrames)[n];
    }
    inline bool HasTranslation(void) { return !!(this->m_nType & KF_TRANS); }
};

VALIDATE_SIZE(KeyFrameCompressed, 0xA);
VALIDATE_SIZE(KeyFrameTransCompressed, 0x10);
VALIDATE_SIZE(KeyFrame, 0x14);
VALIDATE_SIZE(KeyFrameTrans, 0x20);
VTABLE_DESC(CAnimBlendSequence, 0x5EA060, 1);
VALIDATE_SIZE(CAnimBlendSequence, 0x2C);

#include "meta/meta.CAnimBlendSequence.h"
