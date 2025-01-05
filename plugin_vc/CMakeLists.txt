set(PROJECT_NAME plugin_vc)

################################################################################
# Source groups
################################################################################
set(no_group_source_files
    "plugin_vc.h"
)
source_group("" FILES ${no_group_source_files})

set(..__hooking
    "../hooking/Hooking.Patterns.cpp"
    "../hooking/Hooking.Patterns.h"
)
source_group("..\\hooking" FILES ${..__hooking})

set(..__injector
    "../injector/assembly.hpp"
    "../injector/calling.hpp"
    "../injector/hooking.hpp"
    "../injector/injector.hpp"
    "../injector/utility.hpp"
)
source_group("..\\injector" FILES ${..__injector})

set(..__injector__gvm
    "../injector/gvm/gvm.hpp"
    "../injector/gvm/translator.hpp"
)
source_group("..\\injector\\gvm" FILES ${..__injector__gvm})

set(..__safetyhook
    "../safetyhook/safetyhook.cpp"
    "../safetyhook/safetyhook.hpp"
    "../safetyhook/Zydis.c"
)
source_group("..\\safetyhook" FILES ${..__safetyhook})

set(..__shared
    "../shared/ArgPicker.h"
    "../shared/Audio.cpp"
    "../shared/Audio.h"
    "../shared/Base.h"
    "../shared/Color.cpp"
    "../shared/Color.h"
    "../shared/common_sdk.cpp"
    "../shared/common_sdk.h"
    "../shared/DynAddress.cpp"
    "../shared/DynAddress.h"
    "../shared/Error.h"
    "../shared/EventList.h"
    "../shared/Events.cpp"
    "../shared/Events.h"
    "../shared/Extender.h"
    "../shared/GameVersion.cpp"
    "../shared/GameVersion.h"
    "../shared/GameVersionMessage.h"
    "../shared/Image.cpp"
    "../shared/Image.h"
    "../shared/Maths.h"
    "../shared/Other.cpp"
    "../shared/Other.h"
    "../shared/Patch.cpp"
    "../shared/Patch.h"
    "../shared/Pattern.cpp"
    "../shared/Pattern.h"
    "../shared/plugin.cpp"
    "../shared/plugin.h"
    "../shared/PluginBase.cpp"
    "../shared/PluginBase.h"
    "../shared/RefList.h"
    "../shared/RefListUtils.h"
    "../shared/RenderWare.h"
    "../shared/resource.h"
    "../shared/rpplugin.h"
    "../shared/SpriteLoader.cpp"
    "../shared/SpriteLoader.h"
    "../shared/StringUtils.cpp"
    "../shared/StringUtils.h"
    "../shared/TextLoader.cpp"
    "../shared/TextLoader.h"
    "../shared/Timer.cpp"
    "../shared/Timer.h"
    "../shared/VersionsMacro.h"
)
source_group("..\\shared" FILES ${..__shared})

set(..__shared__bass
    "../shared/bass/bass.h"
)
source_group("..\\shared\\bass" FILES ${..__shared__bass})

set(..__shared__comp
    "../shared/comp/PluginsCompatibility.cpp"
    "../shared/comp/PluginsCompatibility.h"
    "../shared/comp/PluginSupport.cpp"
    "../shared/comp/PluginSupport.h"
)
source_group("..\\shared\\comp" FILES ${..__shared__comp})

set(..__shared__comp__plugins
    "../shared/comp/plugins/LimitAdjusterSupport.cpp"
    "../shared/comp/plugins/LimitAdjusterSupport.h"
)
source_group("..\\shared\\comp\\plugins" FILES ${..__shared__comp__plugins})

