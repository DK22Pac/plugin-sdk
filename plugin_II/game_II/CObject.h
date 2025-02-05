/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "PluginBase.h"
#include "CVector.h"

class CPed;
class CSprite;

class CObject {
public:
    unsigned int field_0;
    int field_2;
    int field_4;
    int field_6;
    unsigned int field_8;
    int m_nIndex;
    unsigned int field_12;
    void* field_16;
    unsigned char field_20;
    unsigned char field_21;
    unsigned char field_22;
    unsigned char field_23;
    unsigned short field_24;
    unsigned char field_26;
    unsigned char field_27;
    unsigned char field_28;
    unsigned char field_29;
    unsigned char field_2a;
    unsigned char field_2b;
    unsigned char field_2c;
    unsigned char field_2d;
    unsigned char field_2e;
    unsigned char field_2f;
    unsigned char field_30;
    unsigned char field_31;
    unsigned char field_32;
    unsigned char field_33;
    unsigned char field_34;
    unsigned char field_35;
    unsigned char field_36;
    unsigned char field_37;
    int m_nSpeed;
    int field_3c;
    short m_nRotation;
    short field_42;
    unsigned char field_44;
    unsigned char field_45;
    short field_46;
    unsigned char field_48;
    unsigned char field_49;
    short m_nIdleTimer;
    unsigned int field_4c;
    unsigned int field_50;
    unsigned char field_54;
    unsigned char field_55;
    unsigned char field_56;
    unsigned char field_57;
    unsigned char field_58;
    unsigned char field_59;
    unsigned char field_5a;
    unsigned char field_5b;
    unsigned char field_5c;
    unsigned char field_5d;
    unsigned char field_5e;
    unsigned char field_5f;
    unsigned int field_60;
    unsigned int field_64;
    unsigned char field_68;
    unsigned char field_69;
    unsigned char field_6a;
    unsigned char field_6b;
    int field_6c;
    unsigned char field_70;
    unsigned char field_71;
    unsigned char field_72;
    unsigned char field_73;
    unsigned char field_74;
    unsigned char field_75;
    unsigned char field_76;
    unsigned char field_77;
    CObject* m_pNext;
    CPed* m_pPed;
    CSprite* m_pSprite;
    unsigned char field_84;
    unsigned char field_85;
    unsigned char field_86;
    unsigned char field_87;
    unsigned char field_88;
    unsigned char field_89;
    unsigned char field_8a;
    unsigned char field_8b;
    unsigned char field_8c;
    unsigned char field_8d;
    unsigned char field_8e;
    unsigned char field_8f;
    int field_90;
    void* field_94;
    int m_nDeltaX;
    int m_nDeltaY;
    unsigned char field_a0;
    unsigned char field_a1;
    unsigned char field_a2;
    unsigned char field_a3;
    CEncodedVector m_vPosition;
    int field_b0;

public:
    int const& GetPositionX(int* x);
    int const& GetPositionY(int* y);
    int const& GetPositionZ(int* z);
    short const& GetRotation(short* r);
    void SetPosition(CEncodedVector pos);
    void SetRotation(short rot);

};

VALIDATE_SIZE(CObject, 0xB4);
