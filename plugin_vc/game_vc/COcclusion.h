/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CVector2D.h"
#include "CVector.h"

struct PLUGIN_API ActiveOccluderLine {
    CVector2D m_vec2dOrigin;
    CVector2D m_vec2dDirection;
    float m_fLength;
};

class PLUGIN_API CActiveOccluder {
public:
    ActiveOccluderLine m_lines[6];
    int m_nLinesCount;
    float m_fRadius;
};

class PLUGIN_API COccluder {
public:
    short length;
    short width;
    short height;
    short x;
    short y;
    short z;
    unsigned short angle;
    short listIndex;

    SUPPORTED_10EN_11EN_STEAM bool ProcessLineSegment(int corner1, int corner2, CActiveOccluder *occl);
    SUPPORTED_10EN_11EN_STEAM bool ProcessOneOccluder(CActiveOccluder *occl);
};

class PLUGIN_API COcclusion {
public:
    SUPPORTED_10EN_11EN_STEAM static short &FarAwayList;
    SUPPORTED_10EN_11EN_STEAM static short &NearbyList;
    SUPPORTED_10EN_11EN_STEAM static short &ListWalkThroughFA;
    SUPPORTED_10EN_11EN_STEAM static short &PreviousListWalkThroughFA;
    SUPPORTED_10EN_11EN_STEAM static CActiveOccluder(&aActiveOccluders)[48]; // static CActiveOccluder aActiveOccluders[48]
    SUPPORTED_10EN_11EN_STEAM static COccluder(&aOccluders)[350]; // static COccluder aOccluders[350]
    SUPPORTED_10EN_11EN_STEAM static int &NumOccludersOnMap;
    SUPPORTED_10EN_11EN_STEAM static int &NumActiveOccluders;

    SUPPORTED_10EN_11EN_STEAM static void AddOne(float x, float y, float z, float width, float length, float height, float angle);
    SUPPORTED_10EN_11EN_STEAM static void Init();
    SUPPORTED_10EN_11EN_STEAM static bool IsAABoxOccluded(CVector pos, float width, float length, float height);
    SUPPORTED_10EN_11EN_STEAM static bool IsPositionOccluded(CVector pos, float side);
    SUPPORTED_10EN_11EN_STEAM static void ProcessBeforeRendering();
};

SUPPORTED_10EN_11EN_STEAM extern CVector(&gOccluderCoorsOnScreen)[8]; // CVector gOccluderCoorsOnScreen[8]
SUPPORTED_10EN_11EN_STEAM extern CVector(&gOccluderCoors)[8]; // CVector gOccluderCoors[8]
SUPPORTED_10EN_11EN_STEAM extern bool(&gOccluderCoorsValid)[8]; // bool gOccluderCoorsValid[8]
SUPPORTED_10EN_11EN_STEAM extern float &gMaxXInOccluder;
SUPPORTED_10EN_11EN_STEAM extern float &gMinXInOccluder;
SUPPORTED_10EN_11EN_STEAM extern CVector &gCenterOnScreen;
SUPPORTED_10EN_11EN_STEAM extern float &gMaxYInOccluder;
SUPPORTED_10EN_11EN_STEAM extern float &gMinYInOccluder;

SUPPORTED_10EN_11EN_STEAM bool DoesInfiniteLineTouchScreen(float lineX, float lineY, float lineDX, float lineDY);

VALIDATE_SIZE(COccluder, 0x10);
VALIDATE_SIZE(ActiveOccluderLine, 0x14);
VALIDATE_SIZE(CActiveOccluder, 0x80);

#include "meta/meta.COcclusion.h"
