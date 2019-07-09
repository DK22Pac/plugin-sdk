/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CMotionBlurStreaks.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CRegisteredMotionBlurStreak(&CMotionBlurStreaks::aStreaks)[4] = *reinterpret_cast<CRegisteredMotionBlurStreak(*)[4]>(GLOBAL_ADDRESS_BY_VERSION(0x880A00, 0x8809B0, 0x890AF0));

int addrof(CMotionBlurStreaks::Init) = ADDRESS_BY_VERSION(0x519330, 0x519560, 0x5194F0);
int gaddrof(CMotionBlurStreaks::Init) = GLOBAL_ADDRESS_BY_VERSION(0x519330, 0x519560, 0x5194F0);

void CMotionBlurStreaks::Init() {
    plugin::CallDynGlobal(gaddrof(CMotionBlurStreaks::Init));
}

int addrof(CMotionBlurStreaks::RegisterStreak) = ADDRESS_BY_VERSION(0x519460, 0x519690, 0x519620);
int gaddrof(CMotionBlurStreaks::RegisterStreak) = GLOBAL_ADDRESS_BY_VERSION(0x519460, 0x519690, 0x519620);

void CMotionBlurStreaks::RegisterStreak(unsigned int id, unsigned char red, unsigned char green, unsigned char blue, CVector leftPoint, CVector rightPoint) {
    plugin::CallDynGlobal<unsigned int, unsigned char, unsigned char, unsigned char, CVector, CVector>(gaddrof(CMotionBlurStreaks::RegisterStreak), id, red, green, blue, leftPoint, rightPoint);
}

int addrof(CMotionBlurStreaks::Render) = ADDRESS_BY_VERSION(0x519390, 0x5195C0, 0x519550);
int gaddrof(CMotionBlurStreaks::Render) = GLOBAL_ADDRESS_BY_VERSION(0x519390, 0x5195C0, 0x519550);

void CMotionBlurStreaks::Render() {
    plugin::CallDynGlobal(gaddrof(CMotionBlurStreaks::Render));
}

int addrof(CMotionBlurStreaks::Update) = ADDRESS_BY_VERSION(0x519360, 0x519590, 0x519520);
int gaddrof(CMotionBlurStreaks::Update) = GLOBAL_ADDRESS_BY_VERSION(0x519360, 0x519590, 0x519520);

void CMotionBlurStreaks::Update() {
    plugin::CallDynGlobal(gaddrof(CMotionBlurStreaks::Update));
}
