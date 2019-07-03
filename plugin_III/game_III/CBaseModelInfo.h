/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"

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
    MODEL_INFO_SIMPLE = 1,
    MODEL_INFO_MLO = 2,
    MODEL_INFO_TIME = 3,
    MODEL_INFO_CLUMP = 4,
    MODEL_INFO_VEHICLE = 5,
    MODEL_INFO_PED = 6,
    MODEL_INFO_XTRACOMPS = 7
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
    void Shutdown();
    void DeleteRwObject();
    RwObject* CreateInstance();
    RwObject* CreateInstance(RwMatrixTag* tranform);
    RwObject* GetRwObject();

    //funcs
    void Add2dEffect(C2dEffect* effect);
    void AddRef();
    void AddTexDictionaryRef();
    void ClearTexDictionary();
    void DeleteCollisionModel();
    C2dEffect* Get2dEffect(int effectNumber);
    void Init2dEffects();
    void RemoveRef();
    void RemoveTexDictionaryRef();
    void SetTexDictionary(char const* txdName);

protected:
    CBaseModelInfo() {};
    CBaseModelInfo(const CBaseModelInfo &) {};
    CBaseModelInfo &operator=(const CBaseModelInfo &) { return *this; };
};

VALIDATE_SIZE(CBaseModelInfo, 0x30);