set(..__shared__dxsdk
    "../shared/dxsdk/audiodefs.h"
    "../shared/dxsdk/comdecl.h"
    "../shared/dxsdk/D2D1.h"
    "../shared/dxsdk/D2D1Helper.h"
    "../shared/dxsdk/D2DBaseTypes.h"
    "../shared/dxsdk/D2Derr.h"
    "../shared/dxsdk/d3d.h"
    "../shared/dxsdk/D3D10.h"
    "../shared/dxsdk/D3D10_1.h"
    "../shared/dxsdk/D3D10_1shader.h"
    "../shared/dxsdk/D3D10effect.h"
    "../shared/dxsdk/d3d10misc.h"
    "../shared/dxsdk/d3d10sdklayers.h"
    "../shared/dxsdk/D3D10shader.h"
    "../shared/dxsdk/D3D11.h"
    "../shared/dxsdk/D3D11SDKLayers.h"
    "../shared/dxsdk/D3D11Shader.h"
    "../shared/dxsdk/d3d8.h"
    "../shared/dxsdk/d3d8caps.h"
    "../shared/dxsdk/d3d8types.h"
    "../shared/dxsdk/d3d9.h"
    "../shared/dxsdk/d3d9caps.h"
    "../shared/dxsdk/d3d9types.h"
    "../shared/dxsdk/d3dcaps.h"
    "../shared/dxsdk/D3Dcommon.h"
    "../shared/dxsdk/D3Dcompiler.h"
    "../shared/dxsdk/D3DCSX.h"
    "../shared/dxsdk/d3dres.h"
    "../shared/dxsdk/d3drm.h"
    "../shared/dxsdk/d3drmdef.h"
    "../shared/dxsdk/d3drmobj.h"
    "../shared/dxsdk/d3drmwin.h"
    "../shared/dxsdk/d3dtypes.h"
    "../shared/dxsdk/d3dutil.h"
    "../shared/dxsdk/d3dx.h"
    "../shared/dxsdk/D3DX10.h"
    "../shared/dxsdk/d3dx10async.h"
    "../shared/dxsdk/D3DX10core.h"
    "../shared/dxsdk/D3DX10math.h"
    "../shared/dxsdk/D3DX10mesh.h"
    "../shared/dxsdk/D3DX10tex.h"
    "../shared/dxsdk/D3DX11.h"
    "../shared/dxsdk/D3DX11async.h"
    "../shared/dxsdk/D3DX11core.h"
    "../shared/dxsdk/D3DX11tex.h"
    "../shared/dxsdk/d3dx8.h"
    "../shared/dxsdk/d3dx8core.h"
    "../shared/dxsdk/d3dx8effect.h"
    "../shared/dxsdk/d3dx8math.h"
    "../shared/dxsdk/d3dx8mesh.h"
    "../shared/dxsdk/d3dx8shape.h"
    "../shared/dxsdk/d3dx8tex.h"
    "../shared/dxsdk/d3dx9.h"
    "../shared/dxsdk/d3dx9anim.h"
    "../shared/dxsdk/d3dx9core.h"
    "../shared/dxsdk/d3dx9effect.h"
    "../shared/dxsdk/d3dx9math.h"
    "../shared/dxsdk/d3dx9mesh.h"
    "../shared/dxsdk/d3dx9shader.h"
    "../shared/dxsdk/d3dx9shape.h"
    "../shared/dxsdk/d3dx9tex.h"
    "../shared/dxsdk/d3dx9xof.h"
    "../shared/dxsdk/d3dxcore.h"
    "../shared/dxsdk/d3dxerr.h"
    "../shared/dxsdk/d3dxmath.h"
    "../shared/dxsdk/d3dxshapes.h"
    "../shared/dxsdk/d3dxsprite.h"
    "../shared/dxsdk/Dcommon.h"
    "../shared/dxsdk/dinput.h"
    "../shared/dxsdk/dinputd.h"
    "../shared/dxsdk/dsconf.h"
    "../shared/dxsdk/dsetup.h"
    "../shared/dxsdk/dsound.h"
    "../shared/dxsdk/DWrite.h"
    "../shared/dxsdk/dxdiag.h"
    "../shared/dxsdk/DxErr.h"
    "../shared/dxsdk/dxfile.h"
    "../shared/dxsdk/DXGI.h"
    "../shared/dxsdk/DXGIFormat.h"
    "../shared/dxsdk/DXGIType.h"
    "../shared/dxsdk/dxsdkver.h"
    "../shared/dxsdk/gameux.h"
    "../shared/dxsdk/PIXPlugin.h"
    "../shared/dxsdk/rmxfguid.h"
    "../shared/dxsdk/rmxftmpl.h"
    "../shared/dxsdk/rpcsal.h"
    "../shared/dxsdk/X3DAudio.h"
    "../shared/dxsdk/xact3.h"
    "../shared/dxsdk/xact3d3.h"
    "../shared/dxsdk/xact3wb.h"
    "../shared/dxsdk/XAPO.h"
    "../shared/dxsdk/XAPOBase.h"
    "../shared/dxsdk/XAPOFX.h"
    "../shared/dxsdk/XAudio2.h"
    "../shared/dxsdk/XAudio2fx.h"
    "../shared/dxsdk/XDSP.h"
    "../shared/dxsdk/XInput.h"
    "../shared/dxsdk/xma2defs.h"
    "../shared/dxsdk/xnamath.h"
)
source_group("..\\shared\\dxsdk" FILES ${..__shared__dxsdk})

set(..__shared__extender
    "../shared/extender/ObjectExtender.h"
    "../shared/extender/PedExtender.h"
    "../shared/extender/VehicleExtender.h"
)
source_group("..\\shared\\extender" FILES ${..__shared__extender})

set(..__shared__extensions
    "../shared/extensions/Config.cpp"
    "../shared/extensions/Config.h"
    "../shared/extensions/DynamicResource.cpp"
    "../shared/extensions/DynamicResource.h"
    "../shared/extensions/FontPrint.cpp"
    "../shared/extensions/FontPrint.h"
    "../shared/extensions/KeyCheck.cpp"
    "../shared/extensions/KeyCheck.h"
    "../shared/extensions/Paths.cpp"
    "../shared/extensions/Paths.h"
    "../shared/extensions/PoolIterator.h"
    "../shared/extensions/Screen.cpp"
    "../shared/extensions/Screen.h"
    "../shared/extensions/ScriptCommands.cpp"
    "../shared/extensions/ScriptCommands.h"
    "../shared/extensions/Shader.cpp"
    "../shared/extensions/Shader.h"
)
source_group("..\\shared\\extensions" FILES ${..__shared__extensions})

set(..__shared__extensions__scripting
    "../shared/extensions/scripting/ScriptCommandNames.h"
)
source_group("..\\shared\\extensions\\scripting" FILES ${..__shared__extensions__scripting})

set(..__shared__game
    "../shared/game/CompressedVector.cpp"
    "../shared/game/CompressedVector.h"
    "../shared/game/CompressedVector2D.cpp"
    "../shared/game/CompressedVector2D.h"
    "../shared/game/CRGBA.cpp"
    "../shared/game/CRGBA.h"
)
source_group("..\\shared\\game" FILES ${..__shared__game})

