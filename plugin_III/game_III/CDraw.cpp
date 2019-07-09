/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CDraw.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE float &CDraw::ms_fFOV = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x5FBC6C, 0x5FBA54, 0x608A4C));
PLUGIN_VARIABLE float &CDraw::ms_fNearClipZ = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8E2DC4, 0x8E2E78, 0x8F2FB8));
PLUGIN_VARIABLE float &CDraw::ms_fLODDistance = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x8F2C30, 0x8F2CE4, 0x902E24));
PLUGIN_VARIABLE float &CDraw::ms_fFarClipZ = *reinterpret_cast<float *>(GLOBAL_ADDRESS_BY_VERSION(0x9434F0, 0x9436A8, 0x9537E8));
PLUGIN_VARIABLE unsigned char &CDraw::FadeBlue = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD53, 0x95CF0B, 0x96D04B));
PLUGIN_VARIABLE unsigned char &CDraw::FadeValue = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD68, 0x95CF20, 0x96D060));
PLUGIN_VARIABLE unsigned char &CDraw::FadeGreen = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD71, 0x95CF29, 0x96D069));
PLUGIN_VARIABLE unsigned char &CDraw::FadeRed = *reinterpret_cast<unsigned char *>(GLOBAL_ADDRESS_BY_VERSION(0x95CD90, 0x95CF48, 0x96D088));

int addrof(CDraw::SetFOV) = ADDRESS_BY_VERSION(0x4FE7B0, 0x4FE890, 0x4FE820);
int gaddrof(CDraw::SetFOV) = GLOBAL_ADDRESS_BY_VERSION(0x4FE7B0, 0x4FE890, 0x4FE820);

void CDraw::SetFOV(float fovValue) {
    plugin::CallDynGlobal<float>(gaddrof(CDraw::SetFOV), fovValue);
}
