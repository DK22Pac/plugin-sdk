/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CEncodedVector.h"

enum eTileCollisionType {
    TILE_COLLISION_TYPE_FLAT = 0,
};

enum eTileSurfaceType {
    TILE_SURFACE_TYPE_SLOPE = 0,
    TILE_SURFACE_TYPE_CONCRETE = 1,
    TILE_SURFACE_TYPE_GRASS = 2,
    TILE_SURFACE_TYPE_3 = 3,
    TILE_SURFACE_TYPE_WET = 4,
    TILE_SURFACE_TYPE_5 = 5,
    TILE_SURFACE_TYPE_6 = 6,
    TILE_SURFACE_TYPE_7 = 7,
    TILE_SURFACE_TYPE_METAL = 8
};

class CCarPhysics {
public:
    CEncodedVector2D m_vPrevVelocity;
    int m_nDamage;
    CCarPhysics* m_pNext;
    CEncodedVector2D m_vRearRightSkid;
    CEncodedVector2D m_vRearLeftSkid;
    CEncodedVector2D m_vFrontLeftSkid;
    CEncodedVector2D m_vFrontRightSkid;
    CEncodedVector2D m_vPosition;
    CEncodedVector2D m_vPrevPosition;
    CEncodedVector2D m_vVelocity;
    CEncodedVector2D m_vSlope;
    unsigned int field_80;
    unsigned int field_84;
    short m_nRotation;
    unsigned short field_144;
    CCarPhysics* m_pPrev;
    int m_nGasPedal;
    void* field_258;
    int m_nVelocityZ;
    int m_nPosZ;
    int m_nPrevVelocityZ;
    int m_nRotationForce;
    int m_nPointingAngle;
    unsigned int field_124;
    unsigned int field_128;
    unsigned int m_nFrontSkid;
    unsigned int m_nRearSkid;
    unsigned int field_140;
    unsigned char m_nTimerSinceLastMove;
    unsigned char m_bBrakeOn;
    unsigned char m_bHandbrakeOn;
    unsigned char m_bForwardGasOn;
    unsigned char m_bBackwardGasOn;
    unsigned char field_149;
    unsigned char field_150;
    unsigned char field_151;
    int m_nTileCollisionType; // eTileCollisionType
    int m_nTileSurfaceType; // eTileSurfaceType
    unsigned int field_160;
    unsigned char field_164;
    unsigned char m_nCurrentSlopeLength;
    unsigned char m_nCurrentSlopeLeftTiles;
    unsigned char m_nCurrentTileZ;
    unsigned char m_nHandbrakeForce;
    unsigned char m_nCarModel;
    unsigned char field_170;
    unsigned char field_171;
    unsigned char m_nDriveWheelsLocked;
    char m_nSteering;
    unsigned char field_174;
    unsigned char field_175;
};
VALIDATE_OFFSET(CCarPhysics, m_vPrevVelocity, 0x0);
VALIDATE_OFFSET(CCarPhysics, m_nDamage, 0x8);
VALIDATE_OFFSET(CCarPhysics, m_pNext, 0xC);
VALIDATE_OFFSET(CCarPhysics, m_vRearRightSkid, 0x10);
VALIDATE_OFFSET(CCarPhysics, m_vRearLeftSkid, 0x18);
VALIDATE_OFFSET(CCarPhysics, m_vFrontLeftSkid, 0x20);
VALIDATE_OFFSET(CCarPhysics, m_vFrontRightSkid, 0x28);
VALIDATE_OFFSET(CCarPhysics, m_vPosition, 0x30);
VALIDATE_OFFSET(CCarPhysics, m_vPrevPosition, 0x38);
VALIDATE_OFFSET(CCarPhysics, m_vVelocity, 0x40);
VALIDATE_OFFSET(CCarPhysics, m_vSlope, 0x48);
VALIDATE_OFFSET(CCarPhysics, field_80, 0x50);
VALIDATE_OFFSET(CCarPhysics, field_84, 0x54);
VALIDATE_OFFSET(CCarPhysics, m_nRotation, 0x58);
VALIDATE_OFFSET(CCarPhysics, field_144, 0x5A);
VALIDATE_OFFSET(CCarPhysics, m_pPrev, 0x5C);
VALIDATE_OFFSET(CCarPhysics, m_nGasPedal, 0x60);
VALIDATE_OFFSET(CCarPhysics, field_258, 0x64);
VALIDATE_OFFSET(CCarPhysics, m_nVelocityZ, 0x68);
VALIDATE_OFFSET(CCarPhysics, m_nPosZ, 0x6C);
VALIDATE_OFFSET(CCarPhysics, m_nPrevVelocityZ, 0x70);
VALIDATE_OFFSET(CCarPhysics, m_nRotationForce, 0x74);
VALIDATE_OFFSET(CCarPhysics, m_nPointingAngle, 0x78);
VALIDATE_OFFSET(CCarPhysics, field_124, 0x7C);
VALIDATE_OFFSET(CCarPhysics, field_128, 0x80);
VALIDATE_OFFSET(CCarPhysics, m_nFrontSkid, 0x84);
VALIDATE_OFFSET(CCarPhysics, m_nRearSkid, 0x88);
VALIDATE_OFFSET(CCarPhysics, field_140, 0x8C);
VALIDATE_OFFSET(CCarPhysics, m_nTimerSinceLastMove, 0x90);
VALIDATE_OFFSET(CCarPhysics, m_bBrakeOn, 0x91);
VALIDATE_OFFSET(CCarPhysics, m_bHandbrakeOn, 0x92);
VALIDATE_OFFSET(CCarPhysics, m_bForwardGasOn, 0x93);
VALIDATE_OFFSET(CCarPhysics, m_bBackwardGasOn, 0x94);
VALIDATE_OFFSET(CCarPhysics, field_149, 0x95);
VALIDATE_OFFSET(CCarPhysics, field_150, 0x96);
VALIDATE_OFFSET(CCarPhysics, field_151, 0x97);
VALIDATE_OFFSET(CCarPhysics, m_nTileCollisionType, 0x98);
VALIDATE_OFFSET(CCarPhysics, m_nTileSurfaceType, 0x9C);
VALIDATE_OFFSET(CCarPhysics, field_160, 0xA0);
VALIDATE_OFFSET(CCarPhysics, field_164, 0xA4);
VALIDATE_OFFSET(CCarPhysics, m_nCurrentSlopeLength, 0xA5);
VALIDATE_OFFSET(CCarPhysics, m_nCurrentSlopeLeftTiles, 0xA6);
VALIDATE_OFFSET(CCarPhysics, m_nCurrentTileZ, 0xA7);
VALIDATE_OFFSET(CCarPhysics, m_nHandbrakeForce, 0xA8);
VALIDATE_OFFSET(CCarPhysics, m_nCarModel, 0xA9);
VALIDATE_OFFSET(CCarPhysics, field_170, 0xAA);
VALIDATE_OFFSET(CCarPhysics, field_171, 0xAB);
VALIDATE_OFFSET(CCarPhysics, m_nDriveWheelsLocked, 0xAC);
VALIDATE_OFFSET(CCarPhysics, m_nSteering, 0xAD);
VALIDATE_OFFSET(CCarPhysics, field_174, 0xAE);
VALIDATE_OFFSET(CCarPhysics, field_175, 0xAF);
VALIDATE_SIZE(CCarPhysics, 0xB0);
