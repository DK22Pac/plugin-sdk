/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector.h"

class CRegisteredCorona {
public:
    int m_nUniqueID;
    int field_4;
    RwTexture *m_pTexture;
    RwRGBA m_Color;
    char m_nFadeState;
    char _pad1[3];
    CVector m_vPosn;
    float m_fSize;
    float normalAngle;
    char m_bRegisteredThisFrame;
    char _pad2[3];
    float farClip;
    char flare;
    char reflection;
    char flags1;
    char field_33;
    float field_34;
    float field_38;
    float field_3C;
    char field_40[12];
    float field_4C;
    float field_50;
    float field_54;
    char field_58[15];
    char field_67;
    char field_68;
    char field_69;
    char field_6A[3];
    char field_6D;
    char field_6E;
    char field_6F;
    char field_70[3];
    char field_73;
    char field_74;
    char field_75;
    char field_76[3];
    char field_79;
    char field_7A[6];
    
    //funcs
    void Update();
    CRegisteredCorona();
};

VALIDATE_SIZE(CRegisteredCorona, 0x80);
