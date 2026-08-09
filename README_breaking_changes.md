## v.1005 from 2026-08-10

- CAERadioTrackManager refector
	- Updated field names and offset validation of CAERadioTrackManager class and structs based on reversed classes.
*   **Structure: `tRadioSettings`**
    *   `m_djIndex[4]` & `field_10` replaced with `TrackQueue[5]`
    *   `trackId` renamed to `CurrTrackID`
    *   `field_18` renamed to `PrevTrackID`
    *   `trackPlayTime` renamed to `PlayTime`
    *   `trackLength` renamed to `TrackLengthMs`
    *   `field_24` renamed to `TrackFlags`
    *   `_pad` renamed to `_pad27`
    *   `currRadioBC_[4]` & `field_30` replaced with `TrackTypes[5]`
    *   `field_31` renamed to `CurrTrackType`
    *   `m_musicTrackIndices[10]` replaced with `PrevTrackType`, `TrackIndices[5]`, `CurrTrackIdx`, `PrevTrackIdx`, and `_pad[2]`

*   **Structure: `tRadioStationData`**
    *   `field_0`, `field_4`, `field_8` replaced with `m_aElapsed[3]`
    *   `m_nTimeRetuneStopped` renamed to `m_iTimeInPauseModeInMs`
    *   `lastPlayingTime` renamed to `m_iTimeInMs`
    *   `trackPlayTime` renamed to `m_iTrackPlayTime`
    *   `field_18`, `field_1C`, `field_20` replaced with `m_aTrackQueue[3]`
    *   `field_24`, `field_25`, `field_26` replaced with `m_aTrackTypes[3]`
    *   `lastGameClockDays` renamed to `m_nGameClockDays`
    *   `lastGameClockHours` renamed to `m_nGameClockHours`

*   **Structure: `CAERadioTrackManager`**
    *   `field_0` replaced with `m_bInitialised`
    *   `field_1` replaced with `m_bDisplayStationName`
    *   `field_2` replaced with `m_prev`
    *   `field_3` replaced with `m_bEnabledInPauseMode`
    *   `field_4` replaced with `m_bBassEnhance`
    *   `field_5` replaced with `m_bPauseMode`
    *   `field_8[14]` renamed to `m_nTracksInARow[14]`
    *   `m_nMonthDay` renamed to `m_nSavedGameClockDays`
    *   `m_nClockHours` renamed to `m_nSavedGameClockHours`
    *   `m_anPlayerStats[14]` renamed to `m_aListenTimes[14]`
    *   `field_58` renamed to `m_nSavedTimeMs`
    *   `field_5C` renamed to `m_nRetuneStartedTime`
    *   `field_64` renamed to `m_HwClientHandle`
    *   `field_68` renamed to `m_nMode`
    *   `field_74` replaced with `m_nSavedRadioStationId`
    *   `field_78` replaced with `m_iRadioStationMenuRequest`
    *   `field_7C` replaced with `m_iRadioStationScriptRequest`
    *   `field_80` replaced with `m_f80`
    *   `field_84` replaced with `m_f84`

## v.1004 from 2026-04-18

- III, VC, SA enums refactor
	- enum files were moved to new **enums\\** directory. To fix compilation errors go to **Project properties > C++ > Additional Include Directories** and add new entry like `$(PLUGIN_SDK_DIR)\Plugin_SA\game_sa\enums` (same way the `rw` directory is declared). Project with proper configuration can also be regenerated using PSDK installer app
	- some enums were moved from other headers into separated files in **enums\\** directory
	- III **ModelInfoType** renamed to **eModelInfoType**
	- III removed **eVehicleIndex.h**. Use **eModelID.h** instead
	- III, VC removed **eVehicleModel.h**. Use **eModelID.h** instead
	- III, VC **ePedType** values now are prefixed with **PED_TYPE_** instead of **PEDTYPE_** (to match other platforms and general convention)

