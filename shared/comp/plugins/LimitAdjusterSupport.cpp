/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/

#include "plugin.h"
#include "LimitAdjusterSupport.h"
//#include "CCoronas.h"
//#include "CShadows.h"
//#include "CModelInfo.h"
//#include "CStreaming.h"
//#include "CRadar.h"

using namespace plugin;

bool Fastman92LimitAdjusterSupport::Install() {/*
    if (PluginSupport::Install()) {

        // CoronasLimitSupport
        MAX_CORONAS = patch::GetUInt(0x6FAF46 + 4);
        CCoronas::aCoronas = reinterpret_cast<CRegisteredCorona *>(patch::GetPointer(0x6FAE9F + 1));

        // ShadowsLimitSupport
        if (patch::GetUChar(0x707398) == 0xE9)
            MAX_STORED_SHADOWS = patch::GetUShort(injector::GetBranchDestination(0x707398).as_int() + 3);
        CShadows::asShadowsStored = reinterpret_cast<CRegisteredShadow *>(patch::GetPointer(0x7073B0 + 1));

        // ModelInfoLimitSupport
        CModelInfo::ms_modelInfoPtrs = reinterpret_cast<CBaseModelInfo **>(patch::GetPointer(0x403DA7));
        CStreaming::ms_aInfoForModel = reinterpret_cast<CStreamingInfo *>(patch::GetPointer(0x408ADA + 3));

        // RadarBlipsLimitSupport
        CRadar::RadarBlipSprites = reinterpret_cast<CSprite2d *>(patch::GetPointer(0x5827EA + 1));
        MAX_RADAR_SPRITES = (patch::GetUInt(0x585950 + 2) - reinterpret_cast<unsigned int>(CRadar::RadarBlipSprites)) / 4;
        CRadar::ms_RadarTrace = reinterpret_cast<tRadarTrace *>(patch::GetPointer(0x5838B0 + 2));
        MAX_RADAR_TRACES = patch::GetUInt(0x58384C + 2);
        CRadar::MapLegendList = reinterpret_cast<unsigned short *>(patch::GetPointer(0x585A52 + 1));

        return true;
    }*/
    return false;
}
