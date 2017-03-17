/*
Plugin-SDK (Grand Theft Auto) header file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CVehicle.h"
#include "CTrainNode.h"

enum eTrainNodes {
    
};

class CTrainInterpolationLine;

class CTrain : public CVehicle {
protected:
    CTrain(plugin::dummy_func_t) : CVehicle(plugin::dummy) {}
public:
    
    //funcs

    void AddPassenger(CPed* passenger);
    CTrain(int modelIndex, unsigned char createdBy);
    static void InitTrains();
    void OpenTrainDoor(float state);
    static void ReadAndInterpretTrackFile(char* filename, CTrainNode** nodes, short* arg2, int arg3, float* arg4, float* arg5, float* arg6, CTrainInterpolationLine* arg7, bool arg8);
    static void Shutdown();
    void TrainHitStuff(CPtrList& ptrList);
    static void UpdateTrains();
    ~CTrain();
};

//VALIDATE_SIZE(CTrain, 0x2E4);
