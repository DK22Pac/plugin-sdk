/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVehicle.h"
#include "CTrainDoor.h"
#include "RenderWare.h"
#include "CPtrList.h"
#include "CPed.h"
#include "CVector.h"

enum PLUGIN_API eTrainNodes {
    TRAIN_NODE_NONE = 0,
    TRAIN_DOOR_LHS = 1,
    TRAIN_DOOR_RHS = 2,
    TRAIN_NUM_NODES = 3
};

struct PLUGIN_API CTrainNode {
    CVector m_vecPosition;
    float m_fStationDist; //!< xy-distance from start on track
};
VALIDATE_OFFSET(CTrainNode, m_vecPosition, 0x0);
VALIDATE_OFFSET(CTrainNode, m_fStationDist, 0xC);
VALIDATE_SIZE(CTrainNode, 0x10);

struct PLUGIN_API CTrainInterpolationLine {
    unsigned char m_nType;
    float m_fTime; //!< when does this keyframe start
    float m_fPosition;
    float m_fSpeed;
    float m_fAcceleration;
};
VALIDATE_OFFSET(CTrainInterpolationLine, m_nType, 0x0);
VALIDATE_OFFSET(CTrainInterpolationLine, m_fTime, 0x4);
VALIDATE_OFFSET(CTrainInterpolationLine, m_fPosition, 0x8);
VALIDATE_OFFSET(CTrainInterpolationLine, m_fSpeed, 0xC);
VALIDATE_OFFSET(CTrainInterpolationLine, m_fAcceleration, 0x10);
VALIDATE_SIZE(CTrainInterpolationLine, 0x14);

class PLUGIN_API CTrain : public CVehicle {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CTrain)

public:
    float m_fWagonPosition;
    short m_nWagonId;
    short m_nIsFarAway; //!< don't update so often?
    short m_nCurTrackNode;
    short m_nWagonGroup;
    float m_fSpeed;
    bool m_bProcessDoor;
    bool m_bTrainStopping;
    bool m_bIsFirstWagon;
    bool m_bIsLastWagon;
    unsigned char m_nTrackId; //!< or m_bUsesSubwayTracks?
    unsigned int m_nDoorTimer;
    short m_nDoorState;
    CTrainDoor m_aTrainDoors[2];
    RwFrame *m_apTrainNodes[3];

    SUPPORTED_10EN_11EN_STEAM static CVector(&aStationCoors_S)[4]; // static CVector aStationCoors_S[4]
    SUPPORTED_10EN_11EN_STEAM static CVector(&aStationCoors)[3]; // static CVector aStationCoors[3]

    // virtual function #0 (destructor)


    // virtual function #1 (not overriden)


    // virtual function #2 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void SetModelIndex(unsigned int modelIndex);

    // virtual function #4 (not overriden)


    // virtual function #5 (not overriden)


    // virtual function #6 (not overriden)


    // virtual function #7 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void ProcessControl();

    // virtual function #9 (not overriden)


    // virtual function #10 (not overriden)


    // virtual function #11 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void PreRender();
    SUPPORTED_10EN_11EN_STEAM void Render();

    // virtual function #14 (not overriden)


    // virtual function #15 (not overriden)


    // virtual function #16 (not overriden)


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


    SUPPORTED_10EN_11EN_STEAM void AddPassenger(CPed *passenger);
    SUPPORTED_10EN_11EN_STEAM void OpenTrainDoor(float angle);
    SUPPORTED_10EN_11EN_STEAM void TrainHitStuff(CPtrList &list);

    SUPPORTED_10EN_11EN_STEAM static void InitTrains();
    SUPPORTED_10EN_11EN_STEAM static void ReadAndInterpretTrackFile(char const *filename, CTrainNode **nodes, short *numNodes, int numStations, float *stationDists, float *totalLength, float *totalDuration, CTrainInterpolationLine *line, bool rightRail);
    SUPPORTED_10EN_11EN_STEAM static void Shutdown();
    SUPPORTED_10EN_11EN_STEAM static void UpdateTrains();
};
VALIDATE_OFFSET(CTrain, m_fWagonPosition, 0x288);
VALIDATE_OFFSET(CTrain, m_nWagonId, 0x28C);
VALIDATE_OFFSET(CTrain, m_nIsFarAway, 0x28E);
VALIDATE_OFFSET(CTrain, m_nCurTrackNode, 0x290);
VALIDATE_OFFSET(CTrain, m_nWagonGroup, 0x292);
VALIDATE_OFFSET(CTrain, m_fSpeed, 0x294);
VALIDATE_OFFSET(CTrain, m_bProcessDoor, 0x298);
VALIDATE_OFFSET(CTrain, m_bTrainStopping, 0x299);
VALIDATE_OFFSET(CTrain, m_bIsFirstWagon, 0x29A);
VALIDATE_OFFSET(CTrain, m_bIsLastWagon, 0x29B);
VALIDATE_OFFSET(CTrain, m_nTrackId, 0x29C);
VALIDATE_OFFSET(CTrain, m_nDoorTimer, 0x2A0);
VALIDATE_OFFSET(CTrain, m_nDoorState, 0x2A4);
VALIDATE_OFFSET(CTrain, m_aTrainDoors, 0x2A8);
VALIDATE_OFFSET(CTrain, m_apTrainNodes, 0x2D8);
VALIDATE_SIZE(CTrain, 0x2E4);

