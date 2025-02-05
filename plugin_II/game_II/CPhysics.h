/*
    Plugin-SDK (Grand Theft Auto 2) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#pragma once
#include "PluginBase.h"
#include "CVector.h"

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

VALIDATE_SIZE(CCarPhysics, 0xB0);
