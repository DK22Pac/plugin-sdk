/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVehicle.h"
#include "CVector.h"

enum PLUGIN_API eCesnaStatus {
    CESNA_STATUS_NONE = 0, //!< doesn't even exist
    CESNA_STATUS_FLYING = 1,
    CESNA_STATUS_DESTROYED = 2,
    CESNA_STATUS_LANDED = 3
};

enum PLUGIN_API ePlaneNodes {
    PLANE_NODE_NONE = 0,
    PLANE_CHASSIS = 1,
    PLANE_WHEEL_FRONT = 2,
    PLANE_WHEEL_REAR = 3,
    PLANE_NUM_NODES = 4
};

struct PLUGIN_API CPlaneNode {
    CVector m_vecPos;
    float m_fPosAtPath; //!< xy-distance from start on path
    bool m_bOnGround; //!< i.e. not flying
};

struct PLUGIN_API CPlaneInterpolationLine {
    unsigned char m_nType;
    float m_nTime; //!< when does this keyframe start
    float m_fPosition;
    float m_fSpeed;
    float m_fAcceleration;
};

class PLUGIN_API CPlane : public CVehicle {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CPlane)

public:
    short m_nPlaneId;
    short m_nIsFarAway;
    short m_nCurPathNode;
    float m_fSpeed;
    unsigned int m_nFrameWhenHit;
    bool m_bHasBeenHit;
    bool m_bIsDrugRunCesna;
    bool m_bIsDropOffCesna;

    // virtual function #0 (destructor)


    // virtual function #1 (not overriden)


    // virtual function #2 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void SetModelIndex(unsigned int modelIndex);

    // virtual function #4 (not overriden)


    // virtual function #5 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void DeleteRwObject();

    // virtual function #7 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void ProcessControl();

    // virtual function #9 (not overriden)


    // virtual function #10 (not overriden)


    // virtual function #11 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void PreRender();
    SUPPORTED_10EN_11EN_STEAM void Render();

    // virtual function #14 (not overriden)


    // virtual function #15 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void FlagToDestroyWhenNextProcessed();

    // virtual function #17 (not overriden)


    // virtual function #18 (not overriden)


    // virtual function #19 (not overriden)


    // virtual function #20 (not overriden)


    // virtual function #21 (not overriden)


    // virtual function #22 (not overriden)


    // virtual function #23 (not overriden)


    // virtual function #24 (not overriden)


    // virtual function #25 (not overriden)


    // virtual function #26 (not overriden)


    // virtual function #27 (not overriden)


    // virtual function #28 (not overriden)


    // virtual function #29 (not overriden)


    // virtual function #30 (not overriden)


    // virtual function #31 (not overriden)


    // virtual function #32 (not overriden)


    // virtual function #33 (not overriden)


    // virtual function #34 (not overriden)


    SUPPORTED_10EN_11EN_STEAM static void CreateDropOffCesna();
    SUPPORTED_10EN_11EN_STEAM static CVector FindDropOffCesnaCoordinates();
    SUPPORTED_10EN_11EN_STEAM static CVector FindDrugPlaneCoordinates();
    SUPPORTED_10EN_11EN_STEAM static bool HasCesnaBeenDestroyed();
    SUPPORTED_10EN_11EN_STEAM static bool HasCesnaLanded();
    SUPPORTED_10EN_11EN_STEAM static bool HasDropOffCesnaBeenShotDown();
    SUPPORTED_10EN_11EN_STEAM static void InitPlanes();
    SUPPORTED_10EN_11EN_STEAM static CPlaneNode *LoadPath(char const *filename, int *numNodes, float *totalLength, bool loop);
    SUPPORTED_10EN_11EN_STEAM static void Shutdown();
    SUPPORTED_10EN_11EN_STEAM static bool TestRocketCollision(CVector *coors);
    SUPPORTED_10EN_11EN_STEAM static void UpdatePlanes();
};