set(..__shared__rwd3d9
    "../shared/rwd3d9/rwd3d9.h"
)
source_group("..\\shared\\rwd3d9" FILES ${..__shared__rwd3d9})

set(game_vc
    "game_vc/AnimAssociationData.h"
    "game_vc/AnimBlendFrameData.h"
    "game_vc/C3dMarker.cpp"
    "game_vc/C3dMarker.h"
    "game_vc/C3dMarkers.cpp"
    "game_vc/C3dMarkers.h"
    "game_vc/C_PcSave.cpp"
    "game_vc/C_PcSave.h"
    "game_vc/CAnimationStyleDescriptor.h"
    "game_vc/CAnimBlendAssocGroup.h"
    "game_vc/CAnimBlendAssociation.cpp"
    "game_vc/CAnimBlendAssociation.h"
    "game_vc/CAnimBlendClumpData.h"
    "game_vc/CAnimBlock.h"
    "game_vc/CAnimManager.cpp"
    "game_vc/CAnimManager.h"
    "game_vc/cAudioManager.cpp"
    "game_vc/cAudioManager.h"
    "game_vc/cAudioScriptObject.cpp"
    "game_vc/cAudioScriptObject.h"
    "game_vc/CAutomobile.cpp"
    "game_vc/CAutomobile.h"
    "game_vc/CAutoPilot.h"
    "game_vc/CBaseModelInfo.cpp"
    "game_vc/CBaseModelInfo.h"
    "game_vc/CBike.cpp"
    "game_vc/CBike.h"
    "game_vc/CBoat.cpp"
    "game_vc/CBoat.h"
    "game_vc/CBox.cpp"
    "game_vc/CBox.h"
    "game_vc/CBrightLights.cpp"
    "game_vc/CBrightLights.h"
    "game_vc/CBuilding.cpp"
    "game_vc/CBuilding.h"
    "game_vc/CBulletInfo.cpp"
    "game_vc/CBulletInfo.h"
    "game_vc/CBulletTrace.cpp"
    "game_vc/CBulletTrace.h"
    "game_vc/CBulletTraces.cpp"
    "game_vc/CBulletTraces.h"
    "game_vc/cBuoyancy.cpp"
    "game_vc/cBuoyancy.h"
    "game_vc/CCam.h"
    "game_vc/CCamera.cpp"
    "game_vc/CCamera.h"
    "game_vc/CCarAI.cpp"
    "game_vc/CCarAI.h"
    "game_vc/CCarCtrl.cpp"
    "game_vc/CCarCtrl.h"
    "game_vc/CCarGenerator.cpp"
    "game_vc/CCarGenerator.h"
    "game_vc/CCivilianPed.cpp"
    "game_vc/CCivilianPed.h"
    "game_vc/CClock.cpp"
    "game_vc/CClock.h"
    "game_vc/CClouds.cpp"
    "game_vc/CClouds.h"
    "game_vc/CClumpModelInfo.cpp"
    "game_vc/CClumpModelInfo.h"
    "game_vc/CColBox.cpp"
    "game_vc/CColBox.h"
    "game_vc/CColLine.cpp"
    "game_vc/CColLine.h"
    "game_vc/CColModel.cpp"
    "game_vc/CColModel.h"
    "game_vc/CColPoint.cpp"
    "game_vc/CColPoint.h"
    "game_vc/CColSphere.cpp"
    "game_vc/CColSphere.h"
    "game_vc/CControllerState.cpp"
    "game_vc/CControllerState.h"
    "game_vc/CCopPed.cpp"
    "game_vc/CCopPed.h"
    "game_vc/CCoronas.cpp"
    "game_vc/CCoronas.h"
    "game_vc/CCrane.cpp"
    "game_vc/CCrane.h"
    "game_vc/CCranes.cpp"
    "game_vc/CCranes.h"
    "game_vc/CCurrentVehicle.h"
    "game_vc/CCutsceneMgr.cpp"
    "game_vc/CCutsceneMgr.h"
    "game_vc/CCutsceneObject.cpp"
    "game_vc/CCutsceneObject.h"
    "game_vc/CCutsceneShadow.cpp"
    "game_vc/CCutsceneShadow.h"
    "game_vc/CDamageManager.cpp"
    "game_vc/CDamageManager.h"
    "game_vc/CDarkel.cpp"
    "game_vc/CDarkel.h"
    "game_vc/CDirectory.cpp"
    "game_vc/CDirectory.h"
    "game_vc/cDMAudio.cpp"
    "game_vc/cDMAudio.h"
    "game_vc/CDoor.cpp"
    "game_vc/CDoor.h"
    "game_vc/CDraw.cpp"
    "game_vc/CDraw.h"
    "game_vc/CDummy.cpp"
    "game_vc/CDummy.h"
    "game_vc/CDummyObject.cpp"
    "game_vc/CDummyObject.h"
    "game_vc/CEmergencyPed.cpp"
    "game_vc/CEmergencyPed.h"
    "game_vc/CEntity.cpp"
    "game_vc/CEntity.h"
    "game_vc/CEntryInfoList.cpp"
    "game_vc/CEntryInfoList.h"
    "game_vc/CEntryInfoNode.h"
    "game_vc/CEscalators.cpp"
    "game_vc/CEscalators.h"
    "game_vc/CFileLoader.cpp"
    "game_vc/CFileLoader.h"
    "game_vc/CFileMgr.cpp"
    "game_vc/CFileMgr.h"
    "game_vc/CFire.cpp"
    "game_vc/CFire.h"
    "game_vc/CFireManager.cpp"
    "game_vc/CFireManager.h"
    "game_vc/CFont.cpp"
    "game_vc/CFont.h"
    "game_vc/CFontDetails.cpp"
    "game_vc/CFontDetails.h"
    "game_vc/CGame.cpp"
    "game_vc/CGame.h"
    "game_vc/CGameLogic.cpp"
    "game_vc/CGameLogic.h"
    "game_vc/CGangs.cpp"
    "game_vc/CGangs.h"
    "game_vc/CGarage.h"
    "game_vc/CGeneral.cpp"
    "game_vc/CGeneral.h"
    "game_vc/cHandlingDataMgr.cpp"
    "game_vc/cHandlingDataMgr.h"
    "game_vc/CHeli.cpp"
    "game_vc/CHeli.h"
    "game_vc/CHud.cpp"
    "game_vc/CHud.h"
    "game_vc/CIniFile.cpp"
    "game_vc/CIniFile.h"
    "game_vc/CKeyboardState.cpp"
    "game_vc/CKeyboardState.h"
    "game_vc/CLink.h"
    "game_vc/CLinkList.h"
    "game_vc/CMatrix.cpp"
    "game_vc/CMatrix.h"
    "game_vc/CMenuManager.cpp"
    "game_vc/CMenuManager.h"
    "game_vc/CMessages.cpp"
    "game_vc/CMessages.h"
    "game_vc/CModelInfo.cpp"
    "game_vc/CModelInfo.h"
    "game_vc/CMotionBlurStreaks.cpp"
    "game_vc/CMotionBlurStreaks.h"
    "game_vc/CMouseControllerState.h"
    "game_vc/CMousePointerStateHelper.cpp"
    "game_vc/CMousePointerStateHelper.h"
    "game_vc/CMovie.cpp"
    "game_vc/CMovie.h"
    "game_vc/CObject.cpp"
    "game_vc/CObject.h"
    "game_vc/COcclusion.cpp"
    "game_vc/COcclusion.h"
    "game_vc/common.cpp"
    "game_vc/common.h"
    "game_vc/COneSheet.h"
    "game_vc/COnscreenTimer.cpp"
    "game_vc/COnscreenTimer.h"
    "game_vc/CPad.cpp"
    "game_vc/CPad.h"
    "game_vc/CPager.cpp"
    "game_vc/CPager.h"
    "game_vc/CParticle.cpp"
    "game_vc/CParticle.h"
    "game_vc/cParticleSystemMgr.cpp"
    "game_vc/cParticleSystemMgr.h"
    "game_vc/CPathFind.cpp"
    "game_vc/CPathFind.h"
    "game_vc/CPathNode.cpp"
    "game_vc/CPathNode.h"
    "game_vc/CPed.cpp"
    "game_vc/CPed.h"
    "game_vc/CPedAtmAttractor.cpp"
    "game_vc/CPedAtmAttractor.h"
    "game_vc/CPedAttractor.cpp"
    "game_vc/CPedAttractor.h"
    "game_vc/CPedAttractorManager.cpp"
    "game_vc/CPedAttractorManager.h"
    "game_vc/CPedIceCreamVanAttractor.cpp"
    "game_vc/CPedIceCreamVanAttractor.h"
    "game_vc/CPedIK.cpp"
    "game_vc/CPedIK.h"
    "game_vc/CPedModelInfo.cpp"
    "game_vc/CPedModelInfo.h"
    "game_vc/CPedPizzaAttractor.cpp"
    "game_vc/CPedPizzaAttractor.h"
    "game_vc/CPedPlacement.cpp"
    "game_vc/CPedPlacement.h"
    "game_vc/CPedSeatAttractor.cpp"
    "game_vc/CPedSeatAttractor.h"
    "game_vc/CPedShelterAttractor.cpp"
    "game_vc/CPedShelterAttractor.h"
    "game_vc/CPedStats.cpp"
    "game_vc/CPedStats.h"
    "game_vc/CPedStopAttractor.cpp"
    "game_vc/CPedStopAttractor.h"
    "game_vc/CPedType.cpp"
    "game_vc/CPedType.h"
    "game_vc/CPhone.cpp"
    "game_vc/CPhone.h"
    "game_vc/CPhoneInfo.cpp"
    "game_vc/CPhoneInfo.h"
    "game_vc/CPhysical.cpp"
    "game_vc/CPhysical.h"
    "game_vc/CPickups.cpp"
    "game_vc/CPickups.h"
    "game_vc/CPlaceable.cpp"
    "game_vc/CPlaceable.h"
    "game_vc/CPlane.cpp"
    "game_vc/CPlane.h"
    "game_vc/CPlayerInfo.cpp"
    "game_vc/CPlayerInfo.h"
    "game_vc/CPlayerPed.cpp"
    "game_vc/CPlayerPed.h"
    "game_vc/CPlayerSkin.cpp"
    "game_vc/CPlayerSkin.h"
    "game_vc/CPointLight.cpp"
    "game_vc/CPointLight.h"
    "game_vc/CPointLights.cpp"
    "game_vc/CPointLights.h"
    "game_vc/CPool.h"
    "game_vc/CPools.cpp"
    "game_vc/CPools.h"
    "game_vc/CPopulation.cpp"
    "game_vc/CPopulation.h"
    "game_vc/CProjectile.cpp"
    "game_vc/CProjectile.h"
    "game_vc/CProjectileInfo.cpp"
    "game_vc/CProjectileInfo.h"
    "game_vc/CPtrList.cpp"
    "game_vc/CPtrList.h"
    "game_vc/CPtrNode.h"
    "game_vc/CQuaternion.cpp"
    "game_vc/CQuaternion.h"
    "game_vc/CRadar.cpp"
    "game_vc/CRadar.h"
    "game_vc/CRect.h"
    "game_vc/CRegisteredMotionBlurStreak.cpp"
    "game_vc/CRegisteredMotionBlurStreak.h"
    "game_vc/CRenderer.cpp"
    "game_vc/CRenderer.h"
    "game_vc/CReplay.cpp"
    "game_vc/CReplay.h"
    "game_vc/CRestart.cpp"
    "game_vc/CRestart.h"
    "game_vc/CRouteNode.cpp"
    "game_vc/CRouteNode.h"
    "game_vc/CRubbish.cpp"
    "game_vc/CRubbish.h"
    "game_vc/CRunningScript.cpp"
    "game_vc/CRunningScript.h"
    "game_vc/cSampleManager.cpp"
    "game_vc/cSampleManager.h"
    "game_vc/CScene.cpp"
    "game_vc/CScene.h"
    "game_vc/CSceneEdit.cpp"
    "game_vc/CSceneEdit.h"
    "game_vc/CSector.h"
    "game_vc/CShadowCamera.cpp"
    "game_vc/CShadowCamera.h"
    "game_vc/CShinyTexts.cpp"
    "game_vc/CShinyTexts.h"
    "game_vc/CShotInfo.cpp"
    "game_vc/CShotInfo.h"
    "game_vc/CSimpleModelInfo.cpp"
    "game_vc/CSimpleModelInfo.h"
    "game_vc/CSphere.cpp"
    "game_vc/CSphere.h"
    "game_vc/CSprite.cpp"
    "game_vc/CSprite.h"
    "game_vc/CSprite2d.cpp"
    "game_vc/CSprite2d.h"
    "game_vc/CStats.cpp"
    "game_vc/CStats.h"
    "game_vc/CStinger.cpp"
    "game_vc/CStinger.h"
    "game_vc/CStore.h"
    "game_vc/CStoredCollPoly.h"
    "game_vc/CStreaming.cpp"
    "game_vc/CStreaming.h"
    "game_vc/CStreamingInfo.h"
    "game_vc/CText.cpp"
    "game_vc/CText.h"
    "game_vc/CTheScripts.cpp"
    "game_vc/CTheScripts.h"
    "game_vc/CTheZones.cpp"
    "game_vc/CTheZones.h"
    "game_vc/CTimeCycle.cpp"
    "game_vc/CTimeCycle.h"
    "game_vc/CTimeModelInfo.cpp"
    "game_vc/CTimeModelInfo.h"
    "game_vc/CTimer.cpp"
    "game_vc/CTimer.h"
    "game_vc/CTrafficLights.cpp"
    "game_vc/CTrafficLights.h"
    "game_vc/CTrain.cpp"
    "game_vc/CTrain.h"
    "game_vc/cTransmission.cpp"
    "game_vc/cTransmission.h"
    "game_vc/CTreadable.cpp"
    "game_vc/CTreadable.h"
    "game_vc/CTxdStore.cpp"
    "game_vc/CTxdStore.h"
    "game_vc/CUserDisplay.cpp"
    "game_vc/CUserDisplay.h"
    "game_vc/CVector.cpp"
    "game_vc/CVector.h"
    "game_vc/CVector2D.h"
    "game_vc/CVehicle.cpp"
    "game_vc/CVehicle.h"
    "game_vc/CVehicleModelInfo.cpp"
    "game_vc/CVehicleModelInfo.h"
    "game_vc/CVisibilityPlugins.cpp"
    "game_vc/CVisibilityPlugins.h"
    "game_vc/CWanted.cpp"
    "game_vc/CWanted.h"
    "game_vc/CWaterCannons.cpp"
    "game_vc/CWaterCannons.h"
    "game_vc/CWeapon.cpp"
    "game_vc/CWeapon.h"
    "game_vc/CWeaponEffects.cpp"
    "game_vc/CWeaponEffects.h"
    "game_vc/CWeaponInfo.cpp"
    "game_vc/CWeaponInfo.h"
    "game_vc/CWeaponModelInfo.cpp"
    "game_vc/CWeaponModelInfo.h"
    "game_vc/CWeather.cpp"
    "game_vc/CWeather.h"
    "game_vc/CWheel.h"
    "game_vc/CWindModifiers.cpp"
    "game_vc/CWindModifiers.h"
    "game_vc/CWorld.cpp"
    "game_vc/CWorld.h"
    "game_vc/CZone.cpp"
    "game_vc/CZone.h"
    "game_vc/CZoneInfo.cpp"
    "game_vc/CZoneInfo.h"
    "game_vc/DRAW_FADE_STATE.h"
    "game_vc/eAnimations.h"
    "game_vc/eAnimBlendCallbackType.h"
    "game_vc/eCarMission.h"
    "game_vc/eCopType.h"
    "game_vc/eCoronaType.h"
    "game_vc/eCrimeType.h"
    "game_vc/eEntityStatus.h"
    "game_vc/eEventType.h"
    "game_vc/eExplosionType.h"
    "game_vc/eFormation.h"
    "game_vc/eGangType.h"
    "game_vc/eLevelName.h"
    "game_vc/eObjective.h"
    "game_vc/eParticleObjectType.h"
    "game_vc/ePedAction.h"
    "game_vc/ePedModel.h"
    "game_vc/ePedPieceTypes.h"
    "game_vc/ePedStates.h"
    "game_vc/ePedStats.h"
    "game_vc/ePedType.h"
    "game_vc/ePhoneState.h"
    "game_vc/ePickupType.h"
    "game_vc/eRadioStations.h"
    "game_vc/eSceneCommands.h"
    "game_vc/eScriptCommands.h"
    "game_vc/eShadowType.h"
    "game_vc/eVehicleFlags.h"
    "game_vc/eVehicleModel.h"
    "game_vc/eWaitState.h"
    "game_vc/eWeaponFire.h"
    "game_vc/eWeaponModel.h"
    "game_vc/eWeaponType.h"
    "game_vc/eWeather.h"
    "game_vc/NodeName.cpp"
    "game_vc/NodeName.h"
    "game_vc/RenderWare.cpp"
    "game_vc/RwObjectNameIdAssocation.h"
    "game_vc/tBikeHandlingData.h"
    "game_vc/tBoatHandlingData.h"
    "game_vc/tCamPathSplines.h"
    "game_vc/tFlyingHandlingData.h"
    "game_vc/tHandlingData.h"
    "game_vc/tParticleSystemData.h"
    "game_vc/tParticleType.h"
    "game_vc/tQueuedMode.h"
    "game_vc/tTransmissionGear.h"
    "game_vc/TxdDef.h"
)
source_group("game_vc" FILES ${game_vc})

