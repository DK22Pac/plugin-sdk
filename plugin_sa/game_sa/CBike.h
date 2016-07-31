#pragma once
#include "plbase/PluginBase_SA.h"
#include "CVehicle.h"

enum eBikeNodes {
    BIKE_NODE_NONE = 0,
    BIKE_CHASSIS = 1,
    BIKE_FORKS_FRONT = 2,
    BIKE_FORKS_REAR = 3,
    BIKE_WHEEL_FRONT = 4,
    BIKE_WHEEL_REAR = 5,
    BIKE_MUDGUARD = 6,
    BIKE_HANDLEBARS = 7,
    BIKE_MISC_A = 8,
    BIKE_MISC_B = 9,
    BIKE_NUM_NODES
};

class CBike : public CVehicle {
public:
    RwFrame       *m_aBikeNodes[BIKE_NUM_NODES];
    bool           m_bLeanMatrixCalculated;
    char _pad0[3];
    CMatrix        m_mLeanMatrix;
    unsigned char  m_nDamageFlags;
    char field_615[27];
    CVector field_630;
    void          *m_pBikeHandlingData;
    CRideAnimData  m_rideAnimData;
    unsigned char  m_anWheelDamageState[2];
    char field_65E;
    char field_65F;
    CColPoint      m_anWheelColPoint[4];
    float field_710[4];
    float field_720[4];
    int field_730[4];
    float field_740;
    int            m_anWheelSurfaceType[2];
    char field_74C[2];
    char field_74E[2];
    float          m_afWheelRotationX[2];
    float field_758[2];
    float field_760;
    float field_764;
    float field_768;
    float field_76C;
    float field_770[4];
    float field_780[4];
    float          m_fHeightAboveRoad;
    float          m_fCarTraction;
    float field_798;
    float field_79C;
    float field_7A0;
    float field_7A4;
    short field_7A8;
    char field_7AA[2];
    int field_7AC;
    int field_7B0;
    bool           m_bPedLeftHandFixed;
    bool           m_bPedRightHandFixed;
    char field_7B6[2];
    int field_7B8;
    int field_7BC;
    CEntity       *m_apReferencedEntities[4];
    CVector        m_avTouchPointsLocalSpace[4];
    CEntity       *m_pDamager;
    unsigned char  m_nNumContactWheels;
    unsigned char  m_nNumWheelsOnGround;
    char field_806;
    char field_807;
    int field_808;
    unsigned int   m_anWheelState[2]; // enum tWheelState
};

VALIDATE_SIZE(CBike, 0x814);
