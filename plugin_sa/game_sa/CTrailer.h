#pragma once

#include "plbase/PluginBase_SA.h"
#include "CAutomobile.h"

class CTrailer : public CAutomobile {
protected:
    CTrailer(plugin::dummy_func_t) : CAutomobile(plugin::dummy) {}
public:
    CColPoint field_988[2];
    float field_9E0;
    float field_9E4;
    char field_9E8[4];
    float field_9EC;
    float field_9F0;

    static float& m_fTrailerSuspensionForce; // 1.5
    static float& m_fTrailerDampingForce; // 0.1

    CTrailer(int modelIndex, unsigned char createdBy);

    void ScanForTowLink();
};

VALIDATE_SIZE(CTrailer, 0x9F4);

extern float& TRAILER_TOWED_MINRATIO; // 0.9
extern float& RELINK_TRAILER_DIFF_LIMIT_XY; // 0.4
extern float& RELINK_TRAILER_DIFF_LIMIT_Z; // 1.0