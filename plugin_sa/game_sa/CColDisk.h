/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CVector.h"

class CColDisk {
public:
    CVector m_vecStart;
    float m_fStartRadius;
    unsigned char m_nMaterial;
    unsigned char m_nPiece;
    unsigned char m_nLighting;
private:
    char _pad13;
public:
    CVector m_vecEnd;
    float m_fEndRadius;

    void Set(float startRadius, CVector const& start, CVector const& end, float endRadius, unsigned char material, unsigned char pieceType, unsigned char lighting);
};
VALIDATE_OFFSET(CColDisk, m_vecStart, 0x0);
VALIDATE_OFFSET(CColDisk, m_fStartRadius, 0xC);
VALIDATE_OFFSET(CColDisk, m_nMaterial, 0x10);
VALIDATE_OFFSET(CColDisk, m_nPiece, 0x11);
VALIDATE_OFFSET(CColDisk, m_nLighting, 0x12);
VALIDATE_OFFSET(CColDisk, m_vecEnd, 0x14);
VALIDATE_OFFSET(CColDisk, m_fEndRadius, 0x20);
VALIDATE_SIZE(CColDisk, 0x24);