set(game_vc__meta
    "game_vc/meta/meta.C3dMarker.h"
    "game_vc/meta/meta.C_PcSave.h"
    "game_vc/meta/meta.cAudioScriptObject.h"
    "game_vc/meta/meta.CBulletTrace.h"
    "game_vc/meta/meta.CBulletTraces.h"
    "game_vc/meta/meta.CCarAI.h"
    "game_vc/meta/meta.CClock.h"
    "game_vc/meta/meta.CControllerState.h"
    "game_vc/meta/meta.CCrane.h"
    "game_vc/meta/meta.CCranes.h"
    "game_vc/meta/meta.CCutsceneShadow.h"
    "game_vc/meta/meta.CDirectory.h"
    "game_vc/meta/meta.CDraw.h"
    "game_vc/meta/meta.CFileMgr.h"
    "game_vc/meta/meta.CGame.h"
    "game_vc/meta/meta.CGeneral.h"
    "game_vc/meta/meta.CHud.h"
    "game_vc/meta/meta.CKeyboardState.h"
    "game_vc/meta/meta.CMousePointerStateHelper.h"
    "game_vc/meta/meta.COcclusion.h"
    "game_vc/meta/meta.CPad.h"
    "game_vc/meta/meta.CPager.h"
    "game_vc/meta/meta.CParticle.h"
    "game_vc/meta/meta.cParticleSystemMgr.h"
    "game_vc/meta/meta.CPedAtmAttractor.h"
    "game_vc/meta/meta.CPedAttractor.h"
    "game_vc/meta/meta.CPedAttractorManager.h"
    "game_vc/meta/meta.CPedIceCreamVanAttractor.h"
    "game_vc/meta/meta.CPedPizzaAttractor.h"
    "game_vc/meta/meta.CPedSeatAttractor.h"
    "game_vc/meta/meta.CPedShelterAttractor.h"
    "game_vc/meta/meta.CPedStopAttractor.h"
    "game_vc/meta/meta.CPhone.h"
    "game_vc/meta/meta.CPhoneInfo.h"
    "game_vc/meta/meta.CPointLight.h"
    "game_vc/meta/meta.CPointLights.h"
    "game_vc/meta/meta.CPools.h"
    "game_vc/meta/meta.CRouteNode.h"
    "game_vc/meta/meta.CRubbish.h"
    "game_vc/meta/meta.CShadowCamera.h"
    "game_vc/meta/meta.CStreaming.h"
    "game_vc/meta/meta.CTheScripts.h"
    "game_vc/meta/meta.CTimeCycle.h"
    "game_vc/meta/meta.CTimer.h"
    "game_vc/meta/meta.CTrafficLights.h"
    "game_vc/meta/meta.CWindModifiers.h"
    "game_vc/meta/meta.NodeName.h"
)
source_group("game_vc\\meta" FILES ${game_vc__meta})

