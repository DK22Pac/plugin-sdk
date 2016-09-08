/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CAEAudioEntity.h"
#include "CAESound.h"

#pragma pack(push, 1)
class PLUGIN_API CPedCollisionAudio : public CAEAudioEntity
{
public:
  __int8 field_7C;
  __int8 field_7D;
  __int16 field_7E;
  __int32 field_80;
  float field_84;
  float field_88;
  __int8 field_8C[8];
  class CPed *m_pPed;
  __int8 field_98;
  __int8 field_99[3];
  CAESound *field_9C;
  __int32 field_A0;
  CAESound *field_A4;
  __int8 m_85F438[0xA8];
  CAESound *field_150;
  float field_154;
  float field_158;
};
#pragma pack(pop)

VALIDATE_SIZE(CPedCollisionAudio, 0x15C);