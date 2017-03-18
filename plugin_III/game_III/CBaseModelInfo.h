/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "game_III\RenderWare.h"

/*
     GTA 3 model classes

     CBaseModelInfo       // base, abstract class
     |
     |
     +---CSimpleModelInfo       // (static) map object
     |      |
     |      |
     |      +---CTimeModelInfo         // map time object (night objects)
     |
     |
     +---CClumpModelInfo        // (dynamic) object with hierarchy
            |
            |
            +---CVehicleModelInfo      // vehicle
            |
            |
            +---CPedModelInfo          // ped
            |
            |
            +---CMloModelInfo          // 'sta' section
            |
            |
            +---CXtraCompsModelInfo    // ped parts?
*/

enum ModelInfoType {
    MODEL_INFO_SIMPLE = 1
};

class C2dEffect;
class CColModel;

// originally an abstract class
class CBaseModelInfo {
public:
    char           m_szName[24];
    CColModel     *m_pColModel;
    C2dEffect     *m_p2dEffect;
    short          m_nObjectDataIndex;
    unsigned short m_nRefCount;
    short          m_nTxdIndex;
    unsigned char  m_nType; // see ModelInfoType
    unsigned char  m_nNum2dEffects;
    bool           m_bDoWeOwnTheColModel;
private:
    char _pad2D[3];
public:

    // vtable

    virtual ~CBaseModelInfo() {}

protected:
    CBaseModelInfo() {};
    CBaseModelInfo(const CBaseModelInfo &) {};
    CBaseModelInfo &operator=(const CBaseModelInfo &) { return *this; };
};
#pragma pack(pop)

VALIDATE_SIZE(CBaseModelInfo, 0x30);