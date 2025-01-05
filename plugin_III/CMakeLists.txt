set(PROJECT_NAME plugin_iii)

################################################################################
# Source groups
################################################################################
set(no_group_source_files
    "plugin_III.h"
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

set(game_III
    "game_III/AnimBlendFrameData.h"
    "game_III/C2dEffect.cpp"
    "game_III/C2dEffect.h"
    "game_III/C2deffectsModelInfo.cpp"
    "game_III/C2deffectsModelInfo.h"
    "game_III/C3dMarker.cpp"
    "game_III/C3dMarker.h"
    "game_III/C3dMarkers.cpp"
    "game_III/C3dMarkers.h"
    "game_III/C_PcSave.cpp"
    "game_III/C_PcSave.h"
    "game_III/CAccident.cpp"
    "game_III/CAccident.h"
    "game_III/CAccidentManager.cpp"
    "game_III/CAccidentManager.h"
    "game_III/CAnimationStyleDescriptor.h"
    "game_III/CAnimBlendAssocGroup.cpp"
    "game_III/CAnimBlendAssocGroup.h"
    "game_III/CAnimBlendAssociation.cpp"
    "game_III/CAnimBlendAssociation.h"
    "game_III/CAnimBlendClumpData.cpp"
    "game_III/CAnimBlendClumpData.h"
    "game_III/CAnimBlendHierarchy.cpp"
    "game_III/CAnimBlendHierarchy.h"
    "game_III/CAnimBlendLink.h"
    "game_III/CAnimBlendNode.cpp"
    "game_III/CAnimBlendNode.h"
    "game_III/CAnimBlendSequence.cpp"
    "game_III/CAnimBlendSequence.h"
    "game_III/CAnimBlock.h"
    "game_III/CAnimManager.cpp"
    "game_III/CAnimManager.h"
    "game_III/CAntenna.cpp"
    "game_III/CAntenna.h"
    "game_III/CAntennas.cpp"
    "game_III/CAntennas.h"
    "game_III/cAudioCollision.cpp"
    "game_III/cAudioCollision.h"
    "game_III/cAudioCollisionManager.cpp"
    "game_III/cAudioCollisionManager.h"
    "game_III/CAudioHydrant.cpp"
    "game_III/CAudioHydrant.h"
    "game_III/cAudioManager.cpp"
    "game_III/cAudioManager.h"
    "game_III/cAudioScriptObject.cpp"
    "game_III/cAudioScriptObject.h"
    "game_III/CAutomobile.cpp"
    "game_III/CAutomobile.h"
    "game_III/CAutoPilot.cpp"
    "game_III/CAutoPilot.h"
    "game_III/CBaseModelInfo.cpp"
    "game_III/CBaseModelInfo.h"
    "game_III/CBoat.cpp"
    "game_III/CBoat.h"
    "game_III/CBox.h"
    "game_III/CBridge.cpp"
    "game_III/CBridge.h"
    "game_III/CBrightLight.cpp"
    "game_III/CBrightLight.h"
    "game_III/CBrightLights.cpp"
    "game_III/CBrightLights.h"
    "game_III/CBuilding.cpp"
    "game_III/CBuilding.h"
    "game_III/CBulletInfo.cpp"
    "game_III/CBulletInfo.h"
    "game_III/CBulletTrace.cpp"
    "game_III/CBulletTrace.h"
    "game_III/CBulletTraces.cpp"
    "game_III/CBulletTraces.h"
    "game_III/cBuoyancy.cpp"
    "game_III/cBuoyancy.h"
    "game_III/CCam.cpp"
    "game_III/CCam.h"
    "game_III/CCamera.cpp"
    "game_III/CCamera.h"
    "game_III/CCarAI.cpp"
    "game_III/CCarAI.h"
    "game_III/CCarCtrl.cpp"
    "game_III/CCarCtrl.h"
    "game_III/CCarGenerator.cpp"
    "game_III/CCarGenerator.h"
    "game_III/CCheat.cpp"
    "game_III/CCheat.h"
    "game_III/CCivilianPed.cpp"
    "game_III/CCivilianPed.h"
    "game_III/CClock.cpp"
    "game_III/CClock.h"
    "game_III/CClouds.cpp"
    "game_III/CClouds.h"
    "game_III/CClumpModelInfo.cpp"
    "game_III/CClumpModelInfo.h"
    "game_III/CColBox.cpp"
    "game_III/CColBox.h"
    "game_III/CColLine.cpp"
    "game_III/CColLine.h"
    "game_III/CCollision.cpp"
    "game_III/CCollision.h"
    "game_III/CColModel.cpp"
    "game_III/CColModel.h"
    "game_III/CColPoint.cpp"
    "game_III/CColPoint.h"
    "game_III/CColSphere.cpp"
    "game_III/CColSphere.h"
    "game_III/CColTriangle.cpp"
    "game_III/CColTriangle.h"
    "game_III/CColTrianglePlane.cpp"
    "game_III/CColTrianglePlane.h"
    "game_III/CControllerState.cpp"
    "game_III/CControllerState.h"
    "game_III/CCopPed.cpp"
    "game_III/CCopPed.h"
    "game_III/CCoronas.cpp"
    "game_III/CCoronas.h"
    "game_III/CCrane.cpp"
    "game_III/CCrane.h"
    "game_III/CCranes.cpp"
    "game_III/CCranes.h"
    "game_III/CCredits.cpp"
    "game_III/CCredits.h"
    "game_III/CCurrentVehicle.cpp"
    "game_III/CCurrentVehicle.h"
    "game_III/CCurves.cpp"
    "game_III/CCurves.h"
    "game_III/CCutsceneHead.cpp"
    "game_III/CCutsceneHead.h"
    "game_III/CCutsceneMgr.cpp"
    "game_III/CCutsceneMgr.h"
    "game_III/CCutsceneObject.cpp"
    "game_III/CCutsceneObject.h"
    "game_III/CDamageManager.cpp"
    "game_III/CDamageManager.h"
    "game_III/CDarkel.cpp"
    "game_III/CDarkel.h"
    "game_III/CDate.cpp"
    "game_III/CDate.h"
    "game_III/CDigitalClock.cpp"
    "game_III/CDigitalClock.h"
    "game_III/CDirectory.cpp"
    "game_III/CDirectory.h"
    "game_III/cDMAudio.cpp"
    "game_III/cDMAudio.h"
    "game_III/CDoor.cpp"
    "game_III/CDoor.h"
    "game_III/CDraw.cpp"
    "game_III/CDraw.h"
    "game_III/CDummy.cpp"
    "game_III/CDummy.h"
    "game_III/CDummyObject.cpp"
    "game_III/CDummyObject.h"
    "game_III/CEmergencyPed.cpp"
    "game_III/CEmergencyPed.h"
    "game_III/CEntity.cpp"
    "game_III/CEntity.h"
    "game_III/CEntryInfoList.cpp"
    "game_III/CEntryInfoList.h"
    "game_III/CEventList.cpp"
    "game_III/CEventList.h"
    "game_III/CExplosion.cpp"
    "game_III/CExplosion.h"
    "game_III/CFallingGlassPane.cpp"
    "game_III/CFallingGlassPane.h"
    "game_III/CFileLoader.cpp"
    "game_III/CFileLoader.h"
    "game_III/CFileMgr.cpp"
    "game_III/CFileMgr.h"
    "game_III/CFire.cpp"
    "game_III/CFire.h"
    "game_III/CFireManager.cpp"
    "game_III/CFireManager.h"
    "game_III/CFont.cpp"
    "game_III/CFont.h"
    "game_III/CFontDetails.cpp"
    "game_III/CFontDetails.h"
    "game_III/CGame.cpp"
    "game_III/CGame.h"
    "game_III/CGameLogic.cpp"
    "game_III/CGameLogic.h"
    "game_III/CGangInfo.cpp"
    "game_III/CGangInfo.h"
    "game_III/CGangs.cpp"
    "game_III/CGangs.h"
    "game_III/CGarage.cpp"
    "game_III/CGarage.h"
    "game_III/CGarages.cpp"
    "game_III/CGarages.h"
    "game_III/CGeneral.cpp"
    "game_III/CGeneral.h"
    "game_III/CGlass.cpp"
    "game_III/CGlass.h"
    "game_III/cHandlingDataMgr.cpp"
    "game_III/cHandlingDataMgr.h"
    "game_III/CHeli.cpp"
    "game_III/CHeli.h"
    "game_III/CHud.cpp"
    "game_III/CHud.h"
    "game_III/CIniFile.cpp"
    "game_III/CIniFile.h"
    "game_III/CInstance.cpp"
    "game_III/CInstance.h"
    "game_III/CKeyboardState.cpp"
    "game_III/CKeyboardState.h"
    "game_III/CLines.cpp"
    "game_III/CLines.h"
    "game_III/CLink.h"
    "game_III/CLinkList.h"
    "game_III/CMatrix.cpp"
    "game_III/CMatrix.h"
    "game_III/CMBlur.cpp"
    "game_III/CMBlur.h"
    "game_III/CMenuManager.cpp"
    "game_III/CMenuManager.h"
    "game_III/CMessages.cpp"
    "game_III/CMessages.h"
    "game_III/CMissionCleanup.cpp"
    "game_III/CMissionCleanup.h"
    "game_III/CMloModelInfo.cpp"
    "game_III/CMloModelInfo.h"
    "game_III/CModelInfo.cpp"
    "game_III/CModelInfo.h"
    "game_III/CMoneyMessage.cpp"
    "game_III/CMoneyMessage.h"
    "game_III/CMoneyMessages.cpp"
    "game_III/CMoneyMessages.h"
    "game_III/CMotionBlurStreaks.cpp"
    "game_III/CMotionBlurStreaks.h"
    "game_III/CMouseControllerState.cpp"
    "game_III/CMouseControllerState.h"
    "game_III/CMousePointerStateHelper.cpp"
    "game_III/CMousePointerStateHelper.h"
    "game_III/CMovie.cpp"
    "game_III/CMovie.h"
    "game_III/CMovingThing.cpp"
    "game_III/CMovingThing.h"
    "game_III/CMovingThings.cpp"
    "game_III/CMovingThings.h"
    "game_III/cMusicManager.cpp"
    "game_III/cMusicManager.h"
    "game_III/CNodeAddress.h"
    "game_III/CObject.cpp"
    "game_III/CObject.h"
    "game_III/CObjectData.cpp"
    "game_III/CObjectData.h"
    "game_III/common.cpp"
    "game_III/common.h"
    "game_III/COneSheet.cpp"
    "game_III/COneSheet.h"
    "game_III/COnscreenTimer.cpp"
    "game_III/COnscreenTimer.h"
    "game_III/COnscreenTimerEntry.cpp"
    "game_III/COnscreenTimerEntry.h"
    "game_III/CPacManPickup.cpp"
    "game_III/CPacManPickup.h"
    "game_III/CPacManPickups.cpp"
    "game_III/CPacManPickups.h"
    "game_III/CPad.cpp"
    "game_III/CPad.h"
    "game_III/CPager.cpp"
    "game_III/CPager.h"
    "game_III/CParticle.cpp"
    "game_III/CParticle.h"
    "game_III/CParticleObject.cpp"
    "game_III/CParticleObject.h"
    "game_III/cParticleSystemMgr.cpp"
    "game_III/cParticleSystemMgr.h"
    "game_III/CPathFind.cpp"
    "game_III/CPathFind.h"
    "game_III/CPathNode.cpp"
    "game_III/CPathNode.h"
    "game_III/CPathSplines.h"
    "game_III/CPed.cpp"
    "game_III/CPed.h"
    "game_III/CPedIK.cpp"
    "game_III/CPedIK.h"
    "game_III/CPedModelInfo.cpp"
    "game_III/CPedModelInfo.h"
    "game_III/CPedPath.cpp"
    "game_III/CPedPath.h"
    "game_III/CPedPathNode.h"
    "game_III/CPedPlacement.cpp"
    "game_III/CPedPlacement.h"
    "game_III/CPedStats.cpp"
    "game_III/CPedStats.h"
    "game_III/CPedType.cpp"
    "game_III/CPedType.h"
    "game_III/CPhone.cpp"
    "game_III/CPhone.h"
    "game_III/CPhoneInfo.cpp"
    "game_III/CPhoneInfo.h"
    "game_III/CPhysical.cpp"
    "game_III/CPhysical.h"
    "game_III/CPickup.cpp"
    "game_III/CPickup.h"
    "game_III/CPickups.cpp"
    "game_III/CPickups.h"
    "game_III/CPlaceable.cpp"
    "game_III/CPlaceable.h"
    "game_III/CPlaceName.cpp"
    "game_III/CPlaceName.h"
    "game_III/CPlane.cpp"
    "game_III/CPlane.h"
    "game_III/CPlayerInfo.cpp"
    "game_III/CPlayerInfo.h"
    "game_III/CPlayerPed.cpp"
    "game_III/CPlayerPed.h"
    "game_III/CPlayerSkin.cpp"
    "game_III/CPlayerSkin.h"
    "game_III/CPointLights.cpp"
    "game_III/CPointLights.h"
    "game_III/CPool.h"
    "game_III/CPools.cpp"
    "game_III/CPools.h"
    "game_III/CPopulation.cpp"
    "game_III/CPopulation.h"
    "game_III/CProjectile.cpp"
    "game_III/CProjectile.h"
    "game_III/CProjectileInfo.cpp"
    "game_III/CProjectileInfo.h"
    "game_III/CPtrList.cpp"
    "game_III/CPtrList.h"
    "game_III/CQuaternion.cpp"
    "game_III/CQuaternion.h"
    "game_III/CRadar.cpp"
    "game_III/CRadar.h"
    "game_III/CRange2D.cpp"
    "game_III/CRange2D.h"
    "game_III/CRecordDataForChase.cpp"
    "game_III/CRecordDataForChase.h"
    "game_III/CRecordDataForGame.cpp"
    "game_III/CRecordDataForGame.h"
    "game_III/CRect.h"
    "game_III/CReference.h"
    "game_III/CReferences.cpp"
    "game_III/CReferences.h"
    "game_III/CRegisteredCorona.cpp"
    "game_III/CRegisteredCorona.h"
    "game_III/CRegisteredMotionBlurStreak.cpp"
    "game_III/CRegisteredMotionBlurStreak.h"
    "game_III/CRegisteredShinyText.cpp"
    "game_III/CRegisteredShinyText.h"
    "game_III/CRemote.cpp"
    "game_III/CRemote.h"
    "game_III/CRenderer.cpp"
    "game_III/CRenderer.h"
    "game_III/CReplay.cpp"
    "game_III/CReplay.h"
    "game_III/CRestart.cpp"
    "game_III/CRestart.h"
    "game_III/CRoadBlocks.cpp"
    "game_III/CRoadBlocks.h"
    "game_III/CRouteNode.cpp"
    "game_III/CRouteNode.h"
    "game_III/CRubbish.cpp"
    "game_III/CRubbish.h"
    "game_III/CRunningScript.cpp"
    "game_III/CRunningScript.h"
    "game_III/cSampleManager.cpp"
    "game_III/cSampleManager.h"
    "game_III/CScene.cpp"
    "game_III/CScene.h"
    "game_III/CSceneEdit.cpp"
    "game_III/CSceneEdit.h"
    "game_III/CScrollBar.cpp"
    "game_III/CScrollBar.h"
    "game_III/CSector.h"
    "game_III/CShadows.cpp"
    "game_III/CShadows.h"
    "game_III/CShinyTexts.cpp"
    "game_III/CShinyTexts.h"
    "game_III/CShotInfo.cpp"
    "game_III/CShotInfo.h"
    "game_III/CSimpleModelInfo.cpp"
    "game_III/CSimpleModelInfo.h"
    "game_III/CSkidmark.cpp"
    "game_III/CSkidmark.h"
    "game_III/CSkidmarks.cpp"
    "game_III/CSkidmarks.h"
    "game_III/CSpecialFX.cpp"
    "game_III/CSpecialFX.h"
    "game_III/CSpecialParticleStuff.cpp"
    "game_III/CSpecialParticleStuff.h"
    "game_III/CSphere.cpp"
    "game_III/CSphere.h"
    "game_III/CSprite.cpp"
    "game_III/CSprite.h"
    "game_III/CSprite2d.cpp"
    "game_III/CSprite2d.h"
    "game_III/CStats.cpp"
    "game_III/CStats.h"
    "game_III/CStore.h"
    "game_III/CStoredCar.cpp"
    "game_III/CStoredCar.h"
    "game_III/CStoredCollPoly.cpp"
    "game_III/CStoredCollPoly.h"
    "game_III/CStreaming.cpp"
    "game_III/CStreaming.h"
    "game_III/CStreamingInfo.cpp"
    "game_III/CStreamingInfo.h"
    "game_III/CStuckCarCheck.cpp"
    "game_III/CStuckCarCheck.h"
    "game_III/CSurfaceTable.cpp"
    "game_III/CSurfaceTable.h"
    "game_III/CTempColModels.cpp"
    "game_III/CTempColModels.h"
    "game_III/CTempNode.cpp"
    "game_III/CTempNode.h"
    "game_III/CText.cpp"
    "game_III/CText.h"
    "game_III/CTheCarGenerators.cpp"
    "game_III/CTheCarGenerators.h"
    "game_III/CTheScripts.cpp"
    "game_III/CTheScripts.h"
    "game_III/CTheZones.cpp"
    "game_III/CTheZones.h"
    "game_III/CTimeCycle.cpp"
    "game_III/CTimeCycle.h"
    "game_III/CTimeModelInfo.cpp"
    "game_III/CTimeModelInfo.h"
    "game_III/CTimer.cpp"
    "game_III/CTimer.h"
    "game_III/CTimeStep.cpp"
    "game_III/CTimeStep.h"
    "game_III/CTowerClock.cpp"
    "game_III/CTowerClock.h"
    "game_III/CTrafficLights.cpp"
    "game_III/CTrafficLights.h"
    "game_III/CTrain.cpp"
    "game_III/CTrain.h"
    "game_III/CTrainCamNode.cpp"
    "game_III/CTrainCamNode.h"
    "game_III/CTrainDoor.cpp"
    "game_III/CTrainDoor.h"
    "game_III/cTransmission.cpp"
    "game_III/cTransmission.h"
    "game_III/CTreadable.cpp"
    "game_III/CTreadable.h"
    "game_III/CTxdStore.cpp"
    "game_III/CTxdStore.h"
    "game_III/CUpsideDownCarCheck.cpp"
    "game_III/CUpsideDownCarCheck.h"
    "game_III/CUserDisplay.cpp"
    "game_III/CUserDisplay.h"
    "game_III/CVector.cpp"
    "game_III/CVector.h"
    "game_III/CVector2D.h"
    "game_III/CVehicle.cpp"
    "game_III/CVehicle.h"
    "game_III/CVehicleModelInfo.cpp"
    "game_III/CVehicleModelInfo.h"
    "game_III/CVisibilityPlugins.cpp"
    "game_III/CVisibilityPlugins.h"
    "game_III/CWanted.cpp"
    "game_III/CWanted.h"
    "game_III/CWaterCannon.cpp"
    "game_III/CWaterCannon.h"
    "game_III/CWaterCannons.cpp"
    "game_III/CWaterCannons.h"
    "game_III/CWaterLevel.cpp"
    "game_III/CWaterLevel.h"
    "game_III/CWeapon.cpp"
    "game_III/CWeapon.h"
    "game_III/CWeaponEffects.cpp"
    "game_III/CWeaponEffects.h"
    "game_III/CWeaponInfo.cpp"
    "game_III/CWeaponInfo.h"
    "game_III/CWeather.cpp"
    "game_III/CWeather.h"
    "game_III/CWorld.cpp"
    "game_III/CWorld.h"
    "game_III/CXtraCompsModelInfo.cpp"
    "game_III/CXtraCompsModelInfo.h"
    "game_III/CZone.cpp"
    "game_III/CZone.h"
    "game_III/CZoneInfo.h"
    "game_III/eAnimations.h"
    "game_III/eAudioType.h"
    "game_III/eBodyParts.h"
    "game_III/eBridgeState.h"
    "game_III/eCarMission.h"
    "game_III/eCopType.h"
    "game_III/eCoronaType.h"
    "game_III/eCrimeType.h"
    "game_III/eEntityStatus.h"
    "game_III/eEventEntity.h"
    "game_III/eEventStatus.h"
    "game_III/eEventType.h"
    "game_III/eExplosionType.h"
    "game_III/eGangType.h"
    "game_III/eGarageID.h"
    "game_III/eGarageState.h"
    "game_III/eGarageType.h"
    "game_III/eHandlingIndex.h"
    "game_III/eLevelName.h"
    "game_III/eParticleObjectType.h"
    "game_III/ePedModel.h"
    "game_III/ePedStats.h"
    "game_III/ePedType.h"
    "game_III/ePhoneState.h"
    "game_III/eRadioStations.h"
    "game_III/eSceneCommands.h"
    "game_III/eScriptCommands.h"
    "game_III/eVehicleHandlingModelFlags.h"
    "game_III/eVehicleIndex.h"
    "game_III/eVehicleModel.h"
    "game_III/eWeaponFire.h"
    "game_III/eWeaponModel.h"
    "game_III/eWeaponType.h"
    "game_III/eWeather.h"
    "game_III/eWheelModel.h"
    "game_III/eZoneType.h"
    "game_III/GenericGameStorage.cpp"
    "game_III/GenericGameStorage.h"
    "game_III/NodeName.cpp"
    "game_III/NodeName.h"
    "game_III/RenderBuffer.cpp"
    "game_III/RenderBuffer.h"
    "game_III/RenderWare.cpp"
    "game_III/RpAnimBlend.cpp"
    "game_III/RpAnimBlend.h"
    "game_III/RwObjectNameIdAssocation.h"
    "game_III/tColSurface.h"
    "game_III/tHandlingData.h"
    "game_III/tParticleSystemData.h"
    "game_III/tParticleType.h"
    "game_III/tTransmissionGear.h"
    "game_III/TxdDef.h"
)
source_group("game_III" FILES ${game_III})

set(game_III__meta
    "game_III/meta/meta.C2dEffect.h"
    "game_III/meta/meta.C2deffectsModelInfo.h"
    "game_III/meta/meta.C3dMarker.h"
    "game_III/meta/meta.C3dMarkers.h"
    "game_III/meta/meta.C_PcSave.h"
    "game_III/meta/meta.CAccident.h"
    "game_III/meta/meta.CAccidentManager.h"
    "game_III/meta/meta.CAnimBlendAssocGroup.h"
    "game_III/meta/meta.CAnimBlendAssociation.h"
    "game_III/meta/meta.CAnimBlendClumpData.h"
    "game_III/meta/meta.CAnimBlendHierarchy.h"
    "game_III/meta/meta.CAnimBlendNode.h"
    "game_III/meta/meta.CAnimBlendSequence.h"
    "game_III/meta/meta.CAnimManager.h"
    "game_III/meta/meta.CAntenna.h"
    "game_III/meta/meta.CAntennas.h"
    "game_III/meta/meta.cAudioCollision.h"
    "game_III/meta/meta.cAudioCollisionManager.h"
    "game_III/meta/meta.CAudioHydrant.h"
    "game_III/meta/meta.cAudioScriptObject.h"
    "game_III/meta/meta.CAutomobile.h"
    "game_III/meta/meta.CBaseModelInfo.h"
    "game_III/meta/meta.CBoat.h"
    "game_III/meta/meta.CBridge.h"
    "game_III/meta/meta.CBrightLight.h"
    "game_III/meta/meta.CBrightLights.h"
    "game_III/meta/meta.CBuilding.h"
    "game_III/meta/meta.CBulletInfo.h"
    "game_III/meta/meta.CBulletTrace.h"
    "game_III/meta/meta.CBulletTraces.h"
    "game_III/meta/meta.CCamera.h"
    "game_III/meta/meta.CCarAI.h"
    "game_III/meta/meta.CCarCtrl.h"
    "game_III/meta/meta.CCarGenerator.h"
    "game_III/meta/meta.CCheat.h"
    "game_III/meta/meta.CCivilianPed.h"
    "game_III/meta/meta.CClock.h"
    "game_III/meta/meta.CClouds.h"
    "game_III/meta/meta.CClumpModelInfo.h"
    "game_III/meta/meta.CColBox.h"
    "game_III/meta/meta.CColLine.h"
    "game_III/meta/meta.CColModel.h"
    "game_III/meta/meta.CColPoint.h"
    "game_III/meta/meta.CColSphere.h"
    "game_III/meta/meta.CColTriangle.h"
    "game_III/meta/meta.CColTrianglePlane.h"
    "game_III/meta/meta.CCopPed.h"
    "game_III/meta/meta.CCoronas.h"
    "game_III/meta/meta.CCrane.h"
    "game_III/meta/meta.CCranes.h"
    "game_III/meta/meta.CCredits.h"
    "game_III/meta/meta.CCurrentVehicle.h"
    "game_III/meta/meta.CCurves.h"
    "game_III/meta/meta.CCutsceneHead.h"
    "game_III/meta/meta.CCutsceneObject.h"
    "game_III/meta/meta.CDamageManager.h"
    "game_III/meta/meta.CDarkel.h"
    "game_III/meta/meta.CDate.h"
    "game_III/meta/meta.CDigitalClock.h"
    "game_III/meta/meta.CDirectory.h"
    "game_III/meta/meta.cDMAudio.h"
    "game_III/meta/meta.CDraw.h"
    "game_III/meta/meta.CDummy.h"
    "game_III/meta/meta.CDummyObject.h"
    "game_III/meta/meta.CEmergencyPed.h"
    "game_III/meta/meta.CEntity.h"
    "game_III/meta/meta.CEventList.h"
    "game_III/meta/meta.CFallingGlassPane.h"
    "game_III/meta/meta.CFileMgr.h"
    "game_III/meta/meta.CFire.h"
    "game_III/meta/meta.CFireManager.h"
    "game_III/meta/meta.CGame.h"
    "game_III/meta/meta.CGameLogic.h"
    "game_III/meta/meta.CGangInfo.h"
    "game_III/meta/meta.CGangs.h"
    "game_III/meta/meta.CGeneral.h"
    "game_III/meta/meta.CGlass.h"
    "game_III/meta/meta.CHeli.h"
    "game_III/meta/meta.CIniFile.h"
    "game_III/meta/meta.CInstance.h"
    "game_III/meta/meta.CLines.h"
    "game_III/meta/meta.CMatrix.h"
    "game_III/meta/meta.CMBlur.h"
    "game_III/meta/meta.CMissionCleanup.h"
    "game_III/meta/meta.CMloModelInfo.h"
    "game_III/meta/meta.CModelInfo.h"
    "game_III/meta/meta.CMoneyMessage.h"
    "game_III/meta/meta.CMoneyMessages.h"
    "game_III/meta/meta.CMotionBlurStreaks.h"
    "game_III/meta/meta.CMouseControllerState.h"
    "game_III/meta/meta.CMousePointerStateHelper.h"
    "game_III/meta/meta.CMovie.h"
    "game_III/meta/meta.CMovingThing.h"
    "game_III/meta/meta.CMovingThings.h"
    "game_III/meta/meta.cMusicManager.h"
    "game_III/meta/meta.CObject.h"
    "game_III/meta/meta.CObjectData.h"
    "game_III/meta/meta.COneSheet.h"
    "game_III/meta/meta.COnscreenTimer.h"
    "game_III/meta/meta.COnscreenTimerEntry.h"
    "game_III/meta/meta.CPacManPickup.h"
    "game_III/meta/meta.CPacManPickups.h"
    "game_III/meta/meta.CParticle.h"
    "game_III/meta/meta.CParticleObject.h"
    "game_III/meta/meta.CPathFind.h"
    "game_III/meta/meta.CPathNode.h"
    "game_III/meta/meta.CPed.h"
    "game_III/meta/meta.CPedIK.h"
    "game_III/meta/meta.CPedModelInfo.h"
    "game_III/meta/meta.CPedPath.h"
    "game_III/meta/meta.CPedPlacement.h"
    "game_III/meta/meta.CPedStats.h"
    "game_III/meta/meta.CPhone.h"
    "game_III/meta/meta.CPhoneInfo.h"
    "game_III/meta/meta.CPhysical.h"
    "game_III/meta/meta.CPickup.h"
    "game_III/meta/meta.CPickups.h"
    "game_III/meta/meta.CPlaceable.h"
    "game_III/meta/meta.CPlaceName.h"
    "game_III/meta/meta.CPlane.h"
    "game_III/meta/meta.CPlayerPed.h"
    "game_III/meta/meta.CPlayerSkin.h"
    "game_III/meta/meta.CPools.h"
    "game_III/meta/meta.CPopulation.h"
    "game_III/meta/meta.CProjectile.h"
    "game_III/meta/meta.CQuaternion.h"
    "game_III/meta/meta.CRadar.h"
    "game_III/meta/meta.CRange2D.h"
    "game_III/meta/meta.CRecordDataForChase.h"
    "game_III/meta/meta.CRecordDataForGame.h"
    "game_III/meta/meta.CReferences.h"
    "game_III/meta/meta.CRegisteredCorona.h"
    "game_III/meta/meta.CRegisteredMotionBlurStreak.h"
    "game_III/meta/meta.CRegisteredShinyText.h"
    "game_III/meta/meta.CRemote.h"
    "game_III/meta/meta.CRestart.h"
    "game_III/meta/meta.CRoadBlocks.h"
    "game_III/meta/meta.CRouteNode.h"
    "game_III/meta/meta.CRubbish.h"
    "game_III/meta/meta.CScrollBar.h"
    "game_III/meta/meta.CShinyTexts.h"
    "game_III/meta/meta.CShotInfo.h"
    "game_III/meta/meta.CSimpleModelInfo.h"
    "game_III/meta/meta.CSkidmark.h"
    "game_III/meta/meta.CSkidmarks.h"
    "game_III/meta/meta.CSpecialFX.h"
    "game_III/meta/meta.CSpecialParticleStuff.h"
    "game_III/meta/meta.CSprite.h"
    "game_III/meta/meta.CSprite2d.h"
    "game_III/meta/meta.CStoredCar.h"
    "game_III/meta/meta.CStoredCollPoly.h"
    "game_III/meta/meta.CStuckCarCheck.h"
    "game_III/meta/meta.CSurfaceTable.h"
    "game_III/meta/meta.CTempNode.h"
    "game_III/meta/meta.CText.h"
    "game_III/meta/meta.CTheCarGenerators.h"
    "game_III/meta/meta.CTimeCycle.h"
    "game_III/meta/meta.CTimeModelInfo.h"
    "game_III/meta/meta.CTimer.h"
    "game_III/meta/meta.CTowerClock.h"
    "game_III/meta/meta.CTrafficLights.h"
    "game_III/meta/meta.CTrain.h"
    "game_III/meta/meta.CTrainCamNode.h"
    "game_III/meta/meta.CTrainDoor.h"
    "game_III/meta/meta.CTreadable.h"
    "game_III/meta/meta.CUpsideDownCarCheck.h"
    "game_III/meta/meta.CUserDisplay.h"
    "game_III/meta/meta.CVehicle.h"
    "game_III/meta/meta.CVehicleModelInfo.h"
    "game_III/meta/meta.CVisibilityPlugins.h"
    "game_III/meta/meta.CWanted.h"
    "game_III/meta/meta.CWaterCannon.h"
    "game_III/meta/meta.CWaterCannons.h"
    "game_III/meta/meta.CWeapon.h"
    "game_III/meta/meta.CWeather.h"
    "game_III/meta/meta.CXtraCompsModelInfo.h"
    "game_III/meta/meta.CZone.h"
    "game_III/meta/meta.GenericGameStorage.h"
    "game_III/meta/meta.NodeName.h"
    "game_III/meta/meta.RenderBuffer.h"
    "game_III/meta/meta.RpAnimBlend.h"
)
source_group("game_III\\meta" FILES ${game_III__meta})

set(game_III__rw
    "game_III/rw/rpanisot.h"
    "game_III/rw/rpcollis.h"
    "game_III/rw/rpcriter.h"
    "game_III/rw/rpdbgerr.h"
    "game_III/rw/rpdmorph.h"
    "game_III/rw/rperror.h"
    "game_III/rw/rphanim.h"
    "game_III/rw/rplodatm.h"
    "game_III/rw/rplogo.h"
    "game_III/rw/rpltmap.h"
    "game_III/rw/rpmatfx.h"
    "game_III/rw/rpmipkl.h"
    "game_III/rw/rpmorph.h"
    "game_III/rw/rppatch.h"
    "game_III/rw/rpprtstd.h"
    "game_III/rw/rpptank.h"
    "game_III/rw/rppvs.h"
    "game_III/rw/rprandom.h"
    "game_III/rw/rpskin.h"
    "game_III/rw/rpspline.h"
    "game_III/rw/rpstereo.h"
    "game_III/rw/rpusrdat.h"
    "game_III/rw/rpworld.h"
    "game_III/rw/rt2d.h"
    "game_III/rw/rt2danim.h"
    "game_III/rw/rtbary.h"
    "game_III/rw/rtbezpat.h"
    "game_III/rw/rtbmp.h"
    "game_III/rw/rtcharse.h"
    "game_III/rw/rtimport.h"
    "game_III/rw/rtintel.h"
    "game_III/rw/rtintsec.h"
    "game_III/rw/rtltmap.h"
    "game_III/rw/rtmipk.h"
    "game_III/rw/rtpick.h"
    "game_III/rw/rtpitexd.h"
    "game_III/rw/rtpng.h"
    "game_III/rw/rtquat.h"
    "game_III/rw/rtras.h"
    "game_III/rw/rtray.h"
    "game_III/rw/rtslerp.h"
    "game_III/rw/rtsplpvs.h"
    "game_III/rw/rttiff.h"
    "game_III/rw/rttilerd.h"
    "game_III/rw/rttoc.h"
    "game_III/rw/rtvcat.h"
    "game_III/rw/rtworld.h"
    "game_III/rw/rwcore.h"
    "game_III/rw/rwplcore.h"
    "game_III/rw/skeleton.h"
)
source_group("game_III\\rw" FILES ${game_III__rw})

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
    ${game_III}
    ${game_III__meta}
    ${game_III__rw}
)