set(game_vc__rw
    "game_vc/rw/rpanisot.h"
    "game_vc/rw/rpcollis.h"
    "game_vc/rw/rpcriter.h"
    "game_vc/rw/rpdbgerr.h"
    "game_vc/rw/rpdmorph.h"
    "game_vc/rw/rperror.h"
    "game_vc/rw/rphanim.h"
    "game_vc/rw/rplodatm.h"
    "game_vc/rw/rplogo.h"
    "game_vc/rw/rpltmap.h"
    "game_vc/rw/rpmatfx.h"
    "game_vc/rw/rpmipkl.h"
    "game_vc/rw/rpmorph.h"
    "game_vc/rw/rppatch.h"
    "game_vc/rw/rpprtstd.h"
    "game_vc/rw/rpptank.h"
    "game_vc/rw/rppvs.h"
    "game_vc/rw/rprandom.h"
    "game_vc/rw/rpskin.h"
    "game_vc/rw/rpspline.h"
    "game_vc/rw/rpstereo.h"
    "game_vc/rw/rpusrdat.h"
    "game_vc/rw/rpworld.h"
    "game_vc/rw/rt2d.h"
    "game_vc/rw/rt2danim.h"
    "game_vc/rw/rtanim.h"
    "game_vc/rw/rtbary.h"
    "game_vc/rw/rtbezpat.h"
    "game_vc/rw/rtbmp.h"
    "game_vc/rw/rtcharse.h"
    "game_vc/rw/rtimport.h"
    "game_vc/rw/rtintel.h"
    "game_vc/rw/rtintsec.h"
    "game_vc/rw/rtltmap.h"
    "game_vc/rw/rtmipk.h"
    "game_vc/rw/rtpick.h"
    "game_vc/rw/rtpitexd.h"
    "game_vc/rw/rtpng.h"
    "game_vc/rw/rtquat.h"
    "game_vc/rw/rtras.h"
    "game_vc/rw/rtray.h"
    "game_vc/rw/rtslerp.h"
    "game_vc/rw/rtsplpvs.h"
    "game_vc/rw/rttiff.h"
    "game_vc/rw/rttilerd.h"
    "game_vc/rw/rttoc.h"
    "game_vc/rw/rtvcat.h"
    "game_vc/rw/rtworld.h"
    "game_vc/rw/rwcore.h"
    "game_vc/rw/rwplcore.h"
    "game_vc/rw/skeleton.h"
)
source_group("game_vc\\rw" FILES ${game_vc__rw})

