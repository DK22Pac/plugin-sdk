/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "CBox.h"


class CTimeCycleBox
{
public:
  CBox box;
  short farclip;
  unsigned char lodDistMult;
  int extraColor;
  float strength;
  float falloff;
};
VALIDATE_OFFSET(CTimeCycleBox, box, 0x0);
VALIDATE_OFFSET(CTimeCycleBox, farclip, 0x18);
VALIDATE_OFFSET(CTimeCycleBox, lodDistMult, 0x1A);
VALIDATE_OFFSET(CTimeCycleBox, extraColor, 0x1C);
VALIDATE_OFFSET(CTimeCycleBox, strength, 0x20);
VALIDATE_OFFSET(CTimeCycleBox, falloff, 0x24);
VALIDATE_SIZE(CTimeCycleBox, 0x28);
