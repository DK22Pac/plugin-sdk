/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CEncodedVector.h"

class CObject;

class CCamera {
public:
    CEncodedVector m_vPosition;
    CObject* m_pObject;
    CEncodedVector m_vNextPosition;
    CObject* m_pNextObject;
    unsigned char field_20[16];
    int m_nMovementBitmask;
    void* field_24;
    unsigned int field_26;
    unsigned int field_30;
    unsigned int m_nTimer;
    unsigned int field_38;
    void* field_42;
    char m_nAccuracy;
    unsigned char field_77;
    unsigned char field_78;
    unsigned char field_79;
    unsigned int field_80;
    unsigned int field_84;
    unsigned int field_88;
    unsigned int field_92;
    unsigned int field_96;
    unsigned int field_100;
    unsigned int m_nWidth;
    unsigned int m_nHeight;
    unsigned int m_nHalfWidth;
    unsigned int m_nHalfHeight;
    unsigned int m_nScreenX;
    unsigned int m_nScreenW;
    unsigned int m_nScreenY;
    unsigned int m_nScreenH;
    CEncodedVector m_vCamPosition;
    unsigned int field_148;
    CEncodedVector m_vPosInterp;
    unsigned int field_164;
    unsigned int m_nHudScale;
    CEncodedVector2D m_vVelocity;
    unsigned int m_nCameraHeadVelocity;
    int field_184;

public:
    void WorldToScreen2D(int x, int y, int z, int* outX, int* outY);
    void WorldToScreen2D(CEncodedVector in, CEncodedVector2D* out);
};
VALIDATE_OFFSET(CCamera, m_vPosition, 0x0);
VALIDATE_OFFSET(CCamera, m_pObject, 0xC);
VALIDATE_OFFSET(CCamera, m_vNextPosition, 0x10);
VALIDATE_OFFSET(CCamera, m_pNextObject, 0x1C);
VALIDATE_OFFSET(CCamera, field_20, 0x20);
VALIDATE_OFFSET(CCamera, m_nMovementBitmask, 0x30);
VALIDATE_OFFSET(CCamera, field_24, 0x34);
VALIDATE_OFFSET(CCamera, field_26, 0x38);
VALIDATE_OFFSET(CCamera, field_30, 0x3C);
VALIDATE_OFFSET(CCamera, m_nTimer, 0x40);
VALIDATE_OFFSET(CCamera, field_38, 0x44);
VALIDATE_OFFSET(CCamera, field_42, 0x48);
VALIDATE_OFFSET(CCamera, m_nAccuracy, 0x4C);
VALIDATE_OFFSET(CCamera, field_77, 0x4D);
VALIDATE_OFFSET(CCamera, field_78, 0x4E);
VALIDATE_OFFSET(CCamera, field_79, 0x4F);
VALIDATE_OFFSET(CCamera, field_80, 0x50);
VALIDATE_OFFSET(CCamera, field_84, 0x54);
VALIDATE_OFFSET(CCamera, field_88, 0x58);
VALIDATE_OFFSET(CCamera, field_92, 0x5C);
VALIDATE_OFFSET(CCamera, field_96, 0x60);
VALIDATE_OFFSET(CCamera, field_100, 0x64);
VALIDATE_OFFSET(CCamera, m_nWidth, 0x68);
VALIDATE_OFFSET(CCamera, m_nHeight, 0x6C);
VALIDATE_OFFSET(CCamera, m_nHalfWidth, 0x70);
VALIDATE_OFFSET(CCamera, m_nHalfHeight, 0x74);
VALIDATE_OFFSET(CCamera, m_nScreenX, 0x78);
VALIDATE_OFFSET(CCamera, m_nScreenW, 0x7C);
VALIDATE_OFFSET(CCamera, m_nScreenY, 0x80);
VALIDATE_OFFSET(CCamera, m_nScreenH, 0x84);
VALIDATE_OFFSET(CCamera, m_vCamPosition, 0x88);
VALIDATE_OFFSET(CCamera, field_148, 0x94);
VALIDATE_OFFSET(CCamera, m_vPosInterp, 0x98);
VALIDATE_OFFSET(CCamera, field_164, 0xA4);
VALIDATE_OFFSET(CCamera, m_nHudScale, 0xA8);
VALIDATE_OFFSET(CCamera, m_vVelocity, 0xAC);
VALIDATE_OFFSET(CCamera, m_nCameraHeadVelocity, 0xB4);
VALIDATE_OFFSET(CCamera, field_184, 0xB8);
VALIDATE_SIZE(CCamera, 0xBC);

extern CCamera* TheCamera;
