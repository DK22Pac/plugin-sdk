/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "PluginBase.h"
#include "CVector.h"

class CObject;

class CCamera {
public:
    CEncodedVector m_vPosition;
    CObject* m_pObject;
    CEncodedVector m_vNextPosition;
    CObject* m_pNextObject;
    unsigned __int8 field_20[16];
    int m_nMovementBitmask;
    void* field_24;
    unsigned int field_26;
    unsigned int field_30;
    unsigned int m_nTimer;
    unsigned int field_38;
    void* field_42;
    char m_nAccuracy;
    unsigned __int8 field_77;
    unsigned __int8 field_78;
    unsigned __int8 field_79;
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

VALIDATE_SIZE(CCamera, 0xBC);

extern CCamera* TheCamera;
