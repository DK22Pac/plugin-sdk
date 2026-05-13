/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CCollisionBox.h"
#include "CEncodedVector.h"

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
VALIDATE_OFFSET(CSprite, m_nRotation, 0x0);
VALIDATE_OFFSET(CSprite, field_2, 0x2);
VALIDATE_OFFSET(CSprite, field_3, 0x3);
VALIDATE_OFFSET(CSprite, m_pPrevSprite, 0x4);
VALIDATE_OFFSET(CSprite, m_pObject, 0x8);
VALIDATE_OFFSET(CSprite, m_pNextSprite, 0xC);
VALIDATE_OFFSET(CSprite, m_pCollisionBox, 0x10);
VALIDATE_OFFSET(CSprite, m_vPosition, 0x14);
VALIDATE_OFFSET(CSprite, field_34, 0x20);
VALIDATE_OFFSET(CSprite, m_nSprite, 0x22);
VALIDATE_OFFSET(CSprite, m_nRemap, 0x24);
VALIDATE_OFFSET(CSprite, field_38, 0x26);
VALIDATE_OFFSET(CSprite, field_39, 0x27);
VALIDATE_OFFSET(CSprite, m_nLayer, 0x28);
VALIDATE_OFFSET(CSprite, m_nInvisibility, 0x2C);
VALIDATE_OFFSET(CSprite, field_45, 0x2D);
VALIDATE_OFFSET(CSprite, field_46, 0x2E);
VALIDATE_OFFSET(CSprite, field_47, 0x2F);
VALIDATE_OFFSET(CSprite, m_nSpriteType, 0x30);
VALIDATE_OFFSET(CSprite, m_nLockPallete, 0x34);
VALIDATE_OFFSET(CSprite, m_nZoomInSprite, 0x38);
VALIDATE_OFFSET(CSprite, m_nZOfTileOn, 0x39);
VALIDATE_OFFSET(CSprite, field_58, 0x3A);
VALIDATE_OFFSET(CSprite, field_59, 0x3B);
VALIDATE_OFFSET(CSprite, field_60, 0x3C);
VALIDATE_OFFSET(CSprite, field_61, 0x3D);
VALIDATE_OFFSET(CSprite, field_62, 0x3E);
VALIDATE_OFFSET(CSprite, field_63, 0x3F);
VALIDATE_OFFSET(CSprite, field_64, 0x40);
VALIDATE_OFFSET(CSprite, field_65, 0x41);
VALIDATE_OFFSET(CSprite, field_66, 0x42);
VALIDATE_OFFSET(CSprite, field_67, 0x43);
VALIDATE_OFFSET(CSprite, field_68, 0x44);
VALIDATE_OFFSET(CSprite, field_69, 0x45);
VALIDATE_OFFSET(CSprite, field_70, 0x46);
VALIDATE_OFFSET(CSprite, field_71, 0x47);
VALIDATE_OFFSET(CSprite, field_72, 0x48);
VALIDATE_SIZE(CSprite, 0x4C);
