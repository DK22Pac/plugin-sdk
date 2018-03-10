/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"
#include "CVector2D.h"

class CAnimBlendAssociation;


class CAnimBlendNode {
public:
    CVector2D dword0;
    int dword8;
    int dwordC;
    float dword10;
    int dword14;
    CAnimBlendAssociation *m_pAnimBlendAssociation;
   
    //funcs
    void CalcDeltas();
    bool FindKeyFrame(float arg0);
    void GetCurrentTranslation(CVector& arg0, float arg1);
    void GetEndTranslation(CVector& arg0, float arg1);
    void Init();
    void NextKeyFrame();
};

VALIDATE_SIZE(CAnimBlendNode, 0x1C);