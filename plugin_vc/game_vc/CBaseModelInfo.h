/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"
#include "eModelInfoType.h"

class C2dEffect;
class CColModel;

// originally an abstract class
class CBaseModelInfo {
public:
    char           m_szName[21];
    eModelInfoType m_nType;
    unsigned char  m_nNum2dEffects;
    bool           m_bDoWeOwnTheColModel;
    CColModel*     m_pColModel;
    short          m_n2dEffectIndex;
    short          m_nObjectDataIndex;
    unsigned short m_nRefCount;
    short          m_nTxdIndex;

    // vtable
    virtual ~CBaseModelInfo() {}
    void Shutdown();
    void DeleteRwObject();
    RwObject* CreateInstance();
    RwObject* CreateInstance(RwMatrixTag* tranform);
    RwObject* GetRwObject();
    void SetAnimFile(char const* filename);
    void ConvertAnimFileIndex();
    int GetAnimFileIndex();

    //funcs
    void RemoveRef();
    void AddRef();
    void RemoveTexDictionaryRef();
    void AddTexDictionaryRef();
    void ClearTexDictionary();
    void SetTexDictionary(char* txdName);
    void Add2dEffect(C2dEffect* effect);
    C2dEffect* Get2dEffect(int effectNumber);
    CColModel* GetColModel();
    eModelInfoType GetModelType();

protected:
    CBaseModelInfo() {};
    CBaseModelInfo(const CBaseModelInfo &) {};
    CBaseModelInfo &operator=(const CBaseModelInfo &) { return *this; };
};

VALIDATE_SIZE(CBaseModelInfo, 0x28);