//! 873.0f, 1522.0f, 2481.0f
SUPPORTED_10EN_11EN_STEAM extern float(&StationDist)[3]; // float StationDist[3]
//! 55.0f, 1388.0f, 2337.0f, 3989.0f
SUPPORTED_10EN_11EN_STEAM extern float(&StationDist_S)[4]; // float StationDist_S[4]
SUPPORTED_10EN_11EN_STEAM extern bool(&bTrainArrivalAnnounced)[3]; // bool bTrainArrivalAnnounced[3]
SUPPORTED_10EN_11EN_STEAM extern float &TotalLengthOfTrack;
SUPPORTED_10EN_11EN_STEAM extern float &TotalDurationOfTrack;
SUPPORTED_10EN_11EN_STEAM extern float(&EngineTrackPosition)[2]; // float EngineTrackPosition[2]
SUPPORTED_10EN_11EN_STEAM extern float &TotalLengthOfTrack_S;
SUPPORTED_10EN_11EN_STEAM extern float &TotalDurationOfTrack_S;
SUPPORTED_10EN_11EN_STEAM extern float(&EngineTrackPosition_S)[4]; // float EngineTrackPosition_S[4]
SUPPORTED_10EN_11EN_STEAM extern CTrainInterpolationLine(&aLineBits)[17]; // CTrainInterpolationLine aLineBits[17]
SUPPORTED_10EN_11EN_STEAM extern CTrainInterpolationLine(&aLineBits_S)[18]; // CTrainInterpolationLine aLineBits_S[18]
SUPPORTED_10EN_11EN_STEAM extern float(&EngineTrackSpeed_S)[4]; // float EngineTrackSpeed_S[4]
SUPPORTED_10EN_11EN_STEAM extern float(&EngineTrackSpeed)[2]; // float EngineTrackSpeed[2]
SUPPORTED_10EN_11EN_STEAM extern CTrainNode *&pTrackNodes_S;
SUPPORTED_10EN_11EN_STEAM extern CTrainNode *&pTrackNodes;
SUPPORTED_10EN_11EN_STEAM extern short &NumTrackNodes;
SUPPORTED_10EN_11EN_STEAM extern short &NumTrackNodes_S;

SUPPORTED_10EN_11EN_STEAM void ProcessTrainAnnouncements();
SUPPORTED_10EN_11EN_STEAM void PlayAnnouncement(unsigned char sound, unsigned char station);

VALIDATE_SIZE(CTrainNode, 0x10);
VALIDATE_SIZE(CTrainInterpolationLine, 0x14);
VTABLE_DESC(CTrain, 0x60241C, 35);
VALIDATE_SIZE(CTrain, 0x2E4);

#include "meta/meta.CTrain.h"
