/*
Plugin-SDK (Grand Theft Auto 3) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVehicle.h"
#include "CTrainNode.h"
#include "CTrainDoor.h"

enum eTrainNodes {
    TRAIN_NODE_NONE = 0,
    TRAIN_DOOR_LHS = 1,
    TRAIN_DOOR_RHS = 2,
    TRAIN_NUM_NODES
};

class CTrainInterpolationLine;

class CTrain : public CVehicle {
protected:
    CTrain(plugin::dummy_func_t) : CVehicle(plugin::dummy) {}
public:
    float           m_fCurrentSpeedLimit;
    unsigned short  m_nCarriageId;
    short           m_nHideModel;
    short           m_nCurrentPathPoint;
    short           m_nTrainId;
    float           m_fVelocity;
    bool            m_bTrainDoorProcessing;
    bool            m_bTrainDoorOpening;
    bool            m_bFirstCarriage;
    bool            m_bLastCarriage;
    unsigned char   m_nTrackId;
private:
    char _pad29D[3];
public:
    int             m_nTrainDoorProcessingTime;
    short           m_nDoorsState;
private:
    char _pad2A6[2];
public:
    CTrainDoor      m_trainDoor[2];
    RwFrame        *m_pTrainNode[3];

    //funcs

    void AddPassenger(CPed* passenger);
    CTrain(int modelIndex, unsigned char createdBy);
    static void InitTrains();
    void OpenTrainDoor(float state);
    static void ReadAndInterpretTrackFile(char* filename, CTrainNode** nodes, short* arg2, int arg3, float* arg4, float* arg5, float* arg6, CTrainInterpolationLine* arg7, bool arg8);
    static void Shutdown();
    void TrainHitStuff(CPtrList& ptrList);
    static void UpdateTrains();
};

VALIDATE_SIZE(CTrain, 0x2E4);

extern unsigned short *NumTrackNodes;
extern unsigned short *NumTrackNodes_S;
extern CTrainNode **pTrackNodes;
extern CTrainNode **pTrackNodes_S;