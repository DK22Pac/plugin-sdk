/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "PluginBase.h"
#include "CVector.h"
#include "CCollisionBox.h"

#ifdef GetObject
#undef GetObject
#endif

class CObject;

class PLUGIN_API CSprite {
public:
    unsigned short m_nRotation;
    unsigned char field_2;
    unsigned char field_3;
    CSprite* m_pPrevSprite;
    CObject* m_pObject;
    CSprite* m_pNextSprite;
    CCollisionBox* m_pCollisionBox;
    CEncodedVector m_vPosition;
    short field_34;
    short m_nSprite;
    short m_nRemap;
    unsigned char field_38;
    unsigned char field_39;
    int m_nLayer;
    char m_nInvisibility;
    unsigned char field_45;
    unsigned char field_46;
    unsigned char field_47;
    char m_nSpriteType;
    int m_nLockPallete;
    unsigned char m_nZoomInSprite;
    unsigned char m_nZOfTileOn;
    unsigned char field_58;
    unsigned char field_59;
    unsigned char field_60;
    unsigned char field_61;
    unsigned char field_62;
    unsigned char field_63;
    unsigned char field_64;
    unsigned char field_65;
    unsigned char field_66;
    unsigned char field_67;
    unsigned char field_68;
    unsigned char field_69;
    unsigned char field_70;
    unsigned char field_71;
    unsigned char field_72;

public:
    CObject* GetObject();
    void SetPosition(CEncodedVector pos);
    void SetRotation(short rot);
    void SetRemap(short remap);
    void Render();

public:
    static void DrawSprite(int id1, int id2, int x, int y, int angle, int scale, int const& mode, int enableAlpha, int alpha, int unk, int lightFlag);
};

VALIDATE_SIZE(CSprite, 0x4C);
