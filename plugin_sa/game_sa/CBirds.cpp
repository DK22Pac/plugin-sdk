/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBirds.h"

unsigned int MAX_BIRDS = 6;
bool &CBirds::bHasBirdBeenShot = *(bool *)0xC6A8A0;
unsigned int &CBirds::NumberOfBirds = *(unsigned int *)0xC6A8A4;
CBird *CBirds::aBirds = (CBird *)0xC6A8B0;
CVector &CBirds::BirdShotAt = *(CVector *)0xC6AA48;
float *BIRD_CREATION_COORS_X = (float *)0x8D5250;
float *BIRD_CREATION_COORS_Y = (float *)0x8D5268;
float *BIRD_CREATION_COORS_Z = (float *)0x8D5280;

// Converted from cdecl void CBirds::Init(void) 0x711EC0
void CBirds::Init() {
    plugin::Call<0x711EC0>();
}

// Converted from cdecl int CBirds::CreateNumberOfBirds(CVector pos,CVector destination,int count,int birdType,bool checkObstacles) 0x711EF0
int CBirds::CreateNumberOfBirds(CVector pos, CVector destination, int count, int birdType, bool checkObstacles) {
    return plugin::CallAndReturn<int, 0x711EF0, CVector, CVector, int, int, bool>(pos, destination, count, birdType, checkObstacles);
}

// Converted from cdecl void CBirds::Shutdown(void) 0x712300
void CBirds::Shutdown() {
    plugin::Call<0x712300>();
}

// Converted from cdecl void CBirds::Update(void) 0x712330
void CBirds::Update() {
    plugin::Call<0x712330>();
}

// Converted from cdecl void CBirds::Render(void) 0x712810
void CBirds::Render() {
    plugin::Call<0x712810>();
}

// Converted from cdecl void CBirds::HandleGunShot(CVector const*pointA,CVector const*pointB) 0x712E40
void CBirds::HandleGunShot(CVector const* pointA, CVector const* pointB) {
    plugin::Call<0x712E40, CVector const*, CVector const*>(pointA, pointB);
}
