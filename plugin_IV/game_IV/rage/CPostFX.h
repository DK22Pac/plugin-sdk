/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "datBase.h"
#include "grcTexture.h"
#include "grmShader.h"
#include "grcEffect.h"

namespace rage {
    class CPostFX : datBase {
    private:
        static CPostFX*& ms_pInstance;

    public:
        uint32_t m_Width;
        uint32_t m_Height;
        grcTexturePC* m_FSCopy;
        grcTexturePC* m_FSCopy2;
        grcTexturePC* m_Unknown;
        grcTexturePC* m_Quarter;
        grcTexturePC* m_Blur;
        grcTexturePC* m_Blur2;
        grcTexturePC* m_Blur2Copy;
        grcTexturePC* m_Lum0;
        grcTexturePC* m_Lum1;
        grcTexturePC* m_Lum2;
        grcTexturePC* m_CurrentLum;
        grcTexturePC* m_AdaptedLum[4];
        uint32_t field_29;
        uint32_t field_30;
        uint32_t field_31;
        grcEffectVar__ m_JitterTextureId;
        uint32_t field_33;
        grcEffectVar__ m_aStencilcopytexId;
        grmShader* m_Shader;
        grcEffectVar__ m_PostFxTexture0Id;
        grcEffectVar__ m_PostFxTexture1Id;
        grcEffectVar__ m_PostFxTexture2Id;
        grcEffectVar__ m_PostFxTextureV0Id;
        grcEffectVar__ m_PostFxTextureV1Id;
        uint32_t field_104;
        uint32_t field_105;
        uint32_t field_106;
        uint32_t field_107;
        uint32_t field_108;
        uint8_t field_114[468];
        uint32_t field_325;
        bool m_useHighDOF;
        uint32_t field_400;
        grcEffectVar__ m_ExposureId;
        grcEffectVar__ m_TexelSizeId;
        grcEffectVar__ m_ElapsedTimeId;
        grcEffectVar__ m_AdaptTimeId;
        grcEffectVar__ m_ToneMapParamsId;
        uint32_t field_406;
        grcEffectVar__ m_NoiseParamsId;
        grcEffectVar__ m_ColorCorrectId;
        grcEffectVar__ m_ColorShiftId;
        grcEffectVar__ m_deSatContrastGammaId;
        grcEffectVar__ m_AdaptedLumMinId;
        grcEffectVar__ m_AdaptedLumMaxId;
        grcEffectVar__ m_DOF_PROJId;
        grcEffectVar__ m_DOF_PARAMSId;
        grcEffectVar__ m_DOF_BLURId;
        grcEffectVar__ m_DofBlurWeightId;
        grcEffectVar__ m_EAA_PARAMS2Id;
        grcEffectVar__ m_MB_MATRIXId;
        grcEffectVar__ m_gbufferTexture1Id;
        grcEffectVar__ m_gbufferTexture2Id;
        grcEffectVar__ m_gbufferTexture3Id;
        grcEffectVar__ m_gbufferStencilTextureId;
        uint32_t field_423;
        grcEffectVar__ m_PPPDirectionalMotionBlurLengthId;
        grcEffectVar__ m_GTACompositePostFxId;
        uint32_t field_426;
        uint32_t field_427;
        uint32_t field_428;
        uint8_t field_918[180];

    public:
        static CPostFX* GetInstance() {
            return ms_pInstance;
        }
    };

    VALIDATE_SIZE(CPostFX, 0x390);
}
