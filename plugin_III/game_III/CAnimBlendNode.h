/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CQuaternion.h"
class CAnimBlendSequence;
class CAnimBlendAssociation;

//! The interpolated state between two key frames in a sequence
class PLUGIN_API CAnimBlendNode {
public:
    float theta; //!< angle between quaternions
    float invSin; //!< 1/Sin(theta)
    int frameA; //!< next key frame
    int frameB; //!< previous key frame
    float remainingTime; //!< time until frames have to advance
    CAnimBlendSequence *m_pAnimBlendSequence;
    CAnimBlendAssociation *m_pAnimBlendAssociation;

    SUPPORTED_10EN_11EN_STEAM void CalcDeltas();
    //! Set animation to time t
    SUPPORTED_10EN_11EN_STEAM bool FindKeyFrame(float t);
    SUPPORTED_10EN_11EN_STEAM void GetCurrentTranslation(CVector &trans, float weight);
    SUPPORTED_10EN_11EN_STEAM void GetEndTranslation(CVector &trans, float weight);
    SUPPORTED_10EN_11EN_STEAM void Init();
    SUPPORTED_10EN_11EN_STEAM bool NextKeyFrame();
    SUPPORTED_10EN_11EN_STEAM bool Update(CVector &trans, CQuaternion &rot, float weight);
};

VALIDATE_SIZE(CAnimBlendNode, 0x1C);

#include "meta/meta.CAnimBlendNode.h"
