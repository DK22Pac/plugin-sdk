/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"

class CEntity;
class CRect;

struct tTagDesc {
    CEntity* m_pEntity;
    uint8_t    m_nAlpha;
};
VALIDATE_OFFSET(tTagDesc, m_pEntity, 0x0);
VALIDATE_OFFSET(tTagDesc, m_nAlpha, 0x4);
VALIDATE_SIZE(tTagDesc, 0x8);

class CTagManager {
public:
    static constexpr uint32_t MAX_TAGS = 150;

    static tTagDesc(&ms_tagDesc)[MAX_TAGS];
    static int32_t& ms_numTags;
    static int32_t& ms_numTagged;
    static RxPipeline*& ms_pPipeline;

    static void     Save();
    static void     Load();
};
VALIDATE_SIZE(CTagManager, 0x1);