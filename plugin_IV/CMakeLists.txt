set(PROJECT_NAME plugin_iv)

################################################################################
# Source groups
################################################################################
set(no_group_source_files
    "plugin_IV.h"
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

set(game_IV
    "game_IV/audAmbientAudioEntity.cpp"
    "game_IV/audAmbientAudioEntity.h"
    "game_IV/audFrontendAudioEntity.cpp"
    "game_IV/audFrontendAudioEntity.h"
    "game_IV/audGtaAudioEntity.cpp"
    "game_IV/audGtaAudioEntity.h"
    "game_IV/audLoopingSound.cpp"
    "game_IV/audLoopingSound.h"
    "game_IV/audNorthAudioEngine.cpp"
    "game_IV/audNorthAudioEngine.h"
    "game_IV/audRadioAudioEntity.cpp"
    "game_IV/audRadioAudioEntity.h"
    "game_IV/audRadioStation.cpp"
    "game_IV/audRadioStation.h"
    "game_IV/audVehicleAudioEntity.cpp"
    "game_IV/audVehicleAudioEntity.h"
    "game_IV/audWeaponAudioEvent.cpp"
    "game_IV/audWeaponAudioEvent.h"
    "game_IV/C_PcSave.cpp"
    "game_IV/C_PcSave.h"
    "game_IV/CAmmoData.cpp"
    "game_IV/CAmmoData.h"
    "game_IV/CAutomobile.cpp"
    "game_IV/CAutomobile.h"
    "game_IV/CBaseDC.cpp"
    "game_IV/CBaseDC.h"
    "game_IV/CBike.cpp"
    "game_IV/CBike.h"
    "game_IV/CBoat.cpp"
    "game_IV/CBoat.h"
    "game_IV/CCam.cpp"
    "game_IV/CCam.h"
    "game_IV/CCamera.cpp"
    "game_IV/CCamera.h"
    "game_IV/CCamFollowPed.cpp"
    "game_IV/CCamFollowPed.h"
    "game_IV/CCamFollowVehicle.cpp"
    "game_IV/CCamFollowVehicle.h"
    "game_IV/CCamGame.cpp"
    "game_IV/CCamGame.h"
    "game_IV/CCamIdle.cpp"
    "game_IV/CCamIdle.h"
    "game_IV/CCamScriptInstruction.cpp"
    "game_IV/CCamScriptInstruction.h"
    "game_IV/CCheat.cpp"
    "game_IV/CCheat.h"
    "game_IV/CClock.cpp"
    "game_IV/CClock.h"
    "game_IV/CColPoint.h"
    "game_IV/CControl.cpp"
    "game_IV/CControl.h"
    "game_IV/CControlMgr.cpp"
    "game_IV/CControlMgr.h"
    "game_IV/CCoronas.cpp"
    "game_IV/CCoronas.h"
    "game_IV/CCredits.cpp"
    "game_IV/CCredits.h"
    "game_IV/CCutsceneMgr.cpp"
    "game_IV/CCutsceneMgr.h"
    "game_IV/CDrawRadarCircleDC.cpp"
    "game_IV/CDrawRadarCircleDC.h"
    "game_IV/CDrawRectDC.cpp"
    "game_IV/CDrawRectDC.h"
    "game_IV/CDrawSpriteDC.cpp"
    "game_IV/CDrawSpriteDC.h"
    "game_IV/CDynamicEntity.cpp"
    "game_IV/CDynamicEntity.h"
    "game_IV/CEntity.cpp"
    "game_IV/CEntity.h"
    "game_IV/CEntityScanner.cpp"
    "game_IV/CEntityScanner.h"
    "game_IV/CEventGroup.h"
    "game_IV/CEventHandler.cpp"
    "game_IV/CEventHandler.h"
    "game_IV/CEventScanner.h"
    "game_IV/CEventScannerNY.cpp"
    "game_IV/CEventScannerNY.h"
    "game_IV/CFileLoader.cpp"
    "game_IV/CFileLoader.h"
    "game_IV/CFileType.cpp"
    "game_IV/CFileType.h"
    "game_IV/CFont.cpp"
    "game_IV/CFont.h"
    "game_IV/CGame.cpp"
    "game_IV/CGame.h"
    "game_IV/CGeneral.cpp"
    "game_IV/CGeneral.h"
    "game_IV/CGrcState_SetCullMode.cpp"
    "game_IV/CGrcState_SetCullMode.h"
    "game_IV/CGrcState_SetDepthWrite.cpp"
    "game_IV/CGrcState_SetDepthWrite.h"
    "game_IV/CGrcState_SetLightingMode.cpp"
    "game_IV/CGrcState_SetLightingMode.h"
    "game_IV/cHandlingDataMgr.cpp"
    "game_IV/cHandlingDataMgr.h"
    "game_IV/CHeli.cpp"
    "game_IV/CHeli.h"
    "game_IV/CHud.cpp"
    "game_IV/CHud.h"
    "game_IV/CHudColours.cpp"
    "game_IV/CHudColours.h"
    "game_IV/CHudComponent.cpp"
    "game_IV/CHudComponent.h"
    "game_IV/CIkManager.cpp"
    "game_IV/CIkManager.h"
    "game_IV/CKeyboard.cpp"
    "game_IV/CKeyboard.h"
    "game_IV/CMatrix.h"
    "game_IV/CMenuManager.cpp"
    "game_IV/CMenuManager.h"
    "game_IV/CModelInfo.cpp"
    "game_IV/CModelInfo.h"
    "game_IV/CObject.cpp"
    "game_IV/CObject.h"
    "game_IV/common.cpp"
    "game_IV/common.h"
    "game_IV/CPad.cpp"
    "game_IV/CPad.h"
    "game_IV/CPed.cpp"
    "game_IV/CPed.h"
    "game_IV/CPedFactory.cpp"
    "game_IV/CPedFactory.h"
    "game_IV/CPedFactoryNY.cpp"
    "game_IV/CPedFactoryNY.h"
    "game_IV/CPedIntelligence.cpp"
    "game_IV/CPedIntelligence.h"
    "game_IV/CPedIntelligenceNY.cpp"
    "game_IV/CPedIntelligenceNY.h"
    "game_IV/CPhysical.cpp"
    "game_IV/CPhysical.h"
    "game_IV/CPlane.cpp"
    "game_IV/CPlane.h"
    "game_IV/CPlayerData.cpp"
    "game_IV/CPlayerData.h"
    "game_IV/CPlayerInfo.cpp"
    "game_IV/CPlayerInfo.h"
    "game_IV/CPlayerPed.cpp"
    "game_IV/CPlayerPed.h"
    "game_IV/CPool.cpp"
    "game_IV/CPool.h"
    "game_IV/CPools.cpp"
    "game_IV/CPools.h"
    "game_IV/CPortalTracker.h"
    "game_IV/CPtrNodeDouble.h"
    "game_IV/CPtrNodeSingle.h"
    "game_IV/CRadar.cpp"
    "game_IV/CRadar.h"
    "game_IV/CRadioHud.cpp"
    "game_IV/CRadioHud.h"
    "game_IV/CRAGE_SetRenderStateDC.cpp"
    "game_IV/CRAGE_SetRenderStateDC.h"
    "game_IV/CRect.h"
    "game_IV/CRenderFontBufferDC.cpp"
    "game_IV/CRenderFontBufferDC.h"
    "game_IV/CReplay.cpp"
    "game_IV/CReplay.h"
    "game_IV/CScriptCommands.cpp"
    "game_IV/CScriptCommands.h"
    "game_IV/CScriptCommandsNY.cpp"
    "game_IV/CScriptCommandsNY.h"
    "game_IV/CSetCurrentViewportToNULL.cpp"
    "game_IV/CSetCurrentViewportToNULL.h"
    "game_IV/CSimpleIkManager.cpp"
    "game_IV/CSimpleIkManager.h"
    "game_IV/CSimpleTransform.cpp"
    "game_IV/CSimpleTransform.h"
    "game_IV/CSprite2d.cpp"
    "game_IV/CSprite2d.h"
    "game_IV/CStats.h"
    "game_IV/CStreaming.cpp"
    "game_IV/CStreaming.h"
    "game_IV/CTask.cpp"
    "game_IV/CTask.h"
    "game_IV/CTaskComplex.cpp"
    "game_IV/CTaskComplex.h"
    "game_IV/CTaskComplexAimAndThrowProjectile.cpp"
    "game_IV/CTaskComplexAimAndThrowProjectile.h"
    "game_IV/CTaskComplexGun.cpp"
    "game_IV/CTaskComplexGun.h"
    "game_IV/CTaskManager.cpp"
    "game_IV/CTaskManager.h"
    "game_IV/CTaskSimple.cpp"
    "game_IV/CTaskSimple.h"
    "game_IV/CTaskSimpleAimGun.cpp"
    "game_IV/CTaskSimpleAimGun.h"
    "game_IV/CTaskSimpleFireGun.cpp"
    "game_IV/CTaskSimpleFireGun.h"
    "game_IV/CTaskTimer.cpp"
    "game_IV/CTaskTimer.h"
    "game_IV/CText.cpp"
    "game_IV/CText.h"
    "game_IV/CTheScripts.cpp"
    "game_IV/CTheScripts.h"
    "game_IV/CTimeCycle.cpp"
    "game_IV/CTimeCycle.h"
    "game_IV/CTimer.cpp"
    "game_IV/CTimer.h"
    "game_IV/CTrain.cpp"
    "game_IV/CTrain.h"
    "game_IV/CTxdStore.cpp"
    "game_IV/CTxdStore.h"
    "game_IV/CVector.h"
    "game_IV/CVehicle.cpp"
    "game_IV/CVehicle.h"
    "game_IV/CVehicleFactory.cpp"
    "game_IV/CVehicleFactory.h"
    "game_IV/CVehicleFactoryNY.cpp"
    "game_IV/CVehicleFactoryNY.h"
    "game_IV/CViewport.cpp"
    "game_IV/CViewport.h"
    "game_IV/CViewportRadar.cpp"
    "game_IV/CViewportRadar.h"
    "game_IV/CVirtualBase.cpp"
    "game_IV/CVirtualBase.h"
    "game_IV/CWanted.cpp"
    "game_IV/CWanted.h"
    "game_IV/CWeapon.cpp"
    "game_IV/CWeapon.h"
    "game_IV/CWeaponData.cpp"
    "game_IV/CWeaponData.h"
    "game_IV/CWeaponInfo.cpp"
    "game_IV/CWeaponInfo.h"
    "game_IV/CWeather.cpp"
    "game_IV/CWeather.h"
    "game_IV/CWorld.cpp"
    "game_IV/CWorld.h"
    "game_IV/eModelHashes.h"
    "game_IV/eTasks.h"
    "game_IV/phInstGta.h"
    "game_IV/Rage.cpp"
    "game_IV/Rage.h"
    "game_IV/T_CB_Generic.cpp"
    "game_IV/T_CB_Generic.h"
)
source_group("game_IV" FILES ${game_IV})

set(game_IV__rage
    "game_IV/rage/atReferenceCounter.h"
    "game_IV/rage/audController.cpp"
    "game_IV/rage/audController.h"
    "game_IV/rage/audEntity.cpp"
    "game_IV/rage/audEntity.h"
    "game_IV/rage/audSound.cpp"
    "game_IV/rage/audSound.h"
    "game_IV/rage/audSoundInitParams.cpp"
    "game_IV/rage/audSoundInitParams.h"
    "game_IV/rage/audWaveSlot.cpp"
    "game_IV/rage/audWaveSlot.h"
    "game_IV/rage/BlockMap.h"
    "game_IV/rage/Color32.h"
    "game_IV/rage/CPostFX.cpp"
    "game_IV/rage/CPostFX.h"
    "game_IV/rage/crFrame.h"
    "game_IV/rage/crFrameBuffer.h"
    "game_IV/rage/crmtObserver.h"
    "game_IV/rage/CTextureDecodeRequestDesc.h"
    "game_IV/rage/datBase.h"
    "game_IV/rage/fiAssetManager.cpp"
    "game_IV/rage/fiAssetManager.h"
    "game_IV/rage/fiDevice.cpp"
    "game_IV/rage/fiDevice.h"
    "game_IV/rage/fiStream.cpp"
    "game_IV/rage/fiStream.h"
    "game_IV/rage/fwPool.h"
    "game_IV/rage/fwRect.h"
    "game_IV/rage/grcDevice.cpp"
    "game_IV/rage/grcDevice.h"
    "game_IV/rage/grcDrawMode.h"
    "game_IV/rage/grcEffect.h"
    "game_IV/rage/grcImage.cpp"
    "game_IV/rage/grcImage.h"
    "game_IV/rage/grcRenderState.h"
    "game_IV/rage/grcRenderTarget.h"
    "game_IV/rage/grcTexture.h"
    "game_IV/rage/grcTextureFactory.cpp"
    "game_IV/rage/grcTextureFactory.h"
    "game_IV/rage/grcVertexBuffer.cpp"
    "game_IV/rage/grcVertexBuffer.h"
    "game_IV/rage/grcViewport.cpp"
    "game_IV/rage/grcViewport.h"
    "game_IV/rage/grcWindow.cpp"
    "game_IV/rage/grcWindow.h"
    "game_IV/rage/grmShader.h"
    "game_IV/rage/grmShaderFactory.cpp"
    "game_IV/rage/grmShaderFactory.h"
    "game_IV/rage/ioKeyboard.cpp"
    "game_IV/rage/ioKeyboard.h"
    "game_IV/rage/ioMapper.h"
    "game_IV/rage/ioMouse.cpp"
    "game_IV/rage/ioMouse.h"
    "game_IV/rage/ioSource.h"
    "game_IV/rage/ioValue.cpp"
    "game_IV/rage/ioValue.h"
    "game_IV/rage/Math.h"
    "game_IV/rage/Matrix34.h"
    "game_IV/rage/Matrix44.h"
    "game_IV/rage/pgBase.h"
    "game_IV/rage/pgCollection.h"
    "game_IV/rage/pgDictionary.cpp"
    "game_IV/rage/pgDictionary.h"
    "game_IV/rage/pgPtr.h"
    "game_IV/rage/pgPtrCollection.h"
    "game_IV/rage/pgRef.cpp"
    "game_IV/rage/pgRef.h"
    "game_IV/rage/pgStreamableBase.h"
    "game_IV/rage/phCollider.h"
    "game_IV/rage/phConstrainedCollider.h"
    "game_IV/rage/phInst.h"
    "game_IV/rage/ptxRule.h"
    "game_IV/rage/ptxSprite.h"
    "game_IV/rage/Quaternion.h"
    "game_IV/rage/scrProgram.cpp"
    "game_IV/rage/scrProgram.h"
    "game_IV/rage/scrThread.cpp"
    "game_IV/rage/scrThread.h"
    "game_IV/rage/sysArray.h"
    "game_IV/rage/sysMemAllocator.h"
    "game_IV/rage/sysUseAllocator.h"
    "game_IV/rage/Vector2.h"
    "game_IV/rage/Vector3.h"
    "game_IV/rage/Vector4.h"
)
source_group("game_IV\\rage" FILES ${game_IV__rage})

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
    ${game_IV}
    ${game_IV__rage}
)

