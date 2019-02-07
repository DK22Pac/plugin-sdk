/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CClumpModelInfo.h"
#include "CVector.h"
#include "CRGBA.h"
#include "eHandlingIndex.h"

class CVehicleModelInfo : public CClumpModelInfo {
public:
    char           m_nLastPrimaryColor;
    char           m_nLastSecondaryColor;
    char           m_szGameName[32];
    // char _pad56[2];
    unsigned int   m_nVehicleType;
    int            m_nWheelModelIndex;
    float          m_fWheelScale;
    unsigned int   m_nNumDoors;
    eHandlingIndex m_nHandlingId;
    unsigned int   m_nVehicleClass;
    unsigned int   m_nLvl;
    CVector        m_avDummyPos[10];
    union {
        unsigned int m_nCompRules;
        struct {
            unsigned int nExtraA_comp1 : 4;
            unsigned int nExtraA_comp2 : 4;
            unsigned int nExtraA_comp3 : 4;
            unsigned int nExtraA_rule : 4;
            unsigned int nExtraB_comp1 : 4;
            unsigned int nExtraB_comp2 : 4;
            unsigned int nExtraB_comp3 : 4;
            unsigned int nExtraB_rule : 4;
        } m_nCompRulesBits;
    };
    float          m_fBikeSteerAngle; // unsued; sets to 999.99 in CModelInfo::AddVehicleModel, but not used then.
    RpMaterial    *m_apMaterialsPrimary[26];
    RpMaterial    *m_apMaterialsSecondary[26];
    unsigned char  m_anPrimaryColors[8];
    unsigned char  m_anSecondaryColors[8];
    unsigned char  m_nNumColorVariations;
    unsigned char  m_nLastColorVariation;
    unsigned char  m_nCurrentPrimaryColor;
    unsigned char  m_nCurrentSecondaryColor;
    RwTexture     *m_pEnvironmentTex;
    RpAtomic      *m_apExtras[6];
    unsigned int   m_nNumExtras;

    //variables

    static CRGBA *ms_colourTextureTable;
    static char *ms_compsUsed;  // [2]
    static char *ms_compsToUse; // [2]
    static RwTexture **ms_pEnvironmentMaps; // array with 1 element
    static RwObjectNameIdAssocation *ms_vehicleDescs;

    //funcs

    void AvoidSameVehicleColour(unsigned char* prim, unsigned char* sec);
    CVehicleModelInfo();
    // get vehicle extra with rules. Returns extra id.
    void ChooseComponent();
    // get vehicle second extra with rules. Returns extra id.
    void ChooseSecondComponent();
    void ChooseVehicleColour(unsigned char& prim, unsigned char& sec);
    static RwObject* ClearAtomicFlagCB(RwObject* object, void* data);
    // move all objects from data (it is actually RwFrame *) to frame
    static RwFrame* CollapseFramesCB(RwFrame* frame, void* data);
    // do nothing
    static void DeleteVehicleColourTextures();
    int FindEditableMaterialList();
    static RpAtomic* GetEditableMaterialListCB(RpAtomic* atomic, void* data);
    static RpMaterial* GetEditableMaterialListCB(RpMaterial* material, void* data);
    // gets max number of passengers for model
    static int GetMaximumNumberOfPassengersFromNumberOfDoors(int modelId);
    // get wheel position. Wheel is wheel id [0-3]. Local - get local offset (if false it will get world position)
    void GetWheelPosn(int wheel, CVector& outVec);
    static RpMaterial* HasAlphaMaterialCB(RpMaterial* material, void* data);
    static RpMaterial* HasSpecularMaterialCB(RpMaterial* material, void* data);
    static RpAtomic* HideAllComponentsAtomicCB(RpAtomic* atomic, void* data);
    static RpAtomic* HideDamagedAtomicCB(RpAtomic* atomic, void* data);
    // loads 'white' texture
    static void LoadEnvironmentMaps();
    static void LoadVehicleColours();
    // set new parent frame for object. Data is actually RwFrame *
    static RpAtomic* MoveObjectsCB(RwObject* object, void* data);
    // setup vehicle model components
    void PreprocessHierarchy();
    // setup objects flag. Data is actually flag (unsigned short)
    static RwObject* SetAtomicFlagCB(RwObject* object, void* data);
    void SetAtomicRenderCallbacks();
    // setup atomic renderer. Data is unused
    static RpAtomic* SetAtomicRendererCB(RpAtomic* atomic, void* data);
    // setup BigVehicle renderer. Data is unused
    static RpAtomic* SetAtomicRendererCB_BigVehicle(RpAtomic* atomic, void* data);
    // setup boat renderer. Data is unused
    static RpAtomic* SetAtomicRendererCB_Boat(RpAtomic* atomic, void* data);
    // setup heli renderer. Data is unused
    static RpAtomic* SetAtomicRendererCB_Heli(RpAtomic* atomic, void* data);
    // setup train renderer. Data is unused
    static RpAtomic* SetAtomicRendererCB_Train(RpAtomic* atomic, void* data);
    void SetEnvironmentMap();
    static RpAtomic* SetEnvironmentMapCB(RpAtomic* atomic, void* data);
    static RpMaterial* SetEnvironmentMapCB(RpMaterial* material, void* data);
    // set current vehicle colour for model
    void SetVehicleColour(unsigned char prim, unsigned char sec);
    void SetVehicleComponentFlags(RwFrame* component, unsigned int flags);
    // unloads 'white' texture
    static void ShutdownEnvironmentMaps();
    ~CVehicleModelInfo();
};

VALIDATE_SIZE(CVehicleModelInfo, 0x1F8);

extern RwFrame *&pMatFxIdentityFrame;

bool IsValidCompRule(int rule);
int GetListOfComponentsNotUsedByRules(unsigned int compRulesBits, int numExtras, int* variationsList);
int CountCompsInRule(int compRulesBits);
int ChooseComponent(int rule, int compRulesBits);

struct VehicleModelStore {
    unsigned int m_nCount;
    CVehicleModelInfo m_sObject[120];

    ~VehicleModelStore();
};