set(ALL_FILES
    ${no_group_source_files}
    ${..__hooking}
    ${..__injector}
    ${..__injector__gvm}
    ${..__safetyhook}
    ${..__shared}
    ${..__shared__bass}
    ${..__shared__comp}
    ${..__shared__comp__plugins}
    ${..__shared__dxsdk}
    ${..__shared__extender}
    ${..__shared__extensions}
    ${..__shared__extensions__scripting}
    ${..__shared__game}
    ${..__shared__rwd3d9}
    ${game_vc}
    ${game_vc__meta}
    ${game_vc__rw}
)

################################################################################
# Target
################################################################################
add_library(${PROJECT_NAME} STATIC ${ALL_FILES})

use_props(${PROJECT_NAME} "${CMAKE_CONFIGURATION_TYPES}" "${DEFAULT_CXX_PROPS}")
set(ROOT_NAMESPACE plugin_vc)

set_target_properties(${PROJECT_NAME} PROPERTIES
    VS_GLOBAL_KEYWORD "Win32Proj"
)
################################################################################
# Target name
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Mixed Platforms")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_RELEASE "plugin_vc"
        TARGET_NAME_ZDEBUG  "plugin_vc_d"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_RELEASE "plugin_vc"
        TARGET_NAME_ZDEBUG  "plugin_vc_d"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_RELEASE "plugin_vc"
        TARGET_NAME_ZDEBUG  "plugin_vc_d"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_RELEASE "plugin_vc"
        TARGET_NAME_ZDEBUG  "plugin_vc_d"
    )
