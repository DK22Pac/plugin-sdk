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
