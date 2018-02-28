/*
Plugin-SDK (Grand Theft Auto 3) source file
Authors: GTA Community. See more here
https://github.com/DK22Pac/plugin-sdk
Do not delete this comment block. Respect others' work!
*/
#include "CTrain.h"

// Converted from thiscall void CTrain::AddPassenger(CPed *passenger) 0x5504A0
void CTrain::AddPassenger(CPed* passenger) {
    plugin::CallMethod<0x5504A0, CTrain *, CPed*>(this, passenger);
}

// Converted from thiscall void CTrain::CTrain(int modelIndex, uchar createdBy) 0x54E2A0
CTrain::CTrain(int modelIndex, unsigned char createdBy) : CVehicle(plugin::dummy) {
    plugin::CallMethod<0x54E2A0, CTrain *, int, unsigned char>(this, modelIndex, createdBy);
}

// Converted from cdecl void CTrain::InitTrains(void) 0x54F000 
void CTrain::InitTrains() {
    plugin::Call<0x54F000>();
}

// Converted from thiscall void CTrain::OpenTrainDoor(float state) 0x550360
void CTrain::OpenTrainDoor(float state) {
    plugin::CallMethod<0x550360, CTrain *, float>(this, state);
}

// Converted from cdecl void CTrain::ReadAndInterpretTrackFile(char *filename,CTrainNode **nodes,short *,int,float *,float *,float *,CTrainInterpolationLine *,bool) 0x54EAB0
void CTrain::ReadAndInterpretTrackFile(char* filename, CTrainNode** nodes, short* arg2, int arg3, float* arg4, float* arg5, float* arg6, CTrainInterpolationLine* arg7, bool arg8) {
    plugin::Call<0x54EAB0, char*, CTrainNode**, short*, int, float*, float*, float*, CTrainInterpolationLine*, bool>(filename, nodes, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

// Converted from cdecl void CTrain::Shutdown(void) 0x54F360 
void CTrain::Shutdown() {
    plugin::Call<0x54F360>();
}

// Converted from thiscall void CTrain::TrainHitStuff(CPtrList &ptrList) 0x550300
void CTrain::TrainHitStuff(CPtrList& ptrList) {
    plugin::CallMethod<0x550300, CTrain *, CPtrList&>(this, ptrList);
}

// Converted from cdecl void CTrain::UpdateTrains(void) 0x54F3A0 
void CTrain::UpdateTrains() {
    plugin::Call<0x54F3A0>();
}

unsigned short *NumTrackNodes = (unsigned short *)0x95CC5C;
unsigned short *NumTrackNodes_S = (unsigned short *)0x95CC6A;
CTrainNode **pTrackNodes = (CTrainNode **)0x8F4338;
CTrainNode ** pTrackNodes_S = (CTrainNode **)0x8F2560;