endif()
################################################################################
# Output directory
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Mixed Platforms")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        OUTPUT_DIRECTORY_RELEASE "$ENV{PLUGIN_SDK_DIR}/output/lib/"
        OUTPUT_DIRECTORY_ZDEBUG  "$ENV{PLUGIN_SDK_DIR}/output/lib/"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        OUTPUT_DIRECTORY_RELEASE "$ENV{PLUGIN_SDK_DIR}/output/lib/"
        OUTPUT_DIRECTORY_ZDEBUG  "$ENV{PLUGIN_SDK_DIR}/output/lib/"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        OUTPUT_DIRECTORY_RELEASE "$ENV{PLUGIN_SDK_DIR}/output/lib/"
        OUTPUT_DIRECTORY_ZDEBUG  "$ENV{PLUGIN_SDK_DIR}/output/lib/"
    )
endif()
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Mixed Platforms")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        INTERPROCEDURAL_OPTIMIZATION_RELEASE "TRUE"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        INTERPROCEDURAL_OPTIMIZATION_RELEASE "TRUE"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        INTERPROCEDURAL_OPTIMIZATION_RELEASE "TRUE"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        INTERPROCEDURAL_OPTIMIZATION_RELEASE "TRUE"
    )
endif()
################################################################################
# MSVC runtime library
################################################################################
get_property(MSVC_RUNTIME_LIBRARY_DEFAULT TARGET ${PROJECT_NAME} PROPERTY MSVC_RUNTIME_LIBRARY)
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Mixed Platforms")
    string(CONCAT "MSVC_RUNTIME_LIBRARY_STR"
        $<$<CONFIG:Release>:
            MultiThreaded
        >
        $<$<CONFIG:zDebug>:
            MultiThreadedDebug
        >
        $<$<NOT:$<OR:$<CONFIG:Release>,$<CONFIG:zDebug>>>:${MSVC_RUNTIME_LIBRARY_DEFAULT}>
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    string(CONCAT "MSVC_RUNTIME_LIBRARY_STR"
        $<$<CONFIG:Release>:
            MultiThreaded
        >
        $<$<CONFIG:zDebug>:
            MultiThreadedDebug
        >
        $<$<NOT:$<OR:$<CONFIG:Release>,$<CONFIG:zDebug>>>:${MSVC_RUNTIME_LIBRARY_DEFAULT}>
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    string(CONCAT "MSVC_RUNTIME_LIBRARY_STR"
        $<$<CONFIG:Release>:
            MultiThreaded
        >
        $<$<CONFIG:zDebug>:
            MultiThreadedDebug
        >
        $<$<NOT:$<OR:$<CONFIG:Release>,$<CONFIG:zDebug>>>:${MSVC_RUNTIME_LIBRARY_DEFAULT}>
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    string(CONCAT "MSVC_RUNTIME_LIBRARY_STR"
        $<$<CONFIG:Release>:
            MultiThreaded
        >
        $<$<CONFIG:zDebug>:
            MultiThreadedDebug
        >
        $<$<NOT:$<OR:$<CONFIG:Release>,$<CONFIG:zDebug>>>:${MSVC_RUNTIME_LIBRARY_DEFAULT}>
    )
endif()
set_target_properties(${PROJECT_NAME} PROPERTIES MSVC_RUNTIME_LIBRARY ${MSVC_RUNTIME_LIBRARY_STR})

################################################################################
# Include directories
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Mixed Platforms")
    target_include_directories(${PROJECT_NAME} PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/.;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_vc;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_vc/rw;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared/game;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../safetyhook"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    target_include_directories(${PROJECT_NAME} PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/.;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_vc;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_vc/rw;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared/game;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../safetyhook"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    target_include_directories(${PROJECT_NAME} PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/.;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_vc;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_vc/rw;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared/game;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../safetyhook"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    target_include_directories(${PROJECT_NAME} PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/.;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_vc;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_vc/rw;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared/game;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../safetyhook"
    )
endif()

################################################################################
# Compile definitions
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Mixed Platforms")
    target_compile_definitions(${PROJECT_NAME} PRIVATE
        "_CRT_SECURE_NO_WARNINGS;"
        "_CRT_NON_CONFORMING_SWPRINTFS;"
        "_SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING;"
        "_DX9_SDK_INSTALLED;"
        "GTAVC;"
        "PLUGIN_SGV_10EN;"
        "RW;"
        "_MBCS"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    target_compile_definitions(${PROJECT_NAME} PRIVATE
        "_CRT_SECURE_NO_WARNINGS;"
        "_CRT_NON_CONFORMING_SWPRINTFS;"
        "_SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING;"
        "_DX9_SDK_INSTALLED;"
        "GTAVC;"
        "PLUGIN_SGV_10EN;"
        "RW;"
        "_MBCS"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    target_compile_definitions(${PROJECT_NAME} PRIVATE
        "_CRT_SECURE_NO_WARNINGS;"
        "_CRT_NON_CONFORMING_SWPRINTFS;"
        "_SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING;"
        "_DX9_SDK_INSTALLED;"
        "GTAVC;"
        "PLUGIN_SGV_10EN;"
        "RW;"
        "_MBCS"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    target_compile_definitions(${PROJECT_NAME} PRIVATE
        "_CRT_SECURE_NO_WARNINGS;"
        "_CRT_NON_CONFORMING_SWPRINTFS;"
        "_SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING;"
        "_DX9_SDK_INSTALLED;"
        "GTAVC;"
        "PLUGIN_SGV_10EN;"
        "RW;"
        "_MBCS"
    )
endif()

################################################################################
# Compile and link options
################################################################################
if(MSVC)
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Mixed Platforms")
        target_compile_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Release>:
                /Gm-;
                /Ox;
                /Oi;
                /GF;
                /Gy;
                ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT}
            >
            $<$<CONFIG:zDebug>:
                /Od;
                /ZI
            >
            /std:c++latest;
            /W3;
            /wd4073;
            /sdl-;
            ${DEFAULT_CXX_EXCEPTION_HANDLING};
            /Y-
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
        target_compile_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Release>:
                /Gm-;
                /Ox;
                /Oi;
                /GF;
                /Gy;
                ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT}
            >
            $<$<CONFIG:zDebug>:
                /Od;
                /ZI
            >
            /std:c++latest;
            /W3;
            /wd4073;
            /sdl-;
            ${DEFAULT_CXX_EXCEPTION_HANDLING};
            /Y-
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        target_compile_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Release>:
                /Gm-;
                /Ox;
                /Oi;
                /GF;
                /Gy;
                ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT}
            >
            $<$<CONFIG:zDebug>:
                /Od;
                /Zi
            >
            /std:c++latest;
            /W3;
            /wd4073;
            /sdl-;
            ${DEFAULT_CXX_EXCEPTION_HANDLING};
            /Y-
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        target_compile_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Release>:
                /Gm-;
                /Ox;
                /Oi;
                /GF;
                /Gy;
                ${DEFAULT_CXX_DEBUG_INFORMATION_FORMAT}
            >
            $<$<CONFIG:zDebug>:
                /Od;
                /ZI
            >
            /std:c++latest;
            /W3;
            /wd4073;
            /sdl-;
            ${DEFAULT_CXX_EXCEPTION_HANDLING};
            /Y-
        )
    endif()
    if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Mixed Platforms")
        target_link_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Release>:
                /OPT:REF;
                /OPT:ICF
            >
            /MACHINE:X86;
            /SUBSYSTEM:WINDOWS
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
        target_link_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Release>:
                /OPT:REF;
                /OPT:ICF
            >
            /MACHINE:X86;
            /SUBSYSTEM:WINDOWS
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
        target_link_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Release>:
                /OPT:REF;
                /OPT:ICF
            >
            /MACHINE:X86;
            /SUBSYSTEM:WINDOWS
        )
    elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
        target_link_options(${PROJECT_NAME} PRIVATE
            $<$<CONFIG:Release>:
                /OPT:REF;
                /OPT:ICF
            >
            /MACHINE:X86;
            /SUBSYSTEM:WINDOWS
        )
    endif()
endif()