SUPPORTED_10EN_11EN_STEAM extern float &TotalDurationOfFlightPath;
SUPPORTED_10EN_11EN_STEAM extern float &TotalLengthOfFlightPath2;
SUPPORTED_10EN_11EN_STEAM extern float &TotalDurationOfFlightPath2;
SUPPORTED_10EN_11EN_STEAM extern float(&PlanePath2Position)[3]; // float PlanePath2Position[3]
SUPPORTED_10EN_11EN_STEAM extern float &TotalLengthOfFlightPath3;
SUPPORTED_10EN_11EN_STEAM extern float &TotalDurationOfFlightPath3;
SUPPORTED_10EN_11EN_STEAM extern float &PlanePath3Position;
SUPPORTED_10EN_11EN_STEAM extern float &TotalLengthOfFlightPath4;
SUPPORTED_10EN_11EN_STEAM extern float &TotalDurationOfFlightPath4;
SUPPORTED_10EN_11EN_STEAM extern float &PlanePath4Position;
SUPPORTED_10EN_11EN_STEAM extern int &CesnaMissionStatus;
SUPPORTED_10EN_11EN_STEAM extern int &CesnaMissionStartTime;
SUPPORTED_10EN_11EN_STEAM extern int &DropOffCesnaMissionStatus;
SUPPORTED_10EN_11EN_STEAM extern int &DropOffCesnaMissionStartTime;
SUPPORTED_10EN_11EN_STEAM extern CPlaneInterpolationLine(&aPlaneLineBits)[6]; // CPlaneInterpolationLine aPlaneLineBits[6]
SUPPORTED_10EN_11EN_STEAM extern CPlaneNode *&pPath4Nodes;
SUPPORTED_10EN_11EN_STEAM extern CPlaneNode *&pPath3Nodes;
SUPPORTED_10EN_11EN_STEAM extern CPlaneNode *&pPath2Nodes;
SUPPORTED_10EN_11EN_STEAM extern float &TakeOffPoint;
SUPPORTED_10EN_11EN_STEAM extern CPlane *&pDropOffCesna;
SUPPORTED_10EN_11EN_STEAM extern float(&PlanePath2Speed)[3]; // float PlanePath2Speed[3]
SUPPORTED_10EN_11EN_STEAM extern float &PlanePath3Speed;
SUPPORTED_10EN_11EN_STEAM extern float &PlanePath4Speed;
SUPPORTED_10EN_11EN_STEAM extern CPlaneNode *&pPathNodes;
SUPPORTED_10EN_11EN_STEAM extern int &NumPathNodes;
SUPPORTED_10EN_11EN_STEAM extern float &TotalLengthOfFlightPath;
SUPPORTED_10EN_11EN_STEAM extern float &LandingPoint;
SUPPORTED_10EN_11EN_STEAM extern CPlane *&pDrugRunCesna;
SUPPORTED_10EN_11EN_STEAM extern float(&OldPlanePathPosition)[3]; // float OldPlanePathPosition[3]
SUPPORTED_10EN_11EN_STEAM extern float(&PlanePathPosition)[3]; // float PlanePathPosition[3]
SUPPORTED_10EN_11EN_STEAM extern int &NumPath4Nodes;
SUPPORTED_10EN_11EN_STEAM extern int &NumPath2Nodes;
SUPPORTED_10EN_11EN_STEAM extern int &NumPath3Nodes;
SUPPORTED_10EN_11EN_STEAM extern float(&PlanePathSpeed)[3]; // float PlanePathSpeed[3]

SUPPORTED_10EN_11EN_STEAM void CreateIncomingCesna();

VALIDATE_SIZE(CPlaneNode, 0x14);
VALIDATE_SIZE(CPlaneInterpolationLine, 0x14);
VTABLE_DESC(CPlane, 0x6021DC, 35);
VALIDATE_SIZE(CPlane, 0x29C);

#include "meta/meta.CPlane.h"