################################################################################
# Target
################################################################################
add_library(${PROJECT_NAME} STATIC ${ALL_FILES})

use_props(${PROJECT_NAME} "${CMAKE_CONFIGURATION_TYPES}" "${DEFAULT_CXX_PROPS}")
set(ROOT_NAMESPACE plugin_iv)

set_target_properties(${PROJECT_NAME} PROPERTIES
    VS_GLOBAL_KEYWORD "Win32Proj"
)
################################################################################
# Target name
################################################################################
if("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Mixed Platforms")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_RELEASE "plugin_iv"
        TARGET_NAME_ZDEBUG  "plugin_iv_d"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_RELEASE "plugin_iv"
        TARGET_NAME_ZDEBUG  "plugin_iv_d"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_RELEASE "plugin_iv"
        TARGET_NAME_ZDEBUG  "plugin_iv_d"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    set_target_properties(${PROJECT_NAME} PROPERTIES
        TARGET_NAME_RELEASE "plugin_iv"
        TARGET_NAME_ZDEBUG  "plugin_iv_d"
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
        "${CMAKE_CURRENT_SOURCE_DIR}/game_IV;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_IV/rw;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared/game;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../safetyhook"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    target_include_directories(${PROJECT_NAME} PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/.;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_IV;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_IV/rw;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared/game;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../safetyhook"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    target_include_directories(${PROJECT_NAME} PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/.;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_IV;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_IV/rw;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../shared/game;"
        "${CMAKE_CURRENT_SOURCE_DIR}/../safetyhook"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    target_include_directories(${PROJECT_NAME} PUBLIC
        "${CMAKE_CURRENT_SOURCE_DIR}/.;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_IV;"
        "${CMAKE_CURRENT_SOURCE_DIR}/game_IV/rw;"
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
        "GTAIV;"
        "PLUGIN_SGV_CE;"
        "RAGE;"
        "_MBCS"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "Win32")
    target_compile_definitions(${PROJECT_NAME} PRIVATE
        "_CRT_SECURE_NO_WARNINGS;"
        "_CRT_NON_CONFORMING_SWPRINTFS;"
        "_SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING;"
        "_DX9_SDK_INSTALLED;"
        "GTAIV;"
        "PLUGIN_SGV_CE;"
        "RAGE;"
        "_MBCS"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x64")
    target_compile_definitions(${PROJECT_NAME} PRIVATE
        "_CRT_SECURE_NO_WARNINGS;"
        "_CRT_NON_CONFORMING_SWPRINTFS;"
        "_SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING;"
        "_DX9_SDK_INSTALLED;"
        "GTAIV;"
        "PLUGIN_SGV_CE;"
        "RAGE;"
        "_MBCS"
    )
elseif("${CMAKE_VS_PLATFORM_NAME}" STREQUAL "x86")
    target_compile_definitions(${PROJECT_NAME} PRIVATE
        "_CRT_SECURE_NO_WARNINGS;"
        "_CRT_NON_CONFORMING_SWPRINTFS;"
        "_SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING;"
        "_DX9_SDK_INSTALLED;"
        "GTAIV;"
        "PLUGIN_SGV_CE;"
        "RAGE;"
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

