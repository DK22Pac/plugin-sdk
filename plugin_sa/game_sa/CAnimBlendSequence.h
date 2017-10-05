/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"

#pragma pack(push, 1)
class CAnimBlendSequence
{
public:
  int hash;
  __int16 flags;
  __int16 frameCount;
  int frames;

  //funcs
  CAnimBlendSequence();
  void CompressKeyframes(unsigned char* arg1);
  int GetDataSize(bool arg1);
  bool MoveMemorY();
  int RemoveQuaternionFlips();
  void RemoveUncompressedData(unsigned char* arg1);
  void SetBoneTag(int hash);
  void SetName(char const* string);
  void SetNumFrames(int count, bool arg2, bool arg3, unsigned char* arg4);
  void Uncompress(unsigned char* arg1);
  ~CAnimBlendSequence();

};
#pragma pack(pop)

VALIDATE_SIZE(CAnimBlendSequence, 0xC);