- All platforms **CVector2D** class refactor
	- instead of multiple, platform specific implementations single, shared **CVector2D** was introduced
	- function **DotProduct** now has to be accessed as **CVector2D::Dot**
	- function **CrossProduct** now has to be accessed as **CVector2D::Cross**
	- some **CVector2D** methods might get slightly renamed, got extra **const**, **nodiscard** specifiers etc.

- All platforms **CVector** 
	- fixed discrepancy in spelling. Now "normali**z**e" is used in all function names
	- some methods received **nodiscard** specifier. Compilation error means bug in your code

- **CPed** heading related variables unification
	- III **m_vec2dMoved** renamed to **m_vecAnimMovingShift**
	- VC **m_fMovedX** and **m_fMovedY** converted to **m_vecAnimMovingShift**
	- III, VC **m_fRotationCur** renamed to **m_fHeadingCurrent**
	- SA **m_fCurrentRotation** renamed to **m_fHeadingCurrent**
	- III, VC **m_fRotationDest** renamed to **m_fHeadingGoal**
	- SA **m_fAimingRotation** renamed to **m_fHeadingGoal**

- III, VC **CPlaceable::GetHeading()** fixed to return Radians instead of degrees (to match SA GetHeading and all other angle-related functions, including SetHeading)

- SA **CPlaceable**
	- **GetMatrix()** now returns reference instead of pointer (to match other platforms). Nullptr could not be returned anyway
	- removed **GetPosition2D()** to match other platforms. Use `GetPosition().To2D()` instead

- VC **CColModel.h** member **m_colSphere** renamed to **m_boundSphere**

## v.1003 from 2026-03-28

- SA **CAutomobile**
	- members like **field_7F4** received proper names
	- **wheelsDistancesToGround1** renamed to **m_fWheelsSuspensionCompression**
	- **wheelsDistancesToGround2** renamed to **m_fWheelsSuspensionCompressionPrev**
	- **taxiAvaliable** replaced with **m_nAutomobileFlags**
	- **m_wVoodooSuspension** renamed to **m_wMiscComponentAnglePrev**
	- **wheelOffsetZ** is now part of **m_aSuspensionSpringLength** (fixed array start position)
	- **m_fCarTraction** renamed to **m_fExtraTractionMult**
	- **m_fUpDownLightAngle[0]** replaced with **m_fPropRotate**
	- **m_fUpDownLightAngle[1]** replaced with **m_fCumulativeDamage**
	- **pNitroParticle** renamed to **m_pNitroParticle**

- SA **CBike**
	- members like **field_615** received proper names
	- **m_nDamageFlags** renamed to **m_nBikeFlags**
	- **m_anWheelDamageState** renamed to **m_anWheelDamageState**
	- **m_afWheelRotationX** renamed to **m_aWheelPitchAngles**
	- **m_fWheelSpeed** renamed to **m_aWheelAngularVelocity**
	- **m_fCarTraction** renamed to **m_fExtraTractionMult**
	- **m_bPedLeftHandFixed** renamed to **m_nFixLeftHand**
	- **m_bPedRightHandFixed** renamed to **m_nFixRightHand**
	- **m_anWheelState** renamed to **m_wheelState**

- SA **CPed** member **m_nSpecialModelIndex** renamed to **m_StreamedScriptBrainToLoad**

- SA **CPhysical** members like **field_B8** received proper names

- SA **CVehicle** members like **field_518** received proper names

## v.1002 from 2025-12-09

- SA **CPedIntelligence** members like **field_CC** received proper names

## v.1001 from 2025-12-07

- All platforms **CVector** class refactor
	- instead of multiple, platform specific implementations single, shared **CVector** was introduced
	- function **DotProduct** now has to be accessed as **CVector::Dot**
	- function **CrossProduct** now has to be accessed as **CVector::Cross**
	- some **CVector** methods might get slightly renamed, got extra **const** specifiers etc.