################################################################################
# Target
################################################################################
add_library(${PROJECT_NAME} STATIC ${ALL_FILES})

use_props(${PROJECT_NAME} "${CMAKE_CONFIGURATION_TYPES}" "${DEFAULT_CXX_PROPS}")
set(ROOT_NAMESPACE plugin_iii)

set_target_properties(${PROJECT_NAME} PROPERTIES
    VS_GLOBAL_KEYWORD "Win32Proj"
)
################################################################################
# Target name
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Mixed Platforms")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_RELEASE "plugin_iii"
        TARGET_NAME_ZDEBUG  "plugin_iii_d"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_RELEASE "plugin_iii"
        TARGET_NAME_ZDEBUG  "plugin_iii_d"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_RELEASE "plugin_iii"
        TARGET_NAME_ZDEBUG  "plugin_iii_d"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_RELEASE "plugin_iii"
        TARGET_NAME_ZDEBUG  "plugin_iii_d"
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
        "${CMAKE_CURRENT_SOURCE_DIR}/game_III;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_III/rw;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared/game;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../safetyhook"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    target_include_directories(${PROJECT_NAME} PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/.;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_III;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_III/rw;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared/game;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../safetyhook"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    target_include_directories(${PROJECT_NAME} PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/.;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_III;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_III/rw;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared/game;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../safetyhook"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    target_include_directories(${PROJECT_NAME} PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/.;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_III;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_III/rw;"
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
        "GTA3;"
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
        "GTA3;"
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
        "GTA3;"
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
        "GTA3;"
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

