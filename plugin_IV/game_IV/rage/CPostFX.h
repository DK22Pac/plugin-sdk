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
#include "grcRenderTarget.h"

namespace rage {
    class CPostFX : datBase {
    private:
        static CPostFX*& ms_pInstance;

    public:
        uint32_t m_Width;
        uint32_t m_Height;
        grcRenderTargetPC* m_FSCopy;
        grcRenderTargetPC* m_FSCopy2;
        grcRenderTargetPC* m_Unknown;
        grcRenderTargetPC* m_Quarter;
        grcRenderTargetPC* m_Blur;
        grcRenderTargetPC* m_Blur2;
        grcRenderTargetPC* m_Blur2Copy;
        grcRenderTargetPC* m_Lum0;
        grcRenderTargetPC* m_Lum1;
        grcRenderTargetPC* m_Lum2;
        grcRenderTargetPC* m_CurrentLum;
        grcRenderTargetPC* m_AdaptedLum[4];
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
    VALIDATE_OFFSET(CPostFX, m_Width, 0x4);
    VALIDATE_OFFSET(CPostFX, m_Height, 0x8);
    VALIDATE_OFFSET(CPostFX, m_FSCopy, 0xC);
    VALIDATE_OFFSET(CPostFX, m_FSCopy2, 0x10);
    VALIDATE_OFFSET(CPostFX, m_Unknown, 0x14);
    VALIDATE_OFFSET(CPostFX, m_Quarter, 0x18);
    VALIDATE_OFFSET(CPostFX, m_Blur, 0x1C);
    VALIDATE_OFFSET(CPostFX, m_Blur2, 0x20);
    VALIDATE_OFFSET(CPostFX, m_Blur2Copy, 0x24);
    VALIDATE_OFFSET(CPostFX, m_Lum0, 0x28);
    VALIDATE_OFFSET(CPostFX, m_Lum1, 0x2C);
    VALIDATE_OFFSET(CPostFX, m_Lum2, 0x30);
    VALIDATE_OFFSET(CPostFX, m_CurrentLum, 0x34);
    VALIDATE_OFFSET(CPostFX, m_AdaptedLum, 0x38);
    VALIDATE_OFFSET(CPostFX, field_29, 0x48);
    VALIDATE_OFFSET(CPostFX, field_30, 0x4C);
    VALIDATE_OFFSET(CPostFX, field_31, 0x50);
    VALIDATE_OFFSET(CPostFX, m_JitterTextureId, 0x54);
    VALIDATE_OFFSET(CPostFX, field_33, 0x58);
    VALIDATE_OFFSET(CPostFX, m_aStencilcopytexId, 0x5C);
    VALIDATE_OFFSET(CPostFX, m_Shader, 0x60);
    VALIDATE_OFFSET(CPostFX, m_PostFxTexture0Id, 0x64);
    VALIDATE_OFFSET(CPostFX, m_PostFxTexture1Id, 0x68);
    VALIDATE_OFFSET(CPostFX, m_PostFxTexture2Id, 0x6C);
    VALIDATE_OFFSET(CPostFX, m_PostFxTextureV0Id, 0x70);
    VALIDATE_OFFSET(CPostFX, m_PostFxTextureV1Id, 0x74);
    VALIDATE_OFFSET(CPostFX, field_104, 0x78);
    VALIDATE_OFFSET(CPostFX, field_105, 0x7C);
    VALIDATE_OFFSET(CPostFX, field_106, 0x80);
    VALIDATE_OFFSET(CPostFX, field_107, 0x84);
    VALIDATE_OFFSET(CPostFX, field_108, 0x88);
    VALIDATE_OFFSET(CPostFX, field_114, 0x8C);
    VALIDATE_OFFSET(CPostFX, field_325, 0x260);
    VALIDATE_OFFSET(CPostFX, m_useHighDOF, 0x264);
    VALIDATE_OFFSET(CPostFX, field_400, 0x268);
    VALIDATE_OFFSET(CPostFX, m_ExposureId, 0x26C);
    VALIDATE_OFFSET(CPostFX, m_TexelSizeId, 0x270);
    VALIDATE_OFFSET(CPostFX, m_ElapsedTimeId, 0x274);
    VALIDATE_OFFSET(CPostFX, m_AdaptTimeId, 0x278);
    VALIDATE_OFFSET(CPostFX, m_ToneMapParamsId, 0x27C);
    VALIDATE_OFFSET(CPostFX, field_406, 0x280);
    VALIDATE_OFFSET(CPostFX, m_NoiseParamsId, 0x284);
    VALIDATE_OFFSET(CPostFX, m_ColorCorrectId, 0x288);
    VALIDATE_OFFSET(CPostFX, m_ColorShiftId, 0x28C);
    VALIDATE_OFFSET(CPostFX, m_deSatContrastGammaId, 0x290);
    VALIDATE_OFFSET(CPostFX, m_AdaptedLumMinId, 0x294);
    VALIDATE_OFFSET(CPostFX, m_AdaptedLumMaxId, 0x298);
    VALIDATE_OFFSET(CPostFX, m_DOF_PROJId, 0x29C);
    VALIDATE_OFFSET(CPostFX, m_DOF_PARAMSId, 0x2A0);
    VALIDATE_OFFSET(CPostFX, m_DOF_BLURId, 0x2A4);
    VALIDATE_OFFSET(CPostFX, m_DofBlurWeightId, 0x2A8);
    VALIDATE_OFFSET(CPostFX, m_EAA_PARAMS2Id, 0x2AC);
    VALIDATE_OFFSET(CPostFX, m_MB_MATRIXId, 0x2B0);
    VALIDATE_OFFSET(CPostFX, m_gbufferTexture1Id, 0x2B4);
    VALIDATE_OFFSET(CPostFX, m_gbufferTexture2Id, 0x2B8);
    VALIDATE_OFFSET(CPostFX, m_gbufferTexture3Id, 0x2BC);
    VALIDATE_OFFSET(CPostFX, m_gbufferStencilTextureId, 0x2C0);
    VALIDATE_OFFSET(CPostFX, field_423, 0x2C4);
    VALIDATE_OFFSET(CPostFX, m_PPPDirectionalMotionBlurLengthId, 0x2C8);
    VALIDATE_OFFSET(CPostFX, m_GTACompositePostFxId, 0x2CC);
    VALIDATE_OFFSET(CPostFX, field_426, 0x2D0);
    VALIDATE_OFFSET(CPostFX, field_427, 0x2D4);
    VALIDATE_OFFSET(CPostFX, field_428, 0x2D8);
    VALIDATE_OFFSET(CPostFX, field_918, 0x2DC);
    VALIDATE_SIZE(CPostFX, 0x390);
}
