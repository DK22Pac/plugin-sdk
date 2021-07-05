/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CClumpModelInfo.h"
#include "eHandlingIndex.h"
#include "CVector.h"
#include "RenderWare.h"
#include "CRGBA.h"

class PLUGIN_API CVehicleModelInfo : public CClumpModelInfo {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CVehicleModelInfo)

public:
    unsigned char m_nLastPrimaryColor;
    unsigned char m_nLastSecondaryColor;
    char m_szGameName[32];
    unsigned int m_nVehicleType;
    union {
        int m_nWheelModelIndex;
        int m_nPlaneLodId;
    };
    float m_fWheelScale;
    unsigned int m_nNumDoors;
    eHandlingIndex m_nHandlingId;
    unsigned int m_nVehicleClass;
    unsigned int m_nLvl;
    CVector m_vecDummyPos[10];
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
    float m_fBikeSteerAngle; //!< unsued; sets to 999.99 in CModelInfo::AddVehicleModel, but not used then.
    RpMaterial *m_apMaterialsPrimary[26];
    RpMaterial *m_apMaterialsSecondary[26];
    char m_bPrimaryColorId[8];
    char m_bSecondaryColorId[8];
    unsigned char m_nNumColorVariations;
    unsigned char m_nLastColorVariation;
    unsigned char m_nCurrentColorId[2];
    RwTexture *m_pEnvironmentTex;
    RpAtomic *m_apExtras[6];
    int m_nNumExtras;

    SUPPORTED_10EN_11EN_STEAM static char(&ms_compsToUse)[2]; // static char ms_compsToUse[2]
    SUPPORTED_10EN_11EN_STEAM static RwObjectNameIdAssocation *(&ms_vehicleDescs)[6]; // static RwObjectNameIdAssocation *ms_vehicleDescs[6]
    SUPPORTED_10EN_11EN_STEAM static RwTexture *(&ms_colourTextureTable)[256]; // static RwTexture *ms_colourTextureTable[256]
    SUPPORTED_10EN_11EN_STEAM static CRGBA(&ms_vehicleColourTable)[256]; // static CRGBA ms_vehicleColourTable[256]
    SUPPORTED_10EN_11EN_STEAM static RwTexture *(&ms_pEnvironmentMaps)[1]; // static RwTexture *ms_pEnvironmentMaps[1]
    SUPPORTED_10EN_11EN_STEAM static char(&ms_compsUsed)[2]; // static char ms_compsUsed[2]

    // virtual function #0 (destructor)


    // virtual function #1 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void DeleteRwObject();
    SUPPORTED_10EN_11EN_STEAM RwObject *CreateInstance();

    // virtual function #4 (not overriden)


    // virtual function #5 (not overriden)

    SUPPORTED_10EN_11EN_STEAM void SetClump(RpClump *clump);

    SUPPORTED_10EN_11EN_STEAM void AvoidSameVehicleColour(unsigned char *prim, unsigned char *sec);
    //! get vehicle extra with rules. Returns extra id.
    SUPPORTED_10EN_11EN_STEAM int ChooseComponent();
    //! get vehicle second extra with rules. Returns extra id.
    SUPPORTED_10EN_11EN_STEAM int ChooseSecondComponent();
    SUPPORTED_10EN_11EN_STEAM void ChooseVehicleColour(unsigned char *prim, unsigned char *sec);
    SUPPORTED_10EN_11EN_STEAM void FindEditableMaterialList();
    //! get wheel position. Wheel is wheel id [0-3]. Local - get local offset (if false it will get world position)
    SUPPORTED_10EN_11EN_STEAM void GetWheelPosn(int wheel, CVector &outPos);
    SUPPORTED_10EN_11EN_STEAM void PreprocessHierarchy();
    SUPPORTED_10EN_11EN_STEAM void SetAtomicRenderCallbacks();
    SUPPORTED_10EN_11EN_STEAM void SetEnvironmentMap();
    //! set current vehicle colour for model
    SUPPORTED_10EN_11EN_STEAM void SetVehicleColour(unsigned char prim, unsigned char sec);
    SUPPORTED_10EN_11EN_STEAM void SetVehicleComponentFlags(RwFrame *frame, unsigned int flags);

    SUPPORTED_10EN_11EN_STEAM static RwObject *ClearAtomicFlagCB(RwObject *object, void *data);
    //! move all objects from data (it is actually RwFrame *) to frame
    SUPPORTED_10EN_11EN_STEAM static RwFrame *CollapseFramesCB(RwFrame *frame, void *data);
    //! do nothing
    SUPPORTED_10EN_11EN_STEAM static void DeleteVehicleColourTextures();
    SUPPORTED_10EN_11EN_STEAM static RpMaterial *GetEditableMaterialListCB(RpMaterial *material, void *data);
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *GetEditableMaterialListCB(RpAtomic *atomic, void *data);
    //! gets max number of passengers for model
    SUPPORTED_10EN_11EN_STEAM static int GetMaximumNumberOfPassengersFromNumberOfDoors(int modelIndex);
    SUPPORTED_10EN_11EN_STEAM static RpMaterial *HasAlphaMaterialCB(RpMaterial *material, void *data);
    SUPPORTED_10EN_11EN_STEAM static RpMaterial *HasSpecularMaterialCB(RpMaterial *material, void *data);
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *HideAllComponentsAtomicCB(RpAtomic *atomic, void *data);
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *HideDamagedAtomicCB(RpAtomic *atomic, void *data);
    //! loads 'white' texture
    SUPPORTED_10EN_11EN_STEAM static void LoadEnvironmentMaps();
    SUPPORTED_10EN_11EN_STEAM static void LoadVehicleColours();
    //! set new parent frame for object. Data is actually RwFrame *
    SUPPORTED_10EN_11EN_STEAM static RwObject *MoveObjectsCB(RwObject *object, void *data);
    //! setup objects flag. Data is actually flag
    SUPPORTED_10EN_11EN_STEAM static RwObject *SetAtomicFlagCB(RwObject *object, void *data);
    //! setup atomic renderer. Data is unused
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *SetAtomicRendererCB(RpAtomic *atomic, void *data);
    //! setup BigVehicle renderer. Data is unused
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *SetAtomicRendererCB_BigVehicle(RpAtomic *atomic, void *data);
    //! setup boat renderer. Data is unused
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *SetAtomicRendererCB_Boat(RpAtomic *atomic, void *data);
    //! setup heli renderer. Data is unused
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *SetAtomicRendererCB_Heli(RpAtomic *atomic, void *data);
    //! setup train renderer. Data is unused
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *SetAtomicRendererCB_Train(RpAtomic *atomic, void *data);
    SUPPORTED_10EN_11EN_STEAM static RpMaterial *SetEnvironmentMapCB(RpMaterial *material, void *data);
    SUPPORTED_10EN_11EN_STEAM static RpAtomic *SetEnvironmentMapCB(RpAtomic *atomic, void *data);
    //! unloads 'white' texture
    SUPPORTED_10EN_11EN_STEAM static void ShutdownEnvironmentMaps();
};

SUPPORTED_10EN_11EN_STEAM extern RwTexture *&gpWhiteTexture;
SUPPORTED_10EN_11EN_STEAM extern RwFrame *&pMatFxIdentityFrame;

SUPPORTED_10EN_11EN_STEAM RwObject *GetOkAndDamagedAtomicCB(RwObject *object, void *data);
SUPPORTED_10EN_11EN_STEAM bool IsValidCompRule(int rule);
SUPPORTED_10EN_11EN_STEAM int GetListOfComponentsNotUsedByRules(unsigned int compRulesBits, int numExtras, int *variationsList);
SUPPORTED_10EN_11EN_STEAM int CountCompsInRule(int compRulesBits);
SUPPORTED_10EN_11EN_STEAM int ChooseComponent(int rule, int compRulesBits);
SUPPORTED_10EN_11EN_STEAM RwTexture *CreateCarColourTexture(unsigned char red, unsigned char green, unsigned char blue);

VTABLE_DESC(CVehicleModelInfo, 0x5FDFD8, 7);
VALIDATE_SIZE(CVehicleModelInfo, 0x1F8);

#include "meta/meta.CVehicleModelInfo.h"
