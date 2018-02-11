vtable 0 //GTA3 
end
funcs
cdecl bool CShotInfo::AddShot(CEntity *creator, eWeaponType weaponType, CVector origin, CVector target) 0x55BD70
thiscall void CShotInfo::CShotInfo(void)  0x55C2C0
cdecl void CShotInfo::Initialise(void)    0x55BC60
cdecl void CShotInfo::Shutdown(void)      0x55BD50
cdecl void CShotInfo::Update(void)        0x55BFF0
end

vtable 0 //GTA3 
end
funcs
cdecl bool CProjectileInfo::AddProjectile(CEntity *creator, eWeaponType weaponType, CVector posn, float force)  0x55B030
thiscall void CProjectileInfo::CProjectileInfo(void)                                         0x55BC50
cdecl CProjectileInfo* CProjectileInfo::GetProjectileInfo(int index)                         0x55B010
cdecl void CProjectileInfo::Initialise(void)                                                 0x55ADF0
cdecl bool CProjectileInfo::IsProjectileInRange(float x1, float y1, float z1, float x2, float y2, float z2, bool bDestroy) 0x55BA50
cdecl void CProjectileInfo::RemoveAllProjectiles(void)                                       0x55BB80
cdecl bool CProjectileInfo::RemoveIfThisIsAProjectile(CObject *object)                       0x55BBD0
cdecl void CProjectileInfo::RemoveNotAdd(CEntity *creator, eWeaponType weaponType, CVector posn)                 0x55B770
cdecl void CProjectileInfo::RemoveProjectile(CProjectileInfo *info, CProjectile *projectileObject)               0x55B700
cdecl void CProjectileInfo::Shutdown(void)                                                   0x55AFF0
cdecl void CProjectileInfo::Update(void)                                                     0x55B7C0
end

vtable 0 //GTA3 
end
funcs
cdecl void CWorld::Add(CEntity *entity)                                                                                                                                   0x4AE930
cdecl void CWorld::AddParticles(void)                                                                                                                                     0x4B4010
cdecl void CWorld::CallOffChaseForArea(float x1, float y1, float x2, float y2)                                                                                            0x4B5530
cdecl void CWorld::CallOffChaseForAreaSectorListPeds(CPtrList &list, float x1, float y1, float x2, float y2, float, float, float, float)                                  0x4B5A60
cdecl void CWorld::CallOffChaseForAreaSectorListVehicles(CPtrList &list, float x1, float y1, float x2, float y2, float, float, float, float)                              0x4B57B0
cdecl bool CWorld::CameraToIgnoreThisObject(CEntity *entity)                                                                                                              0x4B5C30
cdecl void CWorld::ClearCarsFromArea(float x1, float y1, float z1, float x2, float y2, float z2)                                                                          0x4B50E0
cdecl void CWorld::ClearExcitingStuffFromArea(CVector const&point, float radius, uchar bRemoveProjectilesAndShadows)                                                      0x4B4E70
cdecl void CWorld::ClearForRestart(void)                                                                                                                                  0x4AE850
cdecl void CWorld::ClearPedsFromArea(float x1, float y1, float z1, float x2, float y2, float z2)                                                                          0x4B52B0
cdecl void CWorld::ClearScanCodes(void)                                                                                                                                   0x4B1F60
cdecl void CWorld::ExtinguishAllCarFiresInArea(CVector point, float radius)                                                                                               0x4B5460
cdecl float CWorld::FindGroundZFor3DCoord(float x, float y, float z, bool *outResult)                                                                                     0x4B3AE0
cdecl float CWorld::FindGroundZForCoord(float x, float y)                                                                                                                 0x4B3A80
cdecl void CWorld::FindMissionEntitiesIntersectingCube(CVector const&cornerA, CVector const&cornerB, short *outCount, short maxCount, CEntity **outEntities, bool vehicles, bool peds, bool objects)    0x4B3680
cdecl void CWorld::FindMissionEntitiesIntersectingCubeSectorList(CPtrList &list, CVector const&cornerA, CVector const&cornerB, short *outCount, short maxCount, CEntity **outEntities, bool vehiclesList, bool pedsList, bool objectsList)  0x4B3920
cdecl void CWorld::FindObjectsInRange(CVector const&point, float radius, bool b2D, short *outCount, short maxCount, CEntity **outEntities, bool buildings, bool vehicles, bool peds, bool objects, bool dummies)                    0x4B2200
cdecl void CWorld::FindObjectsInRangeSectorList(CPtrList &list, CVector const&point, float radius, bool b2D, short *outCount, short maxCount, CEntity **outEntities)      0x4B2540
cdecl void CWorld::FindObjectsIntersectingAngledCollisionBox(CColBox const&box, CMatrix const&transform, CVector const&point, float x1, float y1, float x2, float y2, short *outCount, short maxCount, CEntity **outEntities, bool buildings, bool vehicles, bool peds, bool objects, bool dummies) 0x4B3280
cdecl void CWorld::FindObjectsIntersectingAngledCollisionBoxSectorList(CPtrList &list, CColBox const&box, CMatrix const&transform, CVector const&poin, short *outCount, short maxCount, CEntity **outEntities)                  0x4B3590
cdecl void CWorld::FindObjectsIntersectingCube(CVector const&cornerA, CVector const&cornerB, short *outCount, short maxCount, CEntity **outEntities, bool buildings, bool vehicles, bool peds, bool objects, bool dummies)         0x4B2E70
cdecl void CWorld::FindObjectsIntersectingCubeSectorList(CPtrList &list, CVector const&cornerA, CVector const&cornerB, short *outCount, short maxCount, CEntity **outEntities) 0x4B3150
cdecl void CWorld::FindObjectsKindaColliding(CVector const&point, float radius, bool b2D, short *outCount, short maxCount, CEntity **outEntities, bool buildings, bool vehicles, bool peds, bool objects, bool dummies)             0x4B2A30
cdecl void CWorld::FindObjectsKindaCollidingSectorList(CPtrList &list, CVector const&point, float radius, bool b2D, short *outCount, short maxCount, CEntity **outEntities)     0x4B2D70
cdecl void CWorld::FindObjectsOfTypeInRange(uint modelId, CVector const&point, float radius, bool b2D, short *outCount, short maxCount, CEntity **outEntities, bool buildings, bool vehicles, bool peds, bool objects, bool dummies) 0x4B2600
cdecl void CWorld::FindObjectsOfTypeInRangeSectorList(uint modelId, CPtrList &list, CVector const&point, float radius, bool b2D, short *outCount, short maxCount, CEntity **outEntities)                                         0x4B2960
cdecl float CWorld::FindRoofZFor3DCoord(float x, float y, float z, bool *outResult)                                                                                       0x4B3B50
cdecl bool CWorld::GetIsLineOfSightClear(CVector const&origin, CVector const&target, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, bool doCameraIgnoreCheck)                      0x4AEAA0
cdecl bool CWorld::GetIsLineOfSightSectorClear(CSector &sector, CColLine const&line, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, bool doCameraIgnoreCheck)                      0x4B2000
cdecl bool CWorld::GetIsLineOfSightSectorListClear(CPtrList &list, CColLine const&line, bool doSeeThroughCheck, bool doCameraIgnoreCheck)                                 0x4B2160
cdecl void CWorld::Initialise(void)                                                                                                                                       0x4AE410
cdecl void CWorld::Process(void)                                                                                                                                          0x4B1A60
cdecl bool CWorld::ProcessLineOfSight(CVector const&origin, CVector const&target, CColPoint &outColPoint, CEntity *&outEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, bool doCameraIgnoreCheck)      0x4AF970
cdecl bool CWorld::ProcessLineOfSightSector(CSector &sector, CColLine const&line, CColPoint &outColPoint, float &maxTouchDistance, CEntity *&outEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, bool doCameraIgnoreCheck)  0x4B0A80
cdecl bool CWorld::ProcessLineOfSightSectorList(CPtrList &list, CColLine const&line, CColPoint &outColPoint, float &maxTouchDistance, CEntity *&outEntity, bool doSeeThroughCheck, bool doCameraIgnoreCheck)                    0x4B0C70
cdecl bool CWorld::ProcessVerticalLine(CVector const&origin, float distance, CColPoint &outColPoint, CEntity *&outEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, CStoredCollPoly *outCollPoly)       0x4B0DE0
cdecl bool CWorld::ProcessVerticalLineSector(CSector &sector, CColLine const&line, CColPoint &outColPoint, CEntity *&outEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck, CStoredCollPoly *outCollPoly) 0x4B0EF0
cdecl bool CWorld::ProcessVerticalLineSectorList(CPtrList &list, CColLine const&line, CColPoint &outColPoint, float &maxTouchDistance, CEntity *&outEntity, bool doSeeThroughCheck, CStoredCollPoly *outCollPoly)               0x4B1090
cdecl void CWorld::Remove(CEntity *entity)                                                                                                                                0x4AE9D0
cdecl void CWorld::RemoveEntityInsteadOfProcessingIt(CEntity *entity)                                                                                                     0x4B4E10
cdecl void CWorld::RemoveFallenCars(void)                                                                                                                                 0x4B4170
cdecl void CWorld::RemoveFallenPeds(void)                                                                                                                                 0x4B4060
cdecl void CWorld::RemoveReferencesToDeletedObject(CEntity *entity)                                                                                                       0x4B3BF0
cdecl void CWorld::RemoveStaticObjects(void)                                                                                                                              0x4B4D50
cdecl void CWorld::RepositionCertainDynamicObjects(void)                                                                                                                  0x4B42B0
cdecl void CWorld::RepositionOneObject(CEntity *entity)                                                                                                                   0x4B4300
cdecl void CWorld::SetAllCarsCanBeDamaged(bool enable)                                                                                                                    0x4B53F0
cdecl void CWorld::SetCarsOnFire(float x, float y, float z, float radius, CEntity *fireCreator)                                                                           0x4B3E90
cdecl void CWorld::SetPedsOnFire(float x, float y, float z, float radius, CEntity *fireCreator)                                                                           0x4B3D30
cdecl void CWorld::ShutDown(void)                                                                                                                                         0x4AE450
cdecl void CWorld::StopAllLawEnforcersInTheirTracks(void)                                                                                                                 0x4B5BC0
cdecl CEntity* CWorld::TestSphereAgainstSectorList(CPtrList &list, CVector sphereCenter, float sphereRadius, CEntity *ignoreEntity, bool doCameraIgnoreCheck)             0x4B4AC0
cdecl CEntity* CWorld::TestSphereAgainstWorld(CVector sphereCenter, float sphereRadius, CEntity *ignoreEntity, bool buildings, bool vehicles, bool peds, bool objects, bool dummies, bool doSeeThroughCheck)                      0x4B4710
cdecl void CWorld::TriggerExplosion(CVector const&point, float radius, float visibleDistance, CEntity *entity, bool processVehicleBombTimer)                              0x4B1140
cdecl void CWorld::TriggerExplosionSectorList(CPtrList &list, CVector const&point, float radius, float visibleDistance, CEntity *entity, bool processVehicleBombTimer)    0x4B1340
cdecl void CWorld::UseDetonator(CEntity *creator)                                                                                                                         0x4B4650
end

vtable 0 //GTA3 
end
funcs
cdecl void CCarAI::AddAmbulanceOccupants(CVehicle *vehicle)             0x415CE0
cdecl void CCarAI::AddFiretruckOccupants(CVehicle *vehicle)             0x415D00
cdecl void CCarAI::AddPoliceCarOccupants(CVehicle *vehicle)             0x415C60
cdecl void CCarAI::CarHasReasonToStop(CVehicle *vehicle)                0x415B00
cdecl char CCarAI::FindPoliceCarMissionForWantedLevel(void)             0x415E30
cdecl float CCarAI::FindPoliceCarSpeedForWantedLevel(CVehicle *vehicle) 0x415EB0
cdecl float CCarAI::FindSwitchDistanceClose(CVehicle *vehicle)          0x413E20
cdecl float CCarAI::FindSwitchDistanceFar(CVehicle *vehicle)            0x413E30
cdecl void CCarAI::GetCarToGoToCoors(CVehicle *vehicle, CVector *coors)  0x415B10
cdecl void CCarAI::MakeWayForCarWithSiren(CVehicle *vehicle)            0x416280
cdecl void CCarAI::MellowOutChaseSpeed(CVehicle *vehicle)               0x416050
cdecl void CCarAI::TellCarToBlockOtherCar(CVehicle *vehicle, CVehicle *blockVehicle) 0x415DE0
cdecl void CCarAI::TellCarToRamOtherCar(CVehicle *vehicle, CVehicle *ramVehicle)     0x415D90
cdecl void CCarAI::TellOccupantsToLeaveCar(CVehicle *vehicle)           0x415D20
cdecl void CCarAI::UpdateCarAI(CVehicle *vehicle)                       0x413E50
end

vtable 0 //GTA3 
end
funcs
cdecl void CGarages::ActivateGarage(short index)                                                   0x426C60
//return CGarages::NumGarages++
cdecl int CGarages::AddOne(CVector pointFront, CVector pointBack, uchar type, uint vehicleModelIndex) 0x421FA0
//return CGarages::bCamShouldBeOutside
cdecl bool CGarages::CameraShouldBeOutside(void)                                                   0x427BC0
cdecl void CGarages::ChangeGarageType(short index, uchar type, uint vehicleModelIndex)             0x4222A0
cdecl void CGarages::CloseHideOutGaragesBeforeSave(void)                                           0x428130
cdecl int CGarages::CountCarsInHideoutGarage(uchar type)                                           0x4281E0
cdecl void CGarages::DeActivateGarage(short index)                                                 0x426C40
cdecl float CGarages::FindDoorHeightForMI(uint vehicleModelIndex)                                  0x427C10
cdecl int CGarages::FindMaxNumStoredCarsForGarage(uchar type)                                      0x428230
cdecl void CGarages::GivePlayerDetonator(void)                                                     0x427BD0
cdecl bool CGarages::HasCarBeenCrushed(int vehicleModelIndex)                                      0x4275A0
cdecl bool CGarages::HasCarBeenDroppedOffYet(short index)                                          0x426C20
cdecl bool CGarages::HasImportExportGarageCollectedThisCar(short index, int vehicleModelIndex)     0x426CB0
cdecl bool CGarages::HasResprayHappened(short index)                                               0x4274F0
cdecl bool CGarages::HasThisCarBeenCollected(short index, int vehicleModelIndex)                   0x426D50
cdecl void CGarages::Init(void)                                                                    0x421C60
cdecl bool CGarages::IsCarSprayable(CAutomobile *car)                                              0x426700
cdecl bool CGarages::IsGarageClosed(short index)                                                   0x426D20
cdecl bool CGarages::IsGarageOpen(short index)                                                     0x426CF0
cdecl bool CGarages::IsModelIndexADoor(uint modelIndexDoor)                                        0x428D90
cdecl bool CGarages::IsPointInAGarageCameraZone(CVector point)                                     0x427AB0
cdecl bool CGarages::IsPointWithinAnyGarage(CVector &point)                                        0x428320
cdecl bool CGarages::IsPointWithinHideOutGarage(CVector &point)                                    0x428260
cdecl bool CGarages::IsThisCarWithinGarageArea(short index, CEntity *entity)                       0x427570
cdecl void CGarages::Load(uchar *bufferPointer, uint structSize)                                   0x428940
cdecl void CGarages::PlayerArrestedOrDied(void)                                                    0x427F60
cdecl void CGarages::PrintMessages(void)                                                           0x426310
cdecl int CGarages::QueryCarsCollected(short index)                                                0x426CA0
cdecl void CGarages::Save(uchar *bufferPointer, uint *structSize)                                  0x4284E0
cdecl void CGarages::SetAllDoorsBackToOriginalHeight(void)                                         0x4283D0
cdecl void CGarages::SetGarageDoorToRotate(short index)                                            0x427510
cdecl void CGarages::SetLeaveCameraForThisGarage(short index)                                      0x427550
cdecl void CGarages::SetTargetCarForMissionGarage(short index, CAutomobile *car)                   0x426BD0
cdecl void CGarages::Shutdown(void)                                                                0x421E10
cdecl void CGarages::TriggerMessage(char *text, short numberInString, ushort time, short numberInString2) 0x426B20
cdecl void CGarages::Update(void)                                                                  0x421E40
end

vtable 0 //GTA3 
end
funcs
thiscall void CGarage::BuildRotatedDoorMatrix(CEntity *door, float angle)              0x4267C0
thiscall float CGarage::CalcDistToGarageRectangleSquared(float x, float y)             0x426F50
thiscall float CGarage::CalcSmallestDistToGarageDoorSquared(float x, float y)          0x426FE0
thiscall bool CGarage::CenterCarInGarage(CVehicle *vehicle)                            0x428000
thiscall eGarageState CGarage::CloseThisGarage(void)                                   0x426F40
thiscall int CGarage::CountCarsWithCenterPointWithinGarage(CEntity *vehicle)           0x426130
thiscall bool CGarage::DoesCraigNeedThisCar(int modelIndex)                            0x426D90
thiscall bool CGarage::EntityHasASphereWayOutsideGarage(CEntity *entity, float radius) 0x425B30
thiscall void CGarage::FindDoorsEntities(void)                                         0x427060
thiscall char CGarage::FindDoorsEntitiesSectorList(CPtrList &list, bool)               0x427300
thiscall bool CGarage::HasCraigCollectedThisCar(int modelIndex)                        0x426DF0
thiscall bool CGarage::IsAnyCarBlockingDoor(void)                                      0x425FB0
thiscall bool CGarage::IsAnyOtherCarTouchingGarage(CVehicle *vehicle)                  0x425C90
thiscall bool CGarage::IsAnyOtherPedTouchingGarage(CPed *ped)                          0x425E20
thiscall bool CGarage::IsEntityEntirelyInside(CEntity *entity)                         0x425370
thiscall bool CGarage::IsEntityEntirelyInside3D(CEntity *entity, float radius)         0x4254F0
thiscall bool CGarage::IsEntityEntirelyOutside(CEntity *entity, float radius)          0x425740
thiscall bool CGarage::IsEntityTouching3D(CEntity *entity)                             0x425950
thiscall bool CGarage::IsGarageEmpty(void)                                             0x425890
thiscall bool CGarage::IsPlayerOutsideGarage(void)                                     0x425910
thiscall bool CGarage::IsStaticPlayerCarEntirelyInside(void)                           0x4251C0
thiscall void CGarage::Load(uchar *bufferPointer, uint structSize)                     0x4288E0
thiscall bool CGarage::MarkThisCarAsCollectedForCraig(int modelIndex)                  0x426E50
thiscall eGarageState CGarage::OpenThisGarage(void)                                    0x426F20
thiscall void CGarage::PlayerArrestedOrDied(void)                                      0x427FC0
thiscall void CGarage::RefreshDoorPointers(bool)                                       0x426980
thiscall void CGarage::RemoveCarsBlockingDoorNotInside(void)                           0x4261F0
thiscall bool CGarage::RestoreCarsForThisHideOut(CStoredCar *car)                      0x427A40
thiscall void CGarage::StoreAndRemoveCarsForThisHideOut(CStoredCar *car, int count)    0x427840
thiscall void CGarage::TidyUpGarage(void)                                              0x427C30
thiscall void CGarage::TidyUpGarageClose(void)                                         0x427D90
thiscall void CGarage::Update(void)                                                    0x4222D0
thiscall void CGarage::UpdateCrusherAngle(void)                                        0x4268A0
thiscall void CGarage::UpdateCrusherShake(float x, float y)                            0x4268E0
thiscall void CGarage::UpdateDoorsHeight(void)                                         0x426730
end

vtable 0 //VC
end
funcs
cdecl void CRestart::LoadAllRestartPoints(uchar *bufferPointer, uint structSize)       0x4421D0
cdecl void CRestart::SaveAllRestartPoints(uchar *bufferPointer, uint *structSize)      0x4425B0
cdecl void CRestart::CancelOverrideRestart(void)                                       0x4429D0
cdecl void CRestart::OverrideNextRestart(CVector const& point, float angle)            0x4429E0
cdecl void CRestart::FindClosestPoliceRestartPoint(CVector const& point, CVector* storedPoint, float *storedAngle)   0x442A10
cdecl void CRestart::FindClosestHospitalRestartPoint(CVector const& point, CVector* storedPoint, float *storedAngle) 0x442CD0
cdecl void CRestart::AddPoliceRestartPoint(CVector const& point, float angle)          0x442FC0
cdecl void CRestart::AddHospitalRestartPoint(CVector const& point, float angle)        0x443010
cdecl void CRestart::Initialise(void)                                                  0x443060
end

vtable 0 //GTA3
end
funcs
cdecl void CRestart::Initialise(void)                                                  0x435E20
cdecl void CRestart::AddHospitalRestartPoint(CVector const& point, float angle)        0x436100
cdecl void CRestart::AddPoliceRestartPoint(CVector const& point, float angle)          0x436150
cdecl void CRestart::FindClosestHospitalRestartPoint(CVector const& point, CVector* storedPoint, float *storedAngle) 0x4361A0
cdecl void CRestart::FindClosestPoliceRestartPoint(CVector const& point, CVector* storedPoint, float *storedAngle)   0x436450
cdecl void CRestart::OverrideNextRestart(CVector const& point, float angle)            0x4366C0
cdecl void CRestart::CancelOverrideRestart(void)                                       0x4366F0
cdecl void CRestart::SaveAllRestartPoints(uchar *bufferPointer, uint *structSize)      0x436700
cdecl void CRestart::LoadAllRestartPoints(uchar *bufferPointer, uint structSize)       0x436B20
end

vtable 0 //VC
end
funcs
cdecl bool CSceneEdit::SelectWeapon(void)   0x6032E0
cdecl bool CSceneEdit::SelectVehicle(void)  0x603520
cdecl bool CSceneEdit::SelectActor2(void)   0x603700
cdecl bool CSceneEdit::SelectActor(void)    0x603980
cdecl void CSceneEdit::PlayBack(void)       0x603C10
cdecl void CSceneEdit::ProcessCommand(void) 0x604500
cdecl void CSceneEdit::Draw(void)           0x605DB0
cdecl void CSceneEdit::Update(void)         0x606270
cdecl void CSceneEdit::ReInitialise(void)   0x6062F0
cdecl void CSceneEdit::InitPlayBack(void)   0x606470
cdecl void CSceneEdit::Initialise(void)     0x6065B0
thiscall void CMovieData::CMovieData(void)  0x606720
end

vtable 0 //GTA3
end
funcs
// PrevOrNextModelIndex: -1 (prev), 1 (next) 
cdecl int NextValidModelId(int currentModelIndex, int PrevOrNextModelIndex) 0x585050
cdecl void CSceneEdit::LoadMovie(void)          0x5850A0
cdecl void CSceneEdit::SaveMovie(void)          0x585110
cdecl void CSceneEdit::Initialise(void)         0x585170
cdecl void CSceneEdit::InitPlayBack(void)       0x5852C0
cdecl void CSceneEdit::ReInitialise(void)       0x5853F0
cdecl void CSceneEdit::Update(void)             0x585570
cdecl void CSceneEdit::Draw(void)               0x5855F0
cdecl void CSceneEdit::ProcessCommand(void)     0x585BB0
cdecl void CSceneEdit::PlayBack(void)           0x587200
cdecl void CSceneEdit::ClearForNewCommand(void) 0x587AF0
cdecl bool CSceneEdit::SelectActor(void)        0x587B30
cdecl bool CSceneEdit::SelectActor2(void)       0x587DC0
cdecl bool CSceneEdit::SelectVehicle(void)      0x588040
cdecl bool CSceneEdit::SelectWeapon(void)       0x588220
thiscall void CMovieData::CMovieData(void)      0x588480
end

vtable 0 //GTA3
end
funcs
thiscall void CPointLight::CPointLight(void) 0x511930
cdecl void CPointLights::AddLight(uchar lightType, CVector point, CVector direction, float radius, float red, float green, float blue, uchar fogType, bool generateExtraShadows) 0x510790
cdecl float CPointLights::GenerateLightsAffectingObject(CVector *point) 0x510960
cdecl void CPointLights::RemoveLightsAffectingObject(void)              0x510C20
cdecl void CPointLights::RenderFogEffect(void)                          0x510C30
end

vtable 0 //VC
end
funcs
thiscall void CRegisteredMotionBlurStreak::Render(void)                               0x572660
thiscall void CRegisteredMotionBlurStreak::CRegisteredMotionBlurStreak(void)          0x575150
cdecl void CMotionBlurStreaks::RegisterStreak(uint id, uchar red, uchar green, uchar blue, CVector leftPoint, CVector rightPoint) 0x572800
cdecl void CMotionBlurStreaks::Render(void)                                           0x572920
end

vtable 0 //VC
end
funcs
thiscall void CBrightLight::CBrightLight(void)  0x575140
cdecl void CBrightLights::RegisterOne(CVector posn, CVector right, CVector up, CVector at, uchar red, uchar green, uchar blue, uchar alpha) 0x571820
cdecl void CBrightLights::Render(void)            0x5719B0
end

vtable 0 //VC
end
funcs
thiscall void CRegisteredShinyText::CRegisteredShinyText(void) 0x575130
cdecl void CShinyTexts::Render(void)         0x571240
end

vtable 0 //VC
end
funcs
cdecl void CBulletInfo::AddBullet(CEntity *creator, eWeaponType weaponType, CVector position, CVector velocity) 0x5C47C0
thiscall void CBulletInfo::CBulletInfo(void)                                     0x5C4B10
cdecl void CBulletInfo::Initialise(void)                                         0x5C48C0
cdecl void CBulletInfo::Shutdown(void)                                           0x5C48A0
cdecl void CBulletInfo::TestForSniperBullet(float x1, float y1, float z1, float x2, float y2, float z2) 0x5C3B20
cdecl void CBulletInfo::Update(void)                                             0x5C3DE0
end

vtable 0 //GTA III
end
funcs
thiscall void CBulletTrace::Update(void)          0x519270
cdecl void CBulletTraces::Update(void)            0x519240
cdecl void CBulletTraces::Render(void)            0x518F20
cdecl void CBulletTraces::Init(void)              0x518DE0
thiscall void CBulletTrace::CBulletTrace(void)    0x51C390
cdecl void CBulletTraces::AddTrace(CVector *origin, CVector *target) 0x518E90
end

vtable 0 //GTA III
end
funcs
cdecl void CBulletInfo::AddBullet(CEntity *creator, eWeaponType weaponType, CVector position, CVector velocity) 0x558470
thiscall void CBulletInfo::CBulletInfo(void)                                     0x559020
cdecl void CBulletInfo::Initialise(void)                                         0x558220
cdecl void CBulletInfo::Shutdown(void)                                           0x558450
cdecl bool CBulletInfo::TestForSniperBullet(float x1, float y1, float z1, float x2, float y2, float z2) 0x558D40
cdecl void CBulletInfo::Update(void)                                             0x558550
end

vtable 0 //GTA III
end
funcs
thiscall void CRegisteredMotionBlurStreak::Update(void) 0x519580
thiscall void CRegisteredMotionBlurStreak::Render(void) 0x519600
thiscall void CRegisteredMotionBlurStreak::CRegisteredMotionBlurStreak(void) 0x51C350
end

vtable 0 //GTA III
end
funcs
cdecl void CMotionBlurStreaks::Init(void)                  0x519330
cdecl void CMotionBlurStreaks::RegisterStreak(uint id, uchar red, uchar green, uchar blue, CVector leftPoint, CVector rightPoint) 0x519460
cdecl void CMotionBlurStreaks::Render(void)                0x519390
cdecl void CMotionBlurStreaks::Update(void)                0x519360
end

vtable 0 //GTA III
end
funcs
thiscall void CBrightLight::CBrightLight(void)           0x51C340
cdecl void CBrightLights::Init(void)                     0x5197A0
cdecl void CBrightLights::Render(void)                   0x5197B0
cdecl void CBrightLights::RenderOutGeometryBuffer(void)  0x51A3B0
cdecl void CBrightLights::RegisterOne(CVector posn, CVector right, CVector up, CVector at, uchar red, uchar green, uchar blue, uchar alpha) 0x51A410
end

vtable 0 //GTA III
end
funcs
thiscall void CRegisteredShinyText::CRegisteredShinyText(void)  0x51C330
cdecl void CShinyTexts::Init(void)                       0x51A5A0
cdecl void CShinyTexts::RegisterOne(CVector cornerAA, CVector cornerBA, CVector cornerBB, CVector cornerAB, float u1, float v1, float u2, float v2, float u3, float v3, float u4, float v4, uchar red, uchar green, uchar blue, uchar alpha, float maxDistance) 0x51AAB0
cdecl void CShinyTexts::Render(void)                     0x51A5B0
cdecl void CShinyTexts::RenderOutGeometryBuffer(void)    0x51AA50
end

vtable 0 //GTA III
end
funcs
cdecl void CTrafficLights::DisplayActualLight(CEntity *entity)                   0x455800
cdecl uchar CTrafficLights::FindTrafficLightType(CEntity *entity)                0x4564A0
cdecl uchar CTrafficLights::LightForCars1(void)                                  0x455760
cdecl uchar CTrafficLights::LightForCars2(void)                                  0x455790
cdecl uchar CTrafficLights::LightForPeds(void)                                   0x4557D0
cdecl uint CTrafficLights::ScanForLightsOnMap(void)                              0x454F40
cdecl bool CTrafficLights::ShouldCarStopForBridge(CVehicle *vehicle)             0x456460
cdecl bool CTrafficLights::ShouldCarStopForLight(CVehicle *vehicle, bool enable) 0x455350
end

vtable 0 //GTA III
end
funcs
// returns random float in range [min;max)
cdecl float CGeneral::GetRandomNumberInRange(float min, float max) 0x54A520
// returns random int in range [min;max)
cdecl uint CGeneral::GetRandomNumberInRange(int min, int max)      0x54A4C0
// returns random int in range 0-32767
cdecl uint CGeneral::GetRandomNumber(void)                         0x54A4B0
end

vtable 0 //GTA III
end
funcs
thiscall void CFireManager::CFireManager(void)                                     0x479290
thiscall void CFireManager::ExtinguishPoint(CVector point, float range)            0x479DB0
thiscall CFire* CFireManager::FindFurthestFire_NeverMindFireMen(CVector, float, float)               0x479430
thiscall CFire* CFireManager::FindNearestFire(CVector position, float)            0x479340
thiscall CFire* CFireManager::GetNextFreeFire(void)                                0x4792E0
thiscall bool CFireManager::IsScriptFireExtinguished(short fireIndex)              0x479FC0
thiscall void CFireManager::RemoveAllScriptFires(void)                             0x47A000
thiscall void CFireManager::RemoveScriptFire(short fireIndex)                      0x479FE0
thiscall void CFireManager::SetScriptFireAudio(short fireIndex, bool enable)       0x47A040
thiscall void CFireManager::StartFire(CEntity *target, CEntity *creator, float size, uchar)           0x479590
thiscall void CFireManager::StartFire(CVector point, float size, uchar)            0x479500
thiscall int CFireManager::StartScriptFire(CVector const& point, CEntity *target, float size, uchar)  0x479E60
thiscall void CFireManager::Update(void)                                           0x479310
thiscall void CFireManager::~CFireManager()                                        0x4792C0
end

vtable 0 //GTA III
end
funcs
thiscall void CFire::CFire(void)          0x479220
thiscall void CFire::Extinguish(void)     0x479D40
thiscall void CFire::ProcessFire(void)    0x4798D0
thiscall void CFire::ReportThisFire(void) 0x4798B0
thiscall void CFire::~CFire(void)         0x479280
end

vtable 0 //GTA III
end
funcs
cdecl void CTheScripts::Init(void)                                           0x438790
cdecl bool CTheScripts::IsPedStopped(CPed *ped)                              0x454670
cdecl bool CTheScripts::IsPlayerOnAMission(void)                             0x439410
cdecl bool CTheScripts::IsPlayerStopped(CPlayerInfo *info)                   0x4546C0
cdecl bool CTheScripts::IsVehicleStopped(CVehicle *vehicle)                  0x454770
cdecl void CTheScripts::CleanUpThisPed(CPed *ped)                            0x4547A0
cdecl void CTheScripts::CleanUpThisObject(CObject *object)                   0x454910
cdecl void CTheScripts::CleanUpThisVehicle(CVehicle *vehicle)                0x4548D0
cdecl void CTheScripts::ClearSpaceForMissionEntity(CVector const &position, CEntity *entity) 0x454060
end

vtable 0 //GTA III
end
funcs
cdecl void CStreaming::RequestModel(int modelIndex, int flags)                                  0x407EA0
cdecl void CStreaming::LoadRequestedModels(void)                                                0x40A390
cdecl void CStreaming::Init(void)                                                               0x406430
cdecl void CStreaming::FlushChannels(void)                                                      0x40A610
cdecl void CStreaming::FlushRequestList(void)                                                   0x40A680
cdecl int CStreaming::GetAvailableVehicleSlot(void)                                             0x40B160
cdecl bool CStreaming::IsTxdUsedByRequestedModels(int index)                                    0x4094C0
cdecl void CStreaming::LoadAllRequestedModels(bool onlyQuickRequests)                           0x40A440
cdecl void CStreaming::RemoveModel(int modelIndex)                                              0x408830
cdecl bool CStreaming::RemoveLeastUsedModel(void)                                               0x4089B0
cdecl bool CStreaming::RemoveLoadedVehicle(void)                                                0x40B180
cdecl void CStreaming::RemoveAllUnusedModels(void)                                              0x408940
cdecl void CStreaming::RemoveCurrentZonesModels(void)                                           0x40AD00
// empty function
cdecl void CStreaming::RemoveUnusedModelsInLoadedList(void)                                     0x4089A0
cdecl void CStreaming::RequestModelStream(int streamnum)                                        0x40A060
cdecl void CStreaming::RequestSpecialChar(int index, char const* txdname, int modelrequestflag) 0x40ADA0
cdecl void CStreaming::RequestSpecialModel(int slot, char const* name, int modelrequestflag)    0x40A890
cdecl void CStreaming::RequestSubway(void)                                                      0x407FD0
cdecl void CStreaming::SetMissionDoesntRequireModel(int modelIndex)                             0x40A820
cdecl void CStreaming::SetMissionDoesntRequireSpecialChar(int index)                            0x40ADE0
cdecl void CStreaming::SetModelIsDeletable(int modelIndex)                                      0x40A790
cdecl void CStreaming::SetModelTxdIsDeletable(int modelIndex)                                   0x40A800
cdecl void CStreaming::Shutdown(void)                                                           0x406C80
cdecl void CStreaming::StreamVehiclesAndPeds(void)                                              0x40AE60
cdecl void CStreaming::Update(void)                                                             0x4076C0
// empty function
cdecl void CStreaming::UpdateMemoryUsed(void)                                                   0x4076B0
cdecl void CStreaming::AddModelsToRequestList(CVector const& point)                 0x4078F0
cdecl void CStreaming::AddToLoadedVehiclesList(int vehicleId)                       0x40B060
cdecl bool CStreaming::ConvertBufferToObject(char *pFileContect, int modelIndex)    0x409740
cdecl void CStreaming::DeleteAllRwObjects(void)                                     0x407390
cdecl void CStreaming::DeleteFarAwayRwObjects(CVector const& point)                 0x407070
cdecl void CStreaming::DeleteRwObjectsAfterDeath(CVector const& point)              0x407400
cdecl void CStreaming::DeleteRwObjectsBehindCamera(int size)                        0x408A60
cdecl bool CStreaming::DeleteRwObjectsBehindCameraInSectorList(CPtrList &list, int size) 0x409340
cdecl void CStreaming::DeleteRwObjectsInOverlapSectorList(CPtrList &list, int, int) 0x4075A0
cdecl void CStreaming::DeleteRwObjectsInSectorList(CPtrList &list)                  0x407560
cdecl bool CStreaming::DeleteRwObjectsNotInFrustumInSectorList(CPtrList &list, int size) 0x4093C0
cdecl bool CStreaming::FinishLoadingLargeFile(char *FileName, int modelIndex)       0x409580
cdecl uint CStreaming::GetCdImageOffset(int)                                        0x409FF0
cdecl int CStreaming::GetNextFileOnCd(int, bool)                                    0x409E50
cdecl bool CStreaming::HasSpecialCharLoaded(int modelIndex)                         0x40ADC0
cdecl void CStreaming::HaveAllBigBuildingsLoaded(eLevelName levelName)              0x408280
cdecl void CStreaming::IHaveUsedStreamingMemory(void)                               0x409BD0
// empty function
cdecl void CStreaming::ImGonnaUseStreamingMemory(void)                              0x409BC0
cdecl bool CStreaming::IsObjectInCdImage(int)                                       0x407E70
cdecl void CStreaming::LoadCdDirectory(char const* archivename, int archiveID)      0x406DA0
cdecl void CStreaming::LoadCdDirectory(void)                                        0x406CC0
cdecl void CStreaming::LoadInitialPeds(void)                                        0x40AA00
cdecl void CStreaming::LoadInitialVehicles(void)                                    0x40ADF0
cdecl void CStreaming::LoadScene(CVector const& point)                              0x40A6D0
cdecl void CStreaming::MakeSpaceFor(int size)                                       0x409B70
cdecl void CStreaming::MemoryCardLoad(uchar *, uint)                                0x40B250
cdecl void CStreaming::MemoryCardSave(uchar *, uint *)                              0x40B210
cdecl void CStreaming::ProcessEntitiesInSectorList(CPtrList &list)                  0x407DD0
cdecl void CStreaming::ProcessEntitiesInSectorList(CPtrList &list, float x1, float y1, float z1, float x2, float y2, float z2) 0x407C50
cdecl bool CStreaming::ProcessLoadingChannel(int channelindex)                      0x409BE0
cdecl void CStreaming::RemoveBigBuildings(eLevelName levelName)                     0x408680
cdecl void CStreaming::RemoveBuildings(eLevelName levelName)                        0x4083D0
cdecl void CStreaming::RemoveIslandsNotUsed(eLevelName levelName)                   0x408780
cdecl bool CStreaming::RemoveReferencedTxds(int)                                    0x409450
cdecl void CStreaming::RemoveUnusedBigBuildings(eLevelName levelName)               0x408640
cdecl void CStreaming::RemoveUnusedBuildings(eLevelName levelName)                  0x4083A0
cdecl void CStreaming::RequestBigBuildings(eLevelName levelName)                    0x408190
cdecl void CStreaming::RequestIslands(eLevelName levelName)                         0x408210
cdecl void CStreaming::RetryLoadFile(int streamnum)                                 0x4077F0
cdecl void CStreaming::StreamZoneModels(CVector const& point)                       0x40AA30
cdecl void DeleteIsland(CEntity *entity)                                            0x408740
end

vtable 0 //GTA III
end
funcs
// Draw sun
cdecl void CCoronas::DoSunAndMoon(void)                                                                                                0x4FA380
// Initialises coronas
cdecl void CCoronas::Init(void)                                                                                                        0x4F9F90
cdecl void CCoronas::RegisterCorona(uint id, uchar red, uchar green, uchar blue, uchar alpha, CVector const& posn, float radius, float farClip, RwTexture *, uchar, uchar, uchar, uchar, float) 0x4FA0E0
cdecl void CCoronas::RegisterCorona(uint id, uchar red, uchar green, uchar blue, uchar alpha, CVector const& posn, float radius, float farClip, uchar, uchar, uchar, uchar, uchar, float) 0x4FA080
// Renders coronas
cdecl void CCoronas::Render(void)                                                                                                      0x4F8FB0
// Renders coronas reflections on a wet ground
cdecl void CCoronas::RenderReflections(void)                                                                                           0x4F9B40
// Terminates coronas
cdecl void CCoronas::Shutdown(void)                                                                                                    0x4FA050
// Updates coronas
cdecl void CCoronas::Update(void)                                                                                                      0x4F8EC0
cdecl void CCoronas::UpdateCoronaCoors(uint id, CVector const& posn, float farClip, float angle) 0x4FA2D0
thiscall void CRegisteredCorona::CRegisteredCorona(void) 0x4FADE0
end

vtable 0
end
funcs
cdecl bool CCustomCarPlateMgr::Initialise(void)                                            0x6FD500
cdecl bool CCustomCarPlateMgr::GeneratePlateText(char *plateTextBuf,int length)                               0x6FD5B0
cdecl bool CCustomCarPlateMgr::Shutdown(void)                                              0x6FD720
cdecl uchar CCustomCarPlateMgr::GetMapRegionPlateDesign(void)                               0x6FD7A0
cdecl void GetCharacterPositionInCharSet(char c, uint &outColumn, uint &outRow)                                                   0x6FD7C0
cdecl bool CCustomCarPlateMgr::LoadPlatecharsetDat(char const*filename,uchar *data,int,int)            0x6FDC00
cdecl bool RenderLicenseplateTextToRaster(char* text, RwRaster* charsetRaster, void *palette, RwRaster* resultRaster)                                                  0x6FDD70
cdecl RpMaterial* CCustomCarPlateMgr::SetupMaterialPlatebackTexture(RpMaterial *material,uchar plateType)           0x6FDE50
cdecl RwTexture* CCustomCarPlateMgr::CreatePlateTexture(char *text,uchar plateType)                            0x6FDEA0
// 'data' is a pointer to RpGeometry
cdecl RpMaterial* MaterialUpgradeSetCarplateTextureCB(RpMaterial *material, void *data)                                             0x6FDF50
// 'data' is unused
cdecl RpAtomic* AtomicUpgradeSetCarplateTextureCB(RpAtomic *atomic, void *data)                                               0x6FDFC0
cdecl bool CCustomCarPlateMgr::SetupClumpAfterVehicleUpgrade(RpClump *clump,RpMaterial *plateMaterial,uchar plateType) 0x6FDFE0
cdecl RpMaterial* CCustomCarPlateMgr::SetupMaterialPlateTexture(RpMaterial *material,char *plateText,uchar plateType)        0x6FE020
// 'data' is a plate text (char *)
cdecl RpMaterial* MaterialSetCarplateTextureCB(RpMaterial *material, void *data)                                                    0x6FE060
// 'data' is a plate text (char *)
cdecl RpAtomic* AtomicSetCarplateTextureCB(RpAtomic *atomic, void *data)                                                      0x6FE0D0
cdecl RpMaterial* CCustomCarPlateMgr::SetupClump(RpClump *clump,char *plateText,uchar plateType)                          0x6FE0F0
end

vtable 0
end
funcs
cdecl void CClouds::Shutdown(void)                                                                       0x712FA0
cdecl void CClouds::Update(void)                                                                         0x712FF0
cdecl void CClouds::SetUpOneSkyPoly(CVector vert1pos,CVector vert2pos,CVector vert3pos,CVector vert4pos,uchar topRed,uchar topGreen,uchar topBlue,uchar bottomRed,uchar bottomGreen,uchar bottomBlue) 0x713060
cdecl void CClouds::VolumetricCloudsInit(void)                                                           0x7131C0
cdecl int CClouds::VolumetricClouds_GetFirstFreeSlot(void)                                              0x7135C0
cdecl void CClouds::VolumetricClouds_Delete(int vcSlotIndex)                                                         0x7135F0
cdecl float CClouds::VolumetricCloudsGetMaxDistance(void)                                                 0x713630
cdecl void CClouds::MovingFogInit(void)                                                                  0x713660
cdecl float CClouds::MovingFog_GetFXIntensity(void)                                                       0x7136D0
cdecl CVector CClouds::MovingFog_GetWind(void)                                                              0x7136E0
cdecl int CClouds::MovingFog_GetFirstFreeSlot(void)                                                     0x713710
cdecl void CClouds::MovingFog_Delete(int fogSlotIndex)                                                                0x713730
cdecl void CClouds::MovingFog_Create(CVector *posn)                                                          0x713760
cdecl void CClouds::Init(void)                                                                           0x7138D0
cdecl void CClouds::Render(void)                                                                         0x713950
cdecl void CClouds::RenderSkyPolys(void)                                                                 0x714650
cdecl void CClouds::RenderBottomFromHeight(void)                                                         0x7154B0
cdecl void CClouds::VolumetricClouds_Create(CVector *posn)                                                   0x715F40
cdecl void CClouds::VolumetricCloudsRender(void)                                                         0x716380
cdecl void CClouds::MovingFog_Update(void)                                                               0x716B10
cdecl void CClouds::MovingFogRender(void)                                                                0x716C90
end

vtable 0
end
funcs
cdecl void CCredits::Render(void)                                            0x53D5B0
cdecl void CCredits::PrintCreditText(float scaleX,float scaleY,ushort *text,uint &position,float currentOffset,bool highlighted) 0x5A8660
cdecl void CCredits::PrintCreditSpace(float spaceSize,uint &position)                          0x5A87C0
cdecl void CCredits::RenderCredits(void)                                     0x5A87F0
cdecl void CCredits::Start(void)                                             0x7170E0
cdecl void CCredits::Stop(void)                                              0x717100
end

vtable 0
end
funcs
cdecl void CBirds::Init(void)                                        0x711EC0
cdecl int CBirds::CreateNumberOfBirds(CVector pos,CVector destination,int count,int birdType,bool checkObstacles) 0x711EF0
cdecl void CBirds::Shutdown(void)                                    0x712300
cdecl void CBirds::Update(void)                                      0x712330
cdecl void CBirds::Render(void)                                      0x712810
cdecl void CBirds::HandleGunShot(CVector const*pointA,CVector const*pointB)      0x712E40
end

vtable 0
end
funcs
cdecl void CPools::Initialise(void)                     0x4A1770
cdecl void CPools::ShutDown(void)                       0x4A1880
cdecl void CPools::CheckPoolsEmpty(void)                0x4A1A50
cdecl void CPools::GetPedRef(CPed *ped)                    0x4A1A80
cdecl CPed* CPools::GetPed(int handle)                          0x4A1AA0
cdecl CVehicle* CPools::GetVehicleRef(CVehicle *vehicle)            0x4A1AC0
cdecl void CPools::GetVehicle(int handle)                      0x4A1AE0
cdecl void CPools::GetObjectRef(CObject *object)              0x4A1B00
cdecl CObject* CPools::GetObject(int handle)                       0x4A1B20
cdecl void CPools::LoadVehiclePool(uchar *buffer,uint size)        0x4A1B40
cdecl void CPools::SaveVehiclePool(uchar *buffer,uint *outSize)      0x4A2080
cdecl void CPools::SaveObjectPool(uchar *buffer,uint *outSize)       0x4A22D0
cdecl void CPools::LoadObjectPool(uchar *buffer,uint size)         0x4A2550
cdecl void CPools::SavePedPool(uchar *buffer,uint *outSize)          0x4A29B0
cdecl void CPools::LoadPedPool(uchar *buffer,uint size)            0x4A2B50
cdecl void CPools::MakeSureSlotInObjectPoolIsEmpty(int slot) 0x4A2DB0
end

vtable 0
end
funcs
thiscall void CModelInfoAccelerator::Init(void)                               0x4C6A80
thiscall void CModelInfoAccelerator::AddModelInfoId(ushort modelId)                   0x4C6AA0
thiscall ushort CModelInfoAccelerator::GetNextModelInfoId(void)                 0x4C6AC0
thiscall void CModelInfoAccelerator::AllocModelInfoIds(void)                  0x4C6AE0
thiscall void CModelInfoAccelerator::FreeModelInfoIds(void)                   0x4C6B10
thiscall void CModelInfoAccelerator::GetEntry(CBaseModelInfo **,int *,char *) 0x4C6B30
thiscall void CModelInfoAccelerator::End(char *)                              0x4C6B40
thiscall void CModelInfoAccelerator::CModelInfoAccelerator(void)              0x4C6B50
thiscall bool CModelInfoAccelerator::GetModelInfoIdFile(void)                 0x4C6B70
thiscall void CModelInfoAccelerator::EndOfLoadPhase(void)                     0x4C6BD0
thiscall bool CModelInfoAccelerator::Begin(char *filePath)                            0x4C6C20
end

vtable 0
end
funcs
cdecl void CPools::MakeSureSlotInObjectPoolIsEmpty(int slot) 0x4BEA80
cdecl void CPools::LoadPedPool(uchar *buffer,uint size)            0x4BEB50
cdecl void CPools::SavePedPool(uchar *buffer,uint *outSize)          0x4BEDC0
cdecl void CPools::LoadObjectPool(uchar *buffer,uint size)         0x4BEF70
cdecl void CPools::SaveObjectPool(uchar *buffer,uint *outSize)       0x4BF420
cdecl void CPools::SaveVehiclePool(uchar *buffer,uint *outSize)      0x4BF6D0
cdecl void CPools::LoadVehiclePool(uchar *buffer,uint size)        0x4BF9A0
cdecl CObject* CPools::GetObject(int handle)                       0x4BFF80
cdecl int CPools::GetObjectRef(CObject *object)              0x4BFFA0
cdecl CVehicle* CPools::GetVehicle(int handle)                      0x4BFFC0
cdecl int CPools::GetVehicleRef(CVehicle *vehicle)            0x4BFFE0
cdecl CPed* CPools::GetPed(int handle)                          0x4C0000
cdecl int CPools::GetPedRef(CPed *ped)                    0x4C0020
cdecl void CPools::CheckPoolsEmpty(void)                0x4C0040
cdecl void CPools::ShutDown(void)                       0x4C0070
cdecl void CPools::Initialise(void)                     0x4C0270
end

vtable 0
end
funcs
cdecl int CFileMgr::GetErrorReadWrite(int fileHandle)                0x48DE90
cdecl int CFileMgr::CloseFile(int fileHandle)                        0x48DEA0
cdecl bool CFileMgr::ReadLine(int fileHandle,char *buffer,int maxSize)              0x48DEB0
cdecl bool CFileMgr::Seek(int fileHandle,int offset,int origin)                     0x48DEE0
cdecl int CFileMgr::Write(int fileHandle,char *buffer,int size)                 0x48DF30
cdecl int CFileMgr::Read(int fileHandle,char *buffer,int size)                  0x48DF50
cdecl int CFileMgr::OpenFileForWriting(char const*filepath)       0x48DF70
cdecl int CFileMgr::OpenFile(char const*filepath,char const*mode)     0x48DF90
cdecl int CFileMgr::LoadFile(char const*filepath,uchar *buffer,int size,char const*mode) 0x48DFB0
cdecl void CFileMgr::SetDirMyDocuments(void)               0x48E020
cdecl void CFileMgr::SetDir(char const*dir)                   0x48E030
cdecl void CFileMgr::ChangeDir(char const*dir)                0x48E090
cdecl void CFileMgr::Initialise(void)                      0x48E100
end

vtable 0
end
funcs
cdecl char* CStats::GetStatID(ushort stat)                                0x558DE0
cdecl bool CStats::GetStatType(ushort stat)                              0x558E30
cdecl float CStats::GetStatValue(ushort stat)                             0x558E40
cdecl char CStats::GetTimesMissionAttempted(uchar missionId)                  0x558E70
cdecl void CStats::RegisterMissionAttempted(uchar missionId)                  0x558E80
cdecl void CStats::RegisterMissionPassed(uchar missionId)                     0x558EA0
cdecl bool CStats::PopulateFavoriteRadioStationList(void)           0x558EC0
cdecl int *CStats::GetFullFavoriteRadioStationList(void)            0x558F90
cdecl int CStats::FindMostFavoriteRadioStation(void)               0x558FA0
cdecl int CStats::FindLeastFavoriteRadioStation(void)              0x559010
cdecl int CStats::FindCriminalRatingNumber(void)                   0x559080
cdecl float CStats::GetPercentageProgress(void)                      0x5591E0
cdecl void CStats::BuildStatLine(char *line, void *pValue1, int metrics, void *pValue2, int type)      0x559230
cdecl int CStats::ConvertToMins(int value)                               0x559540
cdecl int CStats::ConvertToSecs(int value)                               0x559560
cdecl bool CStats::SafeToShowThisStat(uchar stat)                        0x559590
cdecl bool CStats::CheckForThreshold(float *pValue, float range)                 0x5595F0
cdecl bool CStats::IsStatCapped(ushort stat)                             0x559630
cdecl void CStats::ProcessReactionStatsOnDecrement(uchar stat)           0x559730
cdecl void CStats::CheckForStatsMessage()                       0x559760
cdecl void CStats::LoadStatUpdateConditions(void)                   0x559860
cdecl void CStats::LoadActionReactionStats(void)                    0x5599B0
cdecl int CStats::FindMaxNumberOfGroupMembers(void)                0x559A50
cdecl float CStats::GetFatAndMuscleModifier(eStatModAbilities statMod)       0x559AF0
cdecl void CStats::DecrementStat(ushort stat, float value)                      0x559FA0
cdecl void CStats::SetStatValue(ushort stat, float value)                       0x55A070
cdecl void CStats::RegisterFastestTime(int stat, int time)                     0x55A0B0
cdecl void CStats::RegisterBestPosition(int stat, int position)                    0x55A160
cdecl char* CStats::FindCriminalRatingString(void)                   0x55A210
cdecl int CStats::ConstructStatLine(int, uchar)                     0x55A780
cdecl void CStats::ProcessReactionStatsOnIncrement(uchar stat)           0x55B900
cdecl void CStats::DisplayScriptStatUpdateMessage(uchar state, uint stat, float value) 0x55B980
cdecl void CStats::UpdateRespectStat(uchar)                         0x55BC50
cdecl void CStats::UpdateSexAppealStat(void)                        0x55BF20
cdecl void CStats::Init(void)                                       0x55C0C0
cdecl void CStats::IncrementStat(ushort stat, float value)                      0x55C180
cdecl void CStats::SetNewRecordStat(ushort stat, float value)                   0x55C410
cdecl void CStats::UpdateFatAndMuscleStats(uint value)                    0x55C470
cdecl void CStats::UpdateStatsWhenSprinting(void)                   0x55C660
cdecl void CStats::UpdateStatsWhenRunning(void)                     0x55C6F0
cdecl void CStats::UpdateStatsWhenCycling(bool, CBmx *bmx)              0x55C780
cdecl void CStats::UpdateStatsWhenSwimming(bool, bool)               0x55C990
cdecl void CStats::UpdateStatsWhenDriving(CVehicle *vehicle)               0x55CAC0
cdecl void CStats::UpdateStatsWhenFlying(CVehicle *vehicle)                0x55CC00
cdecl void CStats::UpdateStatsWhenOnMotorBike(CBike *bike)              0x55CD60
cdecl void CStats::UpdateStatsWhenWeaponHit(int weaponType)                    0x55CEB0
cdecl void CStats::UpdateStatsWhenFighting(void)                    0x55CFA0
cdecl void CStats::UpdateStatsOnRespawn(void)                       0x55CFC0
cdecl void CStats::UpdateStatsAddToHealth(uint addToHealth)                     0x55D030
cdecl void CStats::ModifyStat(ushort stat, float value)                         0x55D090
end

vtable 0
end
funcs
cdecl bool CStats::Save(void) 0x5D3B40
cdecl bool CStats::Load(void) 0x5D3BF0
end

vtable 0
end
funcs
thiscall void CDecisionSimple::SetDefault(void) 0x604220
end

vtable 0
end
funcs
thiscall void CDecision::SetDefault(void)                                0x600530
thiscall void CDecision::Set(int *taskTypes,float *responseChances,int *typeFlags,float *) 0x600570
thiscall void CDecision::Add(int taskType,float *responseChances,int *typeFlags)                          0x600600
thiscall void CDecision::From(CDecision const&right)                          0x6006B0
thiscall bool CDecision::HasResponse(void)                               0x600710
thiscall void CDecision::MakeDecision(int,bool,int,int,int,int,short &,short &) 0x6040D0
end

vtable 0
end
funcs
thiscall void CDecisionSimple::Set(int *taskTypes,uchar *chances,int count)          0x600730
thiscall void CDecisionSimple::MakeDecision(int taskType,short &outTaskType,int &outDecisionIndex) 0x6007A0
end

vtable 0
end
funcs
thiscall void CRunningScript::Init(void)              0x450CF0
thiscall char CRunningScript::ProcessOneCommand(void) 0x44FBE0
end

vtable 0
end
funcs
// dummy function
cdecl void CRenderer::Init(void)                                                      0x5531C0
// dummy function
cdecl void CRenderer::Shutdown(void)                                                  0x5531D0
cdecl void CRenderer::RenderFadingInEntities(void)                                    0x5531E0
cdecl void CRenderer::RenderFadingInUnderwaterEntities(void)                          0x553220
cdecl void CRenderer::RenderOneRoad(CEntity *entity)                                        0x553230
cdecl void CRenderer::RenderOneNonRoad(CEntity *entity)                                     0x553260
cdecl void CRenderer::RemoveVehiclePedLights(CPhysical *entity)                             0x553390
cdecl void CRenderer::AddEntityToRenderList(CEntity *entity,float distance)                          0x5534B0
cdecl void CRenderer::ScanSectorList_ListModels(int sector_x,int sector_y)                              0x5535D0
cdecl void CRenderer::ScanSectorList_ListModelsVisible(int sector_x,int sector_y)                       0x553650
cdecl tRenderListEntry* CRenderer::GetLodRenderListBase(void)                                      0x5536D0
cdecl tRenderListEntry* CRenderer::GetLodDontRenderListBase(void)                                  0x5536E0
cdecl void CRenderer::ResetLodRenderLists(void)                                       0x5536F0
cdecl void CRenderer::AddToLodRenderList(CEntity *entity,float distance)                             0x553710
cdecl void CRenderer::AddToLodDontRenderList(CEntity *entity,float distance)                         0x553740
cdecl void CRenderer::ProcessLodRenderLists(void)                                     0x553770
cdecl void CRenderer::PreRender(void)                                                 0x553910
cdecl void CRenderer::RenderRoads(void)                                               0x553A10
cdecl void CRenderer::RenderEverythingBarRoads(void)                                  0x553AA0
cdecl void CRenderer::RenderFirstPersonVehicle(void)                                  0x553D00
cdecl bool CRenderer::SetupLightingForEntity(CEntity *entity)                               0x553E40
cdecl int CRenderer::SetupMapEntityVisibility(CEntity *entity,CBaseModelInfo *modelInfo,float distance,bool) 0x553F60
cdecl int CRenderer::SetupEntityVisibility(CEntity *entity,float &outDistance)                        0x554230
cdecl int CRenderer::SetupBigBuildingVisibility(CEntity *entity,float &outDistance)                   0x554650
cdecl void CRenderer::ScanSectorList(int sector_x,int sector_y)                                         0x554840
cdecl void CRenderer::ScanBigBuildingList(int sector_x,int sector_y)                                    0x554B10
// returns objects count
cdecl int CRenderer::GetObjectsInFrustum(CEntity **outEntities,float distance,RwMatrixTag *transformMat)             0x554C60
cdecl bool CRenderer::ShouldModelBeStreamed(CEntity *entity,CVector const&origin,float farClip)           0x554EB0
cdecl void CRenderer::ScanWorld(void)                                                 0x554FE0
cdecl void CRenderer::ScanPtrList_RequestModels(CPtrList &ptrList)                           0x555680
cdecl void CRenderer::ConstructRenderList(void)                                       0x5556E0
cdecl void CRenderer::ScanSectorList_RequestModels(int sector_x,int sector_y)                           0x555900
cdecl void CRenderer::RequestObjectsInFrustum(RwMatrixTag *transformMat,int modelRequesFlags)                      0x555960
cdecl void CRenderer::RequestObjectsInDirection(CVector const&posn,float angle,int modelRequesFlags)             0x555CB0
cdecl void CRenderer::SetupScanLists(int sector_x, int sector_y)          0x553540
end

vtable 0
end
funcs
cdecl void CWeapon::InitialiseWeapons(void)                                                                                                           0x73A300
cdecl void CWeapon::ShutdownWeapons(void)                                                                                                             0x73A330
cdecl void CWeapon::UpdateWeapons(void)                                                                                                               0x73A360
thiscall void CWeapon::Shutdown(void)                                                                                                                    0x73A380
thiscall void CWeapon::AddGunshell(CEntity *creator,CVector const&position,CVector2D const&direction,float size)                                                                      0x73A3E0
cdecl void CWeapon::GenerateDamageEvent(CPed *victim,CEntity *creator,eWeaponType weaponType,int damageFactor,ePedPieceTypes pedPiece,int direction)                                                          0x73A530
thiscall bool CWeapon::LaserScopeDot(CVector *outCoord,float *outSize)                                                                                                  0x73A8D0
thiscall bool CWeapon::FireSniper(CPed *creator, CEntity *victim, CVector *target)                                                                                                             0x73AAC0
thiscall void CWeapon::Reload(CPed *owner)                                                                                                                      0x73AEB0
cdecl void FireOneInstantHitRound(CVector *startPoint,CVector *endPoint,int intensity)                                                                                            0x73AF00
thiscall bool CWeapon::IsTypeMelee(void)                                                                                                                 0x73B1C0
thiscall bool CWeapon::IsType2Handed(void)                                                                                                               0x73B1E0
thiscall bool CWeapon::IsTypeProjectile(void)                                                                                                            0x73B210
cdecl bool CWeapon::CanBeUsedFor2Player(eWeaponType weaponType)                                                                                                  0x73B240
thiscall bool CWeapon::HasWeaponAmmoToBeUsed(void)                                                                                                       0x73B2A0
cdecl bool CWeapon::ProcessLineOfSight(CVector const&startPoint,CVector const&endPoint,CColPoint &outColPoint,CEntity *&outEntity,eWeaponType weaponType,CEntity *,bool buildings,bool vehicles,bool peds,bool objects,bool dummies,bool,bool doIgnoreCameraCheck) 0x73B300
thiscall void CWeapon::StopWeaponEffect(void)                                                                                                            0x73B360
cdecl float CWeapon::TargetWeaponRangeMultiplier(CEntity *victim,CEntity *weaponOwner)                                                                                  0x73B380
thiscall void CWeapon::CWeapon(eWeaponType weaponType,int ammo)                                                                                                          0x73B430
thiscall void CWeapon::Initialise(eWeaponType weaponType,int ammo,CPed *owner)                                                                                                0x73B4A0
thiscall void CWeapon::DoBulletImpact(CEntity *owner,CEntity *victim,CVector *startPoint,CVector *endPoint,CColPoint *colPoint,int)                                                     0x73B550
thiscall bool CWeapon::TakePhotograph(CEntity *owner, CVector *point)                                                                                                         0x73C1F0
thiscall void CWeapon::SetUpPelletCol(int numPellets,CEntity *owner,CEntity *victim,CVector &point,CColPoint &colPoint,CMatrix &outMatrix)                                                           0x73C710
thiscall void CWeapon::FireInstantHitFromCar2(CVector startPoint,CVector endPoint,CVehicle *vehicle,CEntity *owner)                                                                      0x73CBA0
cdecl void CWeapon::DoDoomAiming(CEntity *owner,CVector *start,CVector *end)                                                                                       0x73CDC0
cdecl void CWeapon::DoTankDoomAiming(CEntity *vehicle,CEntity *owner,CVector *startPoint,CVector *endPoint)                                                                         0x73D1E0
cdecl void CWeapon::DoDriveByAutoAiming(CEntity *owner,CVehicle *vehicle,CVector *startPoint,CVector *endPoint,bool canAimVehicles)                                                                0x73D720
thiscall void CWeapon::Update(CPed *owner)                                                                                                                    0x73DB40
thiscall bool CWeapon::CanBeUsedFor2Player(void)                                                                                                         0x73DEF0
// outX and outY will be placed in [-1;1] ranges
cdecl void CWeapon::FindNearestTargetEntityWithScreenCoors(float screenX,float screenY,float range,CVector point,float *outX,float *outY)                                                 0x73E240
cdecl float CWeapon::EvaluateTargetForHeatSeekingMissile(CEntity *entity,CVector &posn,CVector &direction,float distanceMultiplier,bool fromVehicle,CEntity *lastEntity)                                           0x73E560
thiscall void CWeapon::DoWeaponEffect(CVector origin,CVector target)                                                                                                0x73E690
thiscall bool CWeapon::FireAreaEffect(CEntity *firingEntity,CVector *origin, CEntity *targetEntity, CVector *target)                                                                                               0x73E800
thiscall bool CWeapon::FireInstantHitFromCar(CVehicle *vehicle,bool leftSide,bool rightSide)                                                                                       0x73EC40
cdecl bool CWeapon::CheckForShootingVehicleOccupant(CEntity **pCarEntity,CColPoint *colPoint,eWeaponType weaponType,CVector const&origin,CVector const&target)                                 0x73F480
cdecl CEntity* CWeapon::PickTargetForHeatSeekingMissile(CVector origin,CVector direction,float distanceMultiplier,CEntity *ignoreEntity,bool fromVehicle,CEntity *lastEntity)                                                   0x73F910
thiscall void CWeapon::FireFromCar(CVehicle *vehicle,bool leftSide,bool rightSide)                                                                                                 0x73FA20
thiscall bool CWeapon::FireInstantHit(CEntity *firingEntity,CVector *origin, CVector *muzzlePosn, CEntity *targetEntity, CVector *target, CVector *originForDriveBy, bool, bool muzzle)                                                                                               0x73FB10
thiscall bool CWeapon::FireProjectile(CEntity *firingEntity,CVector *origin, CEntity *targetEntity, CVector *target,float force)                                                                                         0x741360
thiscall bool CWeapon::FireM16_1stPerson(CEntity *owner)                                                                                                      0x741C00
thiscall bool CWeapon::Fire(CEntity *firingEntity,CVector *origin, CVector *muzzlePosn, CEntity *targetEntity, CVector *target, CVector *originForDriveBy)                                                                                                         0x742300
end

vtable 0
end
funcs
cdecl short GetCurrentScanCode() 0x407250
cdecl CSector* GetSector(int x, int y)          0x407260
cdecl CRepeatSector* GetRepeatSector(int x, int y)    0x4072A0
cdecl CPtrListSingleLink* GetLodPtrList(int x, int y)      0x4072C0
cdecl void SetNextScanCode()    0x4072E0
end

vtable 0
end
funcs
cdecl void CWorld::ResetLineTestOptions(void)                                                                                                                                     0x5631C0
cdecl void CWorld::Initialise(void)                                                                                                                                               0x5631E0
cdecl void CWorld::Add(CEntity *entity)                                                                                                                                                 0x563220
cdecl void CWorld::Remove(CEntity *entity)                                                                                                                                              0x563280
cdecl bool CWorld::ProcessVerticalLineSectorList(CPtrList &ptrList,CColLine const&colLine,CColPoint &colPoint,float &maxTouchDistance,CEntity *&outEntity,bool doSeeThroughCheck,CStoredCollPoly *collPoly)                                                0x5632B0
cdecl void CWorld::CastShadowSectorList(CPtrList &ptrList,float,float,float,float)                                                                                                       0x563390
cdecl void CWorld::ProcessForAnimViewer(void)                                                                                                                                     0x5633D0
cdecl void CWorld::ProcessPedsAfterPreRender(void)                                                                                                                                0x563430
cdecl void CWorld::ClearScanCodes(void)                                                                                                                                           0x563470
cdecl void CWorld::FindObjectsInRangeSectorList(CPtrList &,CVector const&point,float radius,bool b2D,short *outCount,short maxCount,CEntity **outEntities)                                                                    0x563500
cdecl void CWorld::FindObjectsOfTypeInRangeSectorList(uint modelId,CPtrList &ptrList,CVector const&point,float radius,bool b2D,short *outCount,short maxCount,CEntity **outEntities)                                                         0x5635C0
cdecl bool CWorld::ProcessVerticalLineSectorList_FillGlobeColPoints(CPtrList &ptrList,CColLine const&colLine,CEntity *&outEntity,bool doSeeThroughCheck,CStoredCollPoly *outCollPoly)                                                 0x5636A0
cdecl void CWorld::RemoveStaticObjects(void)                                                                                                                                      0x563840
cdecl void CWorld::TestForBuildingsOnTopOfEachOther(CPtrList &ptrList)                                                                                                                   0x563950
cdecl void CWorld::TestForUnusedModels(CPtrList &ptrList,int *models)                                                                                                                          0x5639D0
cdecl void CWorld::RemoveEntityInsteadOfProcessingIt(CEntity *entity)                                                                                                                   0x563A10
cdecl void CWorld::CallOffChaseForAreaSectorListVehicles(CPtrList &ptrList,float x1,float y1,float x2,float y2,float,float,float,float)                                                              0x563A80
cdecl void CWorld::CallOffChaseForAreaSectorListPeds(CPtrList &ptrList,float x1,float y1,float x2,float y2,float,float,float,float)                                                                  0x563D00
cdecl bool CWorld::CameraToIgnoreThisObject(CEntity *entity)                                                                                                                            0x563F40
// returns player ID (0 or 1), -1 - not found
cdecl int CWorld::FindPlayerSlotWithPedPointer(void *ptr)                                                                                                                           0x563FA0
// returns player ID (0 or 1), -1 - not found
cdecl int CWorld::FindPlayerSlotWithRemoteVehiclePointer(void *ptr)                                                                                                                 0x563FD0
// returns player ID (0 or 1)
cdecl void CWorld::FindPlayerSlotWithVehiclePointer(CEntity *vehiclePtr)                                                                                                                    0x564000
cdecl void CWorld::ShutDown(void)                                                                                                                                                 0x564050
cdecl void CWorld::ClearForRestart(void)                                                                                                                                          0x564360
cdecl bool CWorld::ProcessVerticalLineSector_FillGlobeColPoints(CSector &sector,CRepeatSector &repeatSector,CColLine const&colLine,CEntity *&outEntity,bool buildings,bool vehicles,bool peds,bool objects,bool dummies,bool doSeeThroughCheck,CStoredCollPoly *outCollPoly)             0x564420
cdecl bool CWorld::ProcessVerticalLineSector(CSector &sector,CRepeatSector &repeatSector,CColLine const&colLine,CColPoint &outColPoint,CEntity *&outEntity,bool buildings,bool vehicles,bool peds,bool objects,bool dummies,bool doSeeThroughCheck,CStoredCollPoly *outCollPoly)                    0x564500
cdecl void CWorld::CastShadow(float x1,float y1,float x2,float y2)                                                                                                                            0x564600
cdecl void CWorld::ProcessAttachedEntities(void)                                                                                                                                  0x5647F0
cdecl bool CWorld::GetIsLineOfSightSectorListClear(CPtrList &ptrList,CColLine const&colLine,bool doSeeThroughCheck,bool doCameraIgnoreCheck)                                                                                          0x564970
cdecl void CWorld::FindObjectsInRange(CVector const&point,float radius,bool b2D,short *outCount,short maxCount,CEntity **outEntities, bool buildings, bool vehicles, bool peds, bool objects, bool dummies)                                                                0x564A20
cdecl void CWorld::FindObjectsOfTypeInRange(uint modelId,CVector const&point,float radius,bool b2D,short *outCount,short maxCount,CEntity **outEntities, bool buildings, bool vehicles, bool peds, bool objects, bool dummies)                                                     0x564C70
cdecl void CWorld::FindLodOfTypeInRange(uint modelId,CVector const&point,float radius,bool b2D,short *outCount,short maxCount,CEntity **outEntities)                                                                                  0x564ED0
cdecl void CWorld::FindObjectsKindaCollidingSectorList(CPtrList &ptrList,CVector const&point,float radius,bool b2D,short *outCount,short maxCount,CEntity **outEntities)                                                             0x565000
cdecl void CWorld::FindObjectsIntersectingCubeSectorList(CPtrList &ptrList,CVector const&cornerA,CVector const&cornerB,short *outCount,short maxCount,CEntity **outEntities)                                                       0x5650E0
cdecl void CWorld::FindObjectsIntersectingAngledCollisionBoxSectorList(CPtrList &ptrList,CBox const&box,CMatrix const&transform,CVector const&point,short *outCount,short maxCount,CEntity **outEntities)                             0x565200
cdecl void CWorld::FindMissionEntitiesIntersectingCubeSectorList(CPtrList &ptrList,CVector const&cornerA,CVector const&cornerB,short *outCount,short maxCount,CEntity **outEntities,bool vehiclesList,bool pedsList,bool objectsList)                                0x565300
cdecl void CWorld::FindNearestObjectOfTypeSectorList(int modelId,CPtrList &ptrList,CVector const&point,float radius,bool b2D,CEntity **outEntities,float *outDistance)                                                                 0x565450
cdecl void CWorld::RemoveReferencesToDeletedObject(CEntity *entity)                                                                                                                     0x565510
cdecl void CWorld::SetPedsOnFire(float x1,float y1,float x2,float y2,CEntity *fireCreator)                                                                                                               0x565610
cdecl void CWorld::SetPedsChoking(float x1,float y1,float x2,float y2,CEntity *gasCreator)                                                                                                              0x565800
cdecl void CWorld::SetCarsOnFire(float x1,float y1,float x2,float y2,CEntity *fireCreator)                                                                                                               0x5659F0
cdecl bool CWorld::SprayPaintWorld(CVector &posn,CVector &outDir,float radius,bool processTagAlphaState)                                                                                                                0x565B70
cdecl void CWorld::RemoveFallenPeds(void)                                                                                                                                         0x565CB0
cdecl void CWorld::RemoveFallenCars(void)                                                                                                                                         0x565E80
cdecl void CWorld::UseDetonator(CEntity *creator)                                                                                                                                        0x5660B0
// returns entity
cdecl CEntity* CWorld::TestSphereAgainstSectorList(CPtrList &ptrList,CVector sphereCenter,float sphereRadius,CEntity *ignoreEntity,bool doCameraIgnoreCheck)                                                                                           0x566140
cdecl void CWorld::PrintCarChanges(void)                                                                                                                                          0x566420
cdecl void CWorld::TestForBuildingsOnTopOfEachOther(void)                                                                                                                         0x5664A0
cdecl void CWorld::TestForUnusedModels(void)                                                                                                                                      0x566510
cdecl void CWorld::ClearCarsFromArea(float x1,float y1,float z1,float x2,float y2,float z2)                                                                                                         0x566610
cdecl void CWorld::ClearPedsFromArea(float x1,float y1,float z1,float x2,float y2,float z2)                                                                                                         0x5667F0
cdecl void CWorld::SetAllCarsCanBeDamaged(bool enable)                                                                                                                                   0x5668F0
cdecl void CWorld::ExtinguishAllCarFiresInArea(CVector point,float radius)                                                                                                                     0x566950
cdecl void CWorld::CallOffChaseForArea(float x1,float y1,float x2,float y2)                                                                                                                   0x566A60
cdecl void CWorld::StopAllLawEnforcersInTheirTracks(void)                                                                                                                         0x566C10
cdecl CVehicle* CWorld::FindUnsuspectingTargetCar(CVector point,CVector playerPosn)                                                                                                                     0x566C90
cdecl CPed* CWorld::FindUnsuspectingTargetPed(CVector point,CVector playerPosn)                                                                                                                     0x566DA0
cdecl bool CWorld::ProcessLineOfSightSectorList(CPtrList &ptrList,CColLine const&colLine,CColPoint &outColPoint,float &maxTouchDistance,CEntity *&outEntity,bool doSeeThroughCheck,bool doIgnoreCameraCheck,bool doShootThroughCheck)                                                         0x566EE0
cdecl bool CWorld::ProcessVerticalLine(CVector const&origin,float distance,CColPoint &outColPoint,CEntity *&outEntity,bool buildings, bool vehicles, bool peds, bool objects, bool dummies,bool doSeeThroughCheck,CStoredCollPoly *outCollPoly)                                               0x5674E0
cdecl bool CWorld::ProcessVerticalLine_FillGlobeColPoints(CVector const&origin,float distance,CEntity *&outEntity,bool buildings, bool vehicles, bool peds, bool objects, bool dummies,bool doSeeThroughCheck,CStoredCollPoly *outCollPoly)                                        0x567620
cdecl void CWorld::TriggerExplosionSectorList(CPtrList &ptrList,CVector const&point,float radius,float visibleDistance,CEntity *victim,CEntity *creator,bool processVehicleBombTimer,float damage)                                                               0x567750
cdecl void CWorld::Process(void)                                                                                                                                                  0x5684A0
cdecl bool CWorld::GetIsLineOfSightSectorClear(CSector &sector,CRepeatSector &repeatSector,CColLine const&colLine,bool buildings, bool vehicles, bool peds, bool objects, bool dummies,bool doSeeThroughCheck,bool doIgnoreCameraCheck)                                                      0x568AD0
cdecl void CWorld::FindObjectsKindaColliding(CVector const&point,float radius,bool b2D,short *outCount,short maxCount,CEntity **outEntities,bool buildings, bool vehicles, bool peds, bool objects, bool dummies)                                                         0x568B80
cdecl void CWorld::FindObjectsIntersectingCube(CVector const&cornerA,CVector const&cornerB,short *outCount,short maxCount,CEntity **outEntities,bool buildings, bool vehicles, bool peds, bool objects, bool dummies)                                                   0x568DD0
cdecl void CWorld::FindObjectsIntersectingAngledCollisionBox(CBox const&box,CMatrix const&transform,CVector const&point,float x1,float y1,float x2,float y2,short *outCount,short maxCount,CEntity **outEntities,bool buildings, bool vehicles, bool peds, bool objects, bool dummies) 0x568FF0
cdecl void CWorld::FindMissionEntitiesIntersectingCube(CVector const&cornerA,CVector const&cornerB,short *outCount,short maxCount,CEntity **outEntities,bool vehicles,bool peds,bool objects)                                                     0x569240
cdecl void CWorld::FindNearestObjectOfType(int modelId,CVector const&point,float radius,bool b2D,bool buildings, bool vehicles, bool peds, bool objects, bool dummies)                                                                                0x5693F0
cdecl float CWorld::FindGroundZForCoord(float x,float y)                                                                                                                               0x569660
cdecl float CWorld::FindGroundZFor3DCoord(float x,float y,float z,bool *outResult,CEntity **outEntity)                                                                                                     0x5696C0
cdecl float CWorld::FindRoofZFor3DCoord(float x,float y,float z,bool *outResult)                                                                                                                  0x569750
cdecl float CWorld::FindLowestZForCoord(float x,float y)                                                                                                                               0x5697F0
cdecl void CWorld::RepositionOneObject(CEntity *object)                                                                                                                                 0x569850
// returns entity
cdecl CEntity* CWorld::TestSphereAgainstWorld(CVector sphereCenter,float sphereRadius,CEntity *,bool buildings, bool vehicles, bool peds, bool objects, bool dummies,bool doCameraIgnoreCheck)                                                                                  0x569E20
cdecl void CWorld::ClearExcitingStuffFromArea(CVector const&point,float radius,uchar bRemoveProjectilesAndShadows)                                                                                                         0x56A0D0
cdecl bool CWorld::GetIsLineOfSightClear(CVector const&origin,CVector const&target,bool buildings, bool vehicles, bool peds, bool objects, bool dummies,bool doSeeThroughCheck,bool doCameraIgnoreCheck)                                                                        0x56A490
cdecl bool CWorld::ProcessLineOfSightSector(CSector &sector,CRepeatSector &repeatSector,CColLine const&colLine,CColPoint &outColPoint,float &maxTouchDistance,CEntity *&outEntity,bool buildings, bool vehicles, bool peds, bool objects, bool dummies,bool doSeeThroughCheck,bool doCameraIgnoreCheck,bool doShootThroughCheck)                     0x56B5E0
cdecl void CWorld::TriggerExplosion(CVector const&point,float radius,float visibleDistance,CEntity *victim,CEntity *creator,bool processVehicleBombTimer,float damage)                                                                                    0x56B790
cdecl void CWorld::SetWorldOnFire(float x,float y,float z,float radius,CEntity *fireCreator)                                                                                                              0x56B910
cdecl void CWorld::RepositionCertainDynamicObjects(void)                                                                                                                          0x56B9C0
cdecl bool CWorld::ProcessLineOfSight(CVector const&origin,CVector const&target,CColPoint &outColPoint,CEntity *&outEntity,bool buildings, bool vehicles, bool peds, bool objects, bool dummies,bool doSeeThroughCheck,bool doCameraIgnoreCheck,bool doShootThroughCheck)                                               0x56BA00
end

vtable 0
end
funcs
thiscall void CSetPiece::SetCornerA(CVector2D coord) 0x499120
thiscall void CSetPiece::SetCornerB(CVector2D coord) 0x499150
thiscall void CSetPiece::SetSpawnCoord1(CVector2D coord) 0x499180
thiscall void CSetPiece::SetSpawnCoord2(CVector2D coord) 0x4991B0
thiscall void CSetPiece::SetTargetCoord1(CVector2D coord) 0x4991E0
thiscall void CSetPiece::SetTargetCoord2(CVector2D coord) 0x499210
thiscall float CSetPiece::GetCornerAX() 0x499240
thiscall float CSetPiece::GetCornerAY() 0x499260
thiscall float CSetPiece::GetCornerBX() 0x499280
thiscall float CSetPiece::GetCornerBY() 0x4992A0
thiscall float CSetPiece::GetSpawnCoord1X() 0x4992C0
thiscall float CSetPiece::GetSpawnCoord1Y() 0x4992E0
thiscall float CSetPiece::GetSpawnCoord2X() 0x499300
thiscall float CSetPiece::GetSpawnCoord2Y() 0x499320
thiscall float CSetPiece::GetTargetCoord1X() 0x499340
thiscall float CSetPiece::GetTargetCoord1Y() 0x499360
thiscall float CSetPiece::GetTargetCoord2X() 0x499380
thiscall float CSetPiece::GetTargetCoord2Y() 0x4993A0
thiscall void CSetPiece::CSetPiece() 0x4993C0
end

vtable 0
end
funcs
cdecl void CSetPieces::AddOne(uchar type,CVector2D cornerA,CVector2D cornerB,CVector2D spawnCoord1,CVector2D targetCoord1,CVector2D spawnCoord2,CVector2D targetCoord2) 0x499500
cdecl void CSetPieces::Init(void)                                                                0x4994F0
cdecl bool CSetPieces::Load(void)                                                                0x5D3CA0
cdecl bool CSetPieces::Save(void)                                                                0x5D3C70
cdecl void CSetPieces::Update(void)                                                              0x49AA00
end

vtable 0
end
funcs
thiscall CCopPed* CSetPiece::TryToGenerateCopPed(CVector2D posn)           0x499690
thiscall CVector2D CSetPiece::GetSpawnCoord1()                         0x4997A0
thiscall CVector2D CSetPiece::GetSpawnCoord2()                         0x4997E0
thiscall CVector2D CSetPiece::GetTargetCoord1()                        0x499820
thiscall CVector2D CSetPiece::GetTargetCoord2()                        0x499860
thiscall CVehicle* CSetPiece::TryToGenerateCopCar(CVector2D posn,CVector2D target) 0x4998A0
thiscall void CSetPiece::Update(void)                             0x499A80
end

vtable 0
end
funcs
thiscall void COctTreeBase::COctTreeBase(void)            0x5A7570
thiscall void COctTreeBase::Init(int numBranches)                     0x5A7260
thiscall bool COctTreeBase::Insert(uchar colorRed, uchar colorGreen, uchar colorBlue)     0x5A7750
thiscall void COctTreeBase::ReduceBranches(int newBranchesCount)           0x5A7840
end

vtable 0
bool COctTree::InsertTree(uchar colorRed, uchar colorGreen, uchar colorBlue)        0x5A75B0
void COctTree::FillPalette(uchar *colors)                 0x5A70F0
end
funcs
thiscall void COctTree::COctTree(void)                       0x5A6DB0
thiscall uint COctTree::FindNearestColour(uchar colorRed, uchar colorGreen, uchar colorBlue) 0x5A71E0
thiscall void COctTree::InitPool(void *data, int dataSize)                 0x5A7460
thiscall uint COctTree::NoOfChildren(void)                   0x5A6DE0
thiscall void COctTree::ReduceTree(void)                     0x5A7040
thiscall void COctTree::RemoveChildren(void)                 0x5A74F0
thiscall void COctTree::ShutdownPool(void)                   0x5A6F70
thiscall void COctTree::empty(void)                          0x5A6FC0
cdecl void COctTree::operator delete(void *data)              0x5A7420
cdecl void* COctTree::operator new(uint size)                   0x5A7410
end

vtable 0
end
funcs
thiscall void CPtrListDoubleLink::AddItem(void *item)    0x533670
thiscall void CPtrListDoubleLink::RemoveItem(void *item) 0x5336B0
end

vtable 0
end
funcs
thiscall void CPtrListSingleLink::AddItem(void *item)    0x5335E0
thiscall void CPtrListSingleLink::RemoveItem(void *item) 0x533610
end

vtable 0
end
funcs
thiscall void CQuadTreeNode::AddItem(void *item,CRect const&rect)                                       0x552CD0
thiscall void CQuadTreeNode::CQuadTreeNode(CRect const&rect,int numLevels)                                    0x552830
thiscall void CQuadTreeNode::DeleteItem(void *item)                                                 0x552A40
thiscall void CQuadTreeNode::DeleteItem(void *item,CRect const&rect)                                    0x552A90
// -1 if not found
thiscall int CQuadTreeNode::FindSector(CRect const&rect)                                           0x5525A0
// -1 if not found
thiscall int CQuadTreeNode::FindSector(CVector2D const&posn)                                       0x552640
thiscall void CQuadTreeNode::ForAllMatching(CRect const&rect,void *callback)         0x552980
thiscall void CQuadTreeNode::ForAllMatching(CVector2D const&posn,void *callback) 0x5529F0
thiscall void CQuadTreeNode::GetAll(CPtrListSingleLink &list)                                       0x552870
thiscall void CQuadTreeNode::GetAllMatching(CRect const&rect,CPtrListSingleLink &list)                  0x5528C0
thiscall void CQuadTreeNode::GetAllMatching(CVector2D const&posn,CPtrListSingleLink &list)              0x552930
thiscall bool CQuadTreeNode::InSector(CRect const&rect,int sector)                                         0x5526A0
thiscall void CQuadTreeNode::InitPool(void)                                                     0x552C00
cdecl void CQuadTreeNode::operator delete(void *data)                                            0x552C90
cdecl void* CQuadTreeNode::operator new(uint size)                                                 0x552C80
thiscall void CQuadTreeNode::~CQuadTreeNode()                                                   0x552520
end

vtable 0
end
funcs
cdecl void* CPtrNodeSingleLink::operator new(uint size)      0x552380
cdecl void CPtrNodeSingleLink::operator delete(void *data) 0x552390
end

vtable 0
end
funcs
thiscall void CPtrListDoubleLink::Flush(void) 0x552470
thiscall void CPtrListDoubleLink::~CPtrListDoubleLink() 0x8564E0
end

vtable 0
end
funcs
cdecl void* CPtrNodeDoubleLink::operator new(uint size)      0x5523C0
cdecl void CPtrNodeDoubleLink::operator delete(void *data) 0x5523D0
end

vtable 0
end
funcs
thiscall void CPtrListSingleLink::Flush(void) 0x552400
end

vtable 0
end
funcs
thiscall uint CPtrList::CountElements(void)    0x5521B0
thiscall bool CPtrList::IsMemberOfList(void *memberNode) 0x5521D0
end

vtable 0
end
funcs
// returns slot index
cdecl int CIplStore::AddIplSlot(char const*name)                      0x405AC0
cdecl void CIplStore::AddIplsNeededAtPosn(CVector const&posn)          0x4045B0
cdecl void CIplStore::ClearIplsNeededAtPosn(void)                  0x4045E0
cdecl void CIplStore::EnableDynamicStreaming(int iplSlotIndex, bool enable)             0x404D30
cdecl void CIplStore::EnsureIplsAreInMemory(CVector const&posn)        0x4053F0
// returns -1 if slot not found
cdecl int CIplStore::FindIplSlot(char const*name)                     0x404AC0
cdecl CRect* CIplStore::GetBoundingBox(int iplSlotIndex)                          0x404C70
cdecl int* CIplStore::GetIplEntityIndexArray(int arrayIndex)                  0x4047B0
cdecl char* CIplStore::GetIplName(int iplSlotIndex)                              0x404A60
// returns array index
cdecl int CIplStore::GetNewIplEntityIndexArray(int entitiesCount)               0x404780
cdecl bool CIplStore::HaveIplsLoaded(CVector const&coords, int playerNumber)           0x405600
cdecl void CIplStore::IncludeEntity(int iplSlotIndex, CEntity *entity)                 0x404C90
cdecl void CIplStore::Initialise(void)                             0x405EC0
cdecl bool CIplStore::Load(void)                                   0x5D54A0
cdecl void CIplStore::LoadAllRemainingIpls(void)                   0x405780
cdecl bool CIplStore::LoadIpl(int iplSlotIndex, uchar *data, int dataSize)                     0x406080
cdecl bool CIplStore::LoadIplBoundingBox(int iplSlotIndex,uchar *data,int dataSize)          0x405C00
cdecl void CIplStore::LoadIpls(CVector posn,bool)                       0x405170
cdecl void CIplStore::RemoveAllIpls(void)                          0x405720
cdecl void CIplStore::RemoveIpl(int iplSlotIndex)                               0x404B20
cdecl void CIplStore::RemoveIplAndIgnore(int iplSlotIndex)                      0x405890
cdecl void CIplStore::RemoveIplSlot(int iplSlotIndex)                           0x405B60
cdecl void CIplStore::RemoveIplWhenFarAway(int iplSlotIndex)                    0x4058D0
cdecl void CIplStore::RemoveRelatedIpls(int entityArraysIndex)                       0x405110
cdecl void CIplStore::RequestIplAndIgnore(int iplSlotIndex)                     0x405850
cdecl void CIplStore::RequestIpls(CVector const&posn,int playerNumber)              0x405520
cdecl bool CIplStore::Save(void)                                   0x5D5420
cdecl void CIplStore::SetIplsRequired(CVector const&posn,int playerNumber)          0x404700
cdecl void CIplStore::SetIsInterior(int iplSlotIndex,bool isInterior)                      0x404A90
cdecl int CIplStore::SetupRelatedIpls(char const*iplName,int entityArraysIndex,CEntity **instances) 0x404DE0
cdecl void CIplStore::Shutdown(void)                               0x405FA0
cdecl void SetIfInteriorIplIsRequired(CVector2D const&posn,void *data)     0x4045F0
cdecl void SetIfIplIsRequired(CVector2D const&posn,void *data)             0x404660
cdecl void SetIfIplIsRequiredReducedBB(CVector2D const&posn,void *data)    0x404690
end

vtable 0
end
funcs
thiscall bool CDoor::Process(CVehicle *vehicle,CVector &,CVector &,CVector &)       0x6F4040
thiscall bool CDoor::ProcessImpact(CVehicle *vehicle,CVector &,CVector &,CVector &) 0x6F4540
thiscall void CDoor::Open(float openRatio)                                             0x6F4790
thiscall float CDoor::GetAngleOpenRatio(void)                                 0x6F47E0
thiscall bool CDoor::IsClosed(void)                                          0x6F4800
thiscall bool CDoor::IsFullyOpen(void)                                       0x6F4820
end

vtable 0
end
funcs
cdecl void CProjectileInfo::Initialise(void)                                                       0x737B40
cdecl void CProjectileInfo::RemoveFXSystem(uchar bInstantly)                                                  0x737B80
cdecl void CProjectileInfo::Shutdown(void)                                                         0x737BC0
cdecl CProjectileInfo* CProjectileInfo::GetProjectileInfo(int infoId)                                                 0x737BF0
cdecl void CProjectileInfo::RemoveNotAdd(CEntity *creator,eWeaponType weaponType,CVector posn)                            0x737C00
cdecl bool CProjectileInfo::AddProjectile(CEntity *creator,eWeaponType weaponType,CVector posn,float force,CVector *direction,CEntity *victim) 0x737C80
cdecl void CProjectileInfo::RemoveDetonatorProjectiles(void)                                       0x738860
cdecl void CProjectileInfo::RemoveProjectile(CProjectileInfo*projectileInfo,CProjectile *projectileObject)                       0x7388F0
cdecl void CProjectileInfo::Update(void)                                                           0x738B20
cdecl bool CProjectileInfo::IsProjectileInRange(float x1,float y1,float z1,float x2,float y2,float z2,bool bDestroy)          0x739860
cdecl void CProjectileInfo::RemoveAllProjectiles(void)                                             0x7399B0
cdecl bool CProjectileInfo::RemoveIfThisIsAProjectile(CObject *object)                                   0x739A40
end

vtable 0
end
funcs
cdecl void CExplosion::ClearAllExplosions(void)                                                               0x736840
// dummy function
cdecl void CExplosion::Shutdown(void)                                                                         0x7368F0
cdecl uchar CExplosion::GetExplosionActiveCounter(uchar explosionId)                                                       0x736900
cdecl void CExplosion::ResetExplosionActiveCounter(uchar explosionId)                                                     0x736910
cdecl bool CExplosion::DoesExplosionMakeSound(uchar explosionId)                                                          0x736920
cdecl uint CExplosion::GetExplosionType(uchar explosionId)                                                                0x736930
cdecl CVector* CExplosion::GetExplosionPosition(uchar explosionId)                                                            0x736940
cdecl bool CExplosion::TestForExplosionInArea(eExplosionType explosionType,float x1,float y1,float z1,float x2,float y2,float z2)             0x736950
cdecl void CExplosion::RemoveAllExplosionsInArea(CVector posn,float radius)                                               0x7369E0
cdecl void CExplosion::Initialise(void)                                                                       0x736A40
cdecl bool CExplosion::AddExplosion(CEntity *victim,CEntity *creator,eExplosionType explosionType,CVector const&posn,uint time,uchar makeSound,float camShake,uchar visibility) 0x736A50
cdecl void CExplosion::Update(void)                                                                           0x737620
end

vtable 0
end
funcs
cdecl void CBulletInfo::Initialise(void)                                 0x735FD0
cdecl void CBulletInfo::Shutdown(void)                                   0x736000
cdecl bool CBulletInfo::AddBullet(CEntity *creator,eWeaponType weaponType,CVector position,CVector velocity) 0x736010
cdecl void CBulletInfo::Update(void)                                     0x7360D0
end

vtable 0
end
funcs
cdecl void CShotInfo::Initialise(void)                               0x739B60
// dummy function
cdecl void CShotInfo::Shutdown(void)                                 0x739C20
cdecl bool CShotInfo::AddShot(CEntity *creator,eWeaponType weaponType,CVector origin,CVector target) 0x739C30
cdecl bool CShotInfo::GetFlameThrowerShotPosn(uchar shotId,CVector *outPosn)       0x739DE0
cdecl void CShotInfo::Update(void)                                   0x739E60
end

vtable 0
end
funcs
thiscall void CWeaponEffects::CWeaponEffects(void)                                        0x742A90
thiscall void CWeaponEffects::~CWeaponEffects()                                           0x742AA0
cdecl void CWeaponEffects::Init(void)                                                  0x742AB0
cdecl void CWeaponEffects::Shutdown(void)                                              0x742B80
cdecl bool CWeaponEffects::IsLockedOn(int crosshairId)                                             0x742BD0
cdecl void CWeaponEffects::MarkTarget(int crosshairId,CVector posn,uchar red,uchar green,uchar blue,uchar alpha,float size,uchar) 0x742BF0
cdecl void CWeaponEffects::ClearCrossHair(int crosshairId)                                         0x742C60
cdecl void CWeaponEffects::ClearCrossHairs(void)                                       0x742C80
cdecl void CWeaponEffects::ClearCrossHairImmediately(int crosshairId)                              0x742CA0
cdecl void CWeaponEffects::ClearCrossHairsImmediately(void)                            0x742CC0
cdecl void CWeaponEffects::Render(void)                                                0x742CF0
end

vtable 0
end
funcs
cdecl void CWanted::InitialiseStaticVariables(void)                                0x561C70
thiscall void CWanted::UpdateWantedLevel(void)                                        0x561C90
cdecl void CWanted::SetMaximumWantedLevel(int level)                                     0x561E70
thiscall bool CWanted::AreMiamiViceRequired(void)                                     0x561F30
thiscall bool CWanted::AreSwatRequired(void)                                          0x561F40
thiscall bool CWanted::AreFbiRequired(void)                                           0x561F60
thiscall bool CWanted::AreArmyRequired(void)                                          0x561F80
thiscall int CWanted::NumOfHelisRequired(void)                                       0x561FA0
// dummy function
cdecl void CWanted::ResetPolicePursuit(void)                                       0x561FD0
thiscall void CWanted::ClearQdCrimes(void)                                            0x561FE0
thiscall bool CWanted::AddCrimeToQ(eCrimeType crimeType,int crimeId,CVector const&posn,bool bAlreadyReported,bool bPoliceDontReallyCare)           0x562000
thiscall void CWanted::ReportCrimeNow(eCrimeType crimeType,CVector const&posn,bool bPoliceDontReallyCare)                 0x562120
cdecl void CWanted::RemovePursuitCop(CCopPed *cop,CCopPed **copsArray,uchar &copsCounter)                 0x562300
thiscall bool CWanted::IsInPursuit(CCopPed *cop)                                         0x562330
cdecl void CWanted::UpdateEachFrame(void)                                          0x562360
thiscall void CWanted::Initialise(void)                                               0x562390
thiscall void CWanted::Reset(void)                                                    0x562400
thiscall void CWanted::RegisterCrime(eCrimeType crimeType,CVector const&posn,uint crimeId,bool bPoliceDontReallyCare)             0x562410
thiscall void CWanted::RegisterCrime_Immediately(eCrimeType crimeType,CVector const&posn,uint crimeId,bool bPoliceDontReallyCare) 0x562430
thiscall void CWanted::SetWantedLevel(int level)                                            0x562470
thiscall void CWanted::CheatWantedLevel(int level)                                          0x562540
thiscall void CWanted::SetWantedLevelNoDrop(int level)                                      0x562570
thiscall void CWanted::ClearWantedLevelAndGoOnParole(void)                            0x5625A0
cdecl int CWanted::WorkOutPolicePresence(CVector posn,float radius)                           0x5625F0
thiscall void CWanted::UpdateCrimesQ(void)                                            0x562760
thiscall bool CWanted::IsClosestCop(CPed *ped,int numCopsToCheck)                                       0x5627D0
cdecl CCopPed* CWanted::ComputePursuitCopToDisplace(CCopPed *cop,CCopPed **copsArray)              0x562B00
thiscall void CWanted::RemovePursuitCop(CCopPed *cop)                                    0x562C10
thiscall void CWanted::RemoveExcessPursuitCops(void)                                  0x562C40
thiscall void CWanted::Update(void)                                                   0x562C90
cdecl bool CWanted::CanCopJoinPursuit(CCopPed *cop,uchar maxCopsCount,CCopPed **copsArray,uchar &copsCounter)          0x562F60
thiscall bool CWanted::CanCopJoinPursuit(CCopPed *cop)                                   0x562FB0
thiscall bool CWanted::SetPursuitCop(CCopPed *cop)                                       0x563060
end

vtable 0
end
funcs
thiscall void D3DIndexDataBuffer::Clear()                        0x7301D0
thiscall void D3DIndexDataBuffer::Destroy()                      0x730200
thiscall uint D3DIndexDataBuffer::GetTotalDataSize()             0x7303B0
thiscall IDirect3DIndexBuffer9* D3DIndexDataBuffer::Pop()                          0x730250
thiscall IDirect3DIndexBuffer9* D3DIndexDataBuffer::Pop(uint indexCount)                          0x730270
thiscall bool D3DIndexDataBuffer::Push(IDirect3DIndexBuffer9* indexBuffer)                         0x730300
thiscall bool D3DIndexDataBuffer::PushWithoutIncreasingCounter(IDirect3DIndexBuffer9* indexBuffer) 0x730B00
thiscall void D3DIndexDataBuffer::Resize(uint newCapacity)                       0x730330
thiscall void D3DIndexDataBuffer::Setup(uint format, int _f4, uint capacity)                        0x730190
end

vtable 0
end
funcs
thiscall void D3DTextureBuffer::Clear()                        0x72FEC0
thiscall void D3DTextureBuffer::Destroy()                      0x72FEF0
thiscall uint D3DTextureBuffer::GetTotalDataSize()             0x7300A0
thiscall IDirect3DTexture9* D3DTextureBuffer::Pop()                          0x72FF40
thiscall IDirect3DTexture9* D3DTextureBuffer::Pop(uint format, int width, int height, int bOneLevel)                          0x72FF60
thiscall bool D3DTextureBuffer::Push(IDirect3DTexture9* texture)                         0x72FFF0
thiscall bool D3DTextureBuffer::PushWithoutIncreasingCounter(IDirect3DTexture9* texture) 0x730AD0
thiscall void D3DTextureBuffer::Resize(uint newCapacity)                       0x730020
thiscall void D3DTextureBuffer::Setup(uint format, int width, int bOneLevel, uint capacity)                        0x72FE80
end

vtable 0
end
funcs
cdecl void D3DResourceSystem::CancelBuffering() 0x730900
cdecl int D3DResourceSystem::CreateIndexBuffer(uint numIndices, uint format, IDirect3DIndexBuffer9 **ppIndexBuffer) 0x7306A0
cdecl int D3DResourceSystem::CreateTexture(int width, int height, uint format, IDirect3DTexture9 **ppTexture) 0x730510
cdecl void D3DResourceSystem::DestroyIndexBuffer(IDirect3DIndexBuffer9 *pIndexBuffer) 0x730D30
cdecl void D3DResourceSystem::DestroyTexture(IDirect3DTexture9 *pTexture) 0x730B70
cdecl uint D3DResourceSystem::GetTotalIndexDataSize() 0x7307F0
cdecl uint D3DResourceSystem::GetTotalPixelsSize() 0x730660
cdecl void D3DResourceSystem::Init() 0x730830
cdecl void D3DResourceSystem::SetUseD3DResourceBuffering(bool bUse) 0x730AC0
cdecl void D3DResourceSystem::Shutdown() 0x730A00
cdecl void D3DResourceSystem::TidyUpD3DIndexBuffers(uint count) 0x730740
cdecl void D3DResourceSystem::TidyUpD3DTextures(uint count) 0x7305E0
end

vtable 0
end
funcs
cdecl int CTheCarGenerators::CreateCarGenerator(float x,float y,float z,float angle,int modelId,short color1,short color2,uchar forceSpawn,uchar alarm,uchar doorLock,ushort minDelay,ushort maxDelay,uchar iplId,uchar) 0x6F31A0
cdecl void CTheCarGenerators::Init(void)                                                                                              0x6F3270
cdecl bool CTheCarGenerators::Load(void)                                                                                              0x5D39B0
cdecl void CTheCarGenerators::Process(void)                                                                                           0x6F3F40
cdecl void CTheCarGenerators::RemoveCarGenerators(uchar iplId)                                                                              0x6F3240
cdecl bool CTheCarGenerators::Save(void)                                                                                              0x5D38C0
end

vtable 0
end
funcs
thiscall void CCarGenerator::SwitchOff(void)                                                                                             0x6F2E30
cdecl int CCarGenerator::CalcNextGen(void)                                                                                           0x6F2E40
thiscall void CCarGenerator::Setup(float x,float y,float z,float angle,int modelId,short color1,short color2,uchar forceSpawn,uchar alarm,uchar doorLock,ushort minDelay,ushort maxDelay,uchar iplId,uchar)                  0x6F2E50
thiscall bool CCarGenerator::CheckIfWithinRangeOfAnyPlayers(void)                                                                        0x6F2F40
thiscall void CCarGenerator::SwitchOn(void)                                                                                              0x6F32C0
thiscall bool CCarGenerator::CheckForBlockage(int modelId)                                                                                       0x6F32E0
thiscall void CCarGenerator::DoInternalProcessing(void)                                                                                  0x6F34D0
thiscall void CCarGenerator::Process(void)                                                                                               0x6F3E90
end

vtable 0
end
funcs
thiscall void CSpecialPlateHandler::Init(void)       0x6F2D10
// Returns -1 if not found, or plate text id if found. outText contain plate text if found, "\0" otherwise.
thiscall int CSpecialPlateHandler::Find(int carGenId,char *outText) 0x6F2D30
thiscall void CSpecialPlateHandler::Add(int carGenId,char *plateText)  0x6F2D90
thiscall void CSpecialPlateHandler::Remove(int plateTextId)      0x6F2DD0
end

vtable 0
end
funcs
thiscall void CAnimatedBuilding::CAnimatedBuilding(void) 0x537A10
end

vtable 0
end
funcs
thiscall void CBouncingPanel::ResetPanel(void)                                               0x6F4910
thiscall void CBouncingPanel::SetPanel(short frameId,short axis,float angleLimit)                                    0x6F4920
thiscall void CBouncingPanel::ProcessPanel(CVehicle *vehicle,RwFrame *frame,CVector,CVector,float,float) 0x6F49A0
end

vtable 0
end
funcs
cdecl void CParticle::ReloadConfig(void)                                                                                     0x50C430
cdecl void CParticle::Initialise(void)                                                                                       0x50C570
cdecl void CParticle::Shutdown(void)                                                                                         0x50CF40
cdecl CParticle* CParticle::AddParticle(tParticleType type,CVector const&posn,CVector const&direction,CEntity *entity,float size,int rotationSpeed,int rotation,int currentFrame,int lifeSpan)               0x50D140
cdecl CParticle* CParticle::AddParticle(tParticleType type,CVector const&posn,CVector const&direction,CEntity *entity,float,RwRGBA const&color,int rotationSpeed,int rotation,int currentFrame,int lifeSpan) 0x50D190
cdecl void CParticle::Update(void)                                                                                           0x50DCF0
cdecl void CParticle::Render(void)                                                                                           0x50EE20
cdecl void CParticle::RemovePSystem(tParticleType particleType)                                                                           0x50F6E0
cdecl void CParticle::RemoveParticle(CParticle* particle,CParticle* previousParticle,tParticleSystemData *particleSystem)                                            0x50F720
cdecl void CParticle::AddJetExplosion(CVector const& posn,float power,float size)                                                            0x50F760
cdecl void CParticle::AddYardieDoorSmoke(CVector const& posn,CMatrix const& matrix)                                                      0x50FAA0
end

vtable 0
end
funcs
thiscall void cParticleSystemMgr::cParticleSystemMgr(void) 0x50FCB0
thiscall void cParticleSystemMgr::Initialise(void)         0x50FCD0
thiscall void cParticleSystemMgr::LoadParticleData(void)   0x50FDF0
end

vtable 0
end
funcs
cdecl char* CFileLoader::LoadLine(int fileHandle)                                           0x4761D0
cdecl char* GetFilename(char const* filepath)                                             0x476230
cdecl void LoadingScreenLoadingFile(char const* filepath)                                0x476250
cdecl void CFileLoader::LoadLevel(char const* datFilePath)                                  0x476290
cdecl void CFileLoader::LoadCollisionFromDatFile(uint gameLevel)                          0x476520
cdecl void CFileLoader::LoadTexDictionary(char const* filepath)                          0x4765B0
cdecl RwTexture* MoveTexturesCB(RwTexture *texture,void *data)                                   0x476610
cdecl void CFileLoader::AddTexDictionaries(RwTexDictionary *dst,RwTexDictionary *src) 0x476630
cdecl void GetNameAndLOD(char *nodeName, char *outName, unsigned int *outLodIndex)                                                        0x476650
cdecl RpAtomic* CFileLoader::FindRelatedModelInfoCB(RpAtomic *atomic,void *data)               0x4766C0
cdecl void CFileLoader::LoadAtomicFile(char const* filepath)                             0x476750
cdecl RpClump* CFileLoader::LoadAtomicFile2Return(char const* filepath)                      0x4767C0
cdecl void CFileLoader::LoadClumpFile(char const* filepath)                              0x476810
cdecl RpAtomic* CFileLoader::SetRelatedModelInfoCB(RpAtomic *atomic,void *data)                0x4768C0
cdecl bool CFileLoader::LoadAtomicFile(RwStream *stream,uint modelIndex)                         0x476930
cdecl bool CFileLoader::LoadClumpFile(RwStream *stream,uint modelIndex)                          0x476990
cdecl bool CFileLoader::StartLoadClumpFile(RwStream *stream,uint modelIndex)                     0x476A20
cdecl bool CFileLoader::FinishLoadClumpFile(RwStream *stream,uint modelIndex)                    0x476A70
cdecl void CFileLoader::LoadObjectTypes(char const* filepath)                            0x476AC0
cdecl void CFileLoader::ReloadPaths(char const* filepath)                                0x476DB0
cdecl void CFileLoader::ReloadObjectTypes(char const* filepath)                          0x476F30
cdecl void CFileLoader::LoadObject(char const* line)                                 0x477040
cdecl void CFileLoader::ReloadObject(char const* line)                               0x4772B0
cdecl void CFileLoader::LoadTimeObject(char const* line)                             0x4774B0
cdecl void CFileLoader::LoadMLO(char const* line)                                    0x477750
cdecl void CFileLoader::LoadMLOInstance(int modelIndex,char const* line)                        0x4777C0
cdecl void CFileLoader::LoadClumpObject(char const* line)                            0x477920
cdecl void CFileLoader::LoadVehicleObject(char const* line)                          0x477990
cdecl void CFileLoader::LoadPedObject(char const* line)                              0x477DE0
cdecl int CFileLoader::LoadPathHeader(char const* line,char *outPathType)                      0x477ED0
cdecl void CFileLoader::LoadPedPathNode(char const* line,int id,int index)                    0x477F00
cdecl void CFileLoader::LoadCarPathNode(char const* line,int id,int index)                    0x477FF0
cdecl void CFileLoader::Load2dEffect(char const* line)                               0x4780E0
cdecl void CFileLoader::LoadScene(char const* filepath)                                  0x478370
cdecl void CFileLoader::LoadMapZones(char const* filepath)                               0x478550
cdecl void CFileLoader::LoadObjectInstance(char const* line)                         0x4786B0
cdecl void CFileLoader::LoadPickup(char const* line)                                 0x4789C0
cdecl void CFileLoader::LoadZone(char const* line)                                   0x478A00
cdecl void CFileLoader::LoadCullZone(char const* line)                               0x478A90
cdecl void CFileLoader::LoadCollisionFile(char *filepath)                               0x478B20
cdecl void CFileLoader::LoadCollisionModel(uchar *buffer,CColModel &outColModel,char *name)          0x478C20
end

vtable 0
end
funcs
thiscall void CDirectory::CDirectory(int capacity)                           0x4735C0
thiscall void CDirectory::~CDirectory()                             0x4735F0
thiscall void CDirectory::AddItem(DirectoryInfo const&entry) 0x473600
thiscall void CDirectory::ReadDirFile(char const*filename)                  0x473630
thiscall bool CDirectory::WriteDirFile(char const*filename)                 0x473690
thiscall DirectoryInfo* CDirectory::FindItem(char const*name,uint &outOffset,uint &outSize)       0x4736E0
end

vtable 0
end
funcs
cdecl void CFileMgr::Initialise(void)                      0x478F80
cdecl void CFileMgr::ChangeDir(char const*dir)                0x478FB0
cdecl void CFileMgr::SetDir(char const*dir)                   0x479020
cdecl void CFileMgr::SetDirMyDocuments(void)               0x479080
cdecl int CFileMgr::LoadTextFile(char const*filepath,uchar *buffer,int size, char const*mode) 0x479090
cdecl int CFileMgr::OpenFile(char const*filepath,char const*mode)     0x479100
cdecl int CFileMgr::OpenFileForWriting(char const*filepath)       0x479120
cdecl int CFileMgr::Read(int fileHandle,char *buffer,int size)                  0x479140
cdecl int CFileMgr::Write(int fileHandle,char *buffer,int size)                 0x479160
cdecl bool CFileMgr::Seek(int fileHandle,int offset,int origin)                     0x479180
cdecl bool CFileMgr::ReadLine(int fileHandle,char *buffer,int maxSize)              0x4791D0
cdecl int CFileMgr::CloseFile(int fileHandle)                        0x479200
cdecl int CFileMgr::GetErrorReadWrite(int fileHandle)                0x479210
end

vtable 0
end
funcs
cdecl void CWeather::Init(void)                                0x522BA0
cdecl void CWeather::Update(void)                              0x522C10
cdecl void CWeather::ForceWeather(short weatherType)                       0x523170
cdecl void CWeather::ForceWeatherNow(short weatherType)                    0x523180
cdecl void CWeather::ReleaseWeather(void)                      0x5231A0
cdecl void CWeather::AddRain(void)                             0x5231B0
cdecl void RenderOneRainStreak(CVector start,CVector end,int,bool,float) 0x5240E0
cdecl void CWeather::RenderRainStreaks(void)                   0x524550
cdecl void CWeather::StoreWeatherState(void)                   0x524B20
cdecl void CWeather::RestoreWeatherState(void)                 0x524B60
end

vtable 0
end
funcs
cdecl void CTxdStore::Initialise(void)              0x527440
cdecl void CTxdStore::Shutdown(void)                0x527470
cdecl void CTxdStore::GameShutdown(void)            0x527490
cdecl int CTxdStore::AddTxdSlot(char const*name)       0x5274E0
cdecl void CTxdStore::RemoveTxdSlot(int id)            0x527520
cdecl char* CTxdStore::GetTxdName(int id)               0x527590
cdecl int CTxdStore::FindTxdSlot(char const*name)      0x5275D0
cdecl bool CTxdStore::LoadTxd(int id,char const*name)      0x5276B0
cdecl bool CTxdStore::LoadTxd(int id,RwStream *stream)       0x527700
cdecl bool CTxdStore::StartLoadTxd(int id,RwStream *stream)  0x527770
cdecl bool CTxdStore::FinishLoadTxd(int id,RwStream *stream) 0x5277E0
cdecl void CTxdStore::Create(int id)                   0x527830
cdecl void CTxdStore::RemoveTxd(int id)                0x527870
cdecl void CTxdStore::SetCurrentTxd(int id)            0x5278C0
cdecl void CTxdStore::PushCurrentTxd(void)          0x527900
cdecl void CTxdStore::PopCurrentTxd(void)           0x527910
cdecl void CTxdStore::AddRef(int id)                   0x527930
cdecl void CTxdStore::RemoveRef(int id)                0x527970
cdecl void CTxdStore::RemoveRefWithoutDelete(int id)   0x5279C0
cdecl int CTxdStore::GetNumRefs(int id)               0x527A00
end

vtable 0
end
funcs
thiscall void CPager::Init(void)                                                                  0x52B6F0
thiscall void CPager::Process(void)                                                               0x52B740
thiscall void CPager::Display(void)                                                               0x52B890
thiscall void CPager::AddMessage(ushort *text,ushort,ushort,ushort)                                   0x52B940
thiscall void CPager::AddMessageWithNumber(ushort *text,int n1,int n2,int n3,int n4,int n5,int n6,ushort,ushort,ushort) 0x52BB50
thiscall void CPager::ClearMessages(void)                                                         0x52BE00
thiscall void CPager::RestartCurrentMessage(void)                                                 0x52BE50       
end

vtable 0
end
funcs
cdecl void CMessages::Init(void)                                                              0x529310
cdecl int CMessages::GetWideStringLength(ushort *str)                                           0x529490
cdecl int CMessages::WideStringCopy(ushort *dst,ushort *src,ushort size)                                0x5294B0
cdecl bool CMessages::WideStringCompare(ushort *str1,ushort *str2,ushort size)                             0x529510
cdecl void CMessages::Process(void)                                                           0x529580
cdecl void CMessages::Display(void)                                                           0x529800
cdecl void CMessages::AddMessage(ushort *text,uint time,ushort flag)                                        0x529900
cdecl void CMessages::AddMessageJumpQ(ushort *text,uint time,ushort flag)                                   0x529A10
cdecl void CMessages::AddMessageSoon(ushort *text,uint time,ushort flag)                                    0x529AF0
cdecl void CMessages::ClearMessages(void)                                                     0x529CE0
cdecl void CMessages::ClearSmallMessagesOnly(void)                                            0x529E00
cdecl void CMessages::AddBigMessage(ushort *text,uint time,ushort flag)                                     0x529EB0
cdecl void CMessages::AddBigMessageQ(ushort *text,uint time,ushort flag)                                    0x529F60
cdecl void CMessages::AddToPreviousBriefArray(ushort *text, int n1, int n2, int n3, int n4, int n5, int n6,ushort *str) 0x52A040
cdecl void CMessages::InsertNumberInString(ushort *src, int n1, int n2, int n3, int n4, int n5, int n6,ushort *dst)         0x52A1A0
cdecl void CMessages::InsertStringInString(ushort *text,ushort *str)                                 0x52A300
cdecl void CMessages::InsertPlayerControlKeysInString(ushort *text)                               0x52A490
cdecl void CMessages::AddMessageWithNumber(ushort *text,uint time,ushort flag,int n1,int n2,int n3,int n4,int n5,int n6)      0x52A850
cdecl void CMessages::AddMessageJumpQWithNumber(ushort *text,uint time,ushort flag, int n1, int n2, int n3, int n4, int n5, int n6) 0x52A9A0
cdecl void CMessages::AddMessageSoonWithNumber(ushort *text,uint time,ushort flag, int n1, int n2, int n3, int n4, int n5, int n6)  0x52AAC0
cdecl void CMessages::AddBigMessageWithNumber(ushort *text,uint time,ushort flag, int n1, int n2, int n3, int n4, int n5, int n6)   0x52AD10
cdecl void CMessages::AddBigMessageWithNumberQ(ushort *text,uint time,ushort flag, int n1, int n2, int n3, int n4, int n5, int n6)  0x52AE00
cdecl void CMessages::AddMessageWithString(ushort *text,uint time,ushort flag,ushort *str)                     0x52AF30
cdecl void CMessages::AddMessageJumpQWithString(ushort *text,uint time,ushort flag,ushort *str)                0x52B050
cdecl void CMessages::ClearThisPrint(ushort *text)                                                0x52B140
cdecl void CMessages::ClearThisBigPrint(ushort *text)                                             0x52B3C0
cdecl void CMessages::ClearAllMessagesDisplayedByGame(void)                                   0x52B670
end

vtable 0
end
funcs
thiscall void CSprite2d::CSprite2d(void)                                                                                                                                0x51E9E0
thiscall void CSprite2d::~CSprite2d()                                                                                                                                   0x51E9F0
thiscall void CSprite2d::Delete(void)                                                                                                                                   0x51EA00
thiscall void CSprite2d::SetRecipNearClip(void)                                                                                                                         0x51EA20
thiscall void CSprite2d::SetTexture(char *name)                                                                                                                             0x51EA40
thiscall void CSprite2d::SetTexture(char *name,char *maskName)                                                                                                                      0x51EA70
thiscall RwTexture* CSprite2d::SetAddressing(RwTextureAddressMode addressing)                                                                                                            0x51EAA0
thiscall void CSprite2d::InitPerFrame(void)                                                                                                                             0x51EAE0
thiscall void CSprite2d::GetBank(int,RwTexture *)                                                                                                                       0x51EB70
thiscall void CSprite2d::AddSpriteToBank(int,CRect const&,CRGBA const&,float,float,float,float,float,float,float,float)                                                 0x51EBC0
thiscall void CSprite2d::DrawBank(int)                                                                                                                                  0x51EC50
thiscall void CSprite2d::Draw(float,float,float,float,CRGBA const&)                                                                                                     0x51ECE0
thiscall void CSprite2d::Draw(CRect const&,CRGBA const&)                                                                                                                0x51ED50
thiscall void CSprite2d::Draw(CRect const&,CRGBA const&,float,float,float,float,float,float,float,float)                                                                0x51ED90
thiscall void CSprite2d::Draw(CRect const&,CRGBA const&,CRGBA const&,CRGBA const&,CRGBA const&)                                                                         0x51EDF0
thiscall void CSprite2d::Draw(float,float,float,float,float,float,float,float,CRGBA const&)                                                                             0x51EE40
thiscall void CSprite2d::SetVertices(CRect const&,CRGBA const&,CRGBA const&,CRGBA const&,CRGBA const&,uint)                                                             0x51EE90
thiscall void CSprite2d::SetVertices(float,float,float,float,float,float,float,float,CRGBA const&,CRGBA const&,CRGBA const&,CRGBA const&)                               0x51F070
thiscall void CSprite2d::SetVertices(CRect const&,CRGBA const&,CRGBA const&,CRGBA const&,CRGBA const&,float,float,float,float,float,float,float,float)                  0x51F220
thiscall void CSprite2d::SetVertices(int,float *,float *,CRGBA const&)                                                                                                  0x51F3E0
thiscall void CSprite2d::SetMaskVertices(int,float *)                                                                                                                   0x51F490
thiscall void CSprite2d::SetVertices(RwOpenGLVertex *,CRect const&,CRGBA const&,CRGBA const&,CRGBA const&,CRGBA const&,float,float,float,float,float,float,float,float) 0x51F720
thiscall void CSprite2d::SetRenderState(void)                                                                                                                           0x51F950
thiscall void CSprite2d::DrawRect(CRect const&,CRGBA const&)                                                                                                            0x51F970
thiscall void CSprite2d::DrawRect(CRect const&,CRGBA const&,CRGBA const&,CRGBA const&,CRGBA const&)                                                                     0x51FA00
end

vtable 0
end
funcs
cdecl void* CBuilding::operator new(uint size)      0x404090
cdecl void CBuilding::operator delete(void *data) 0x4040A0
thiscall void CBuilding::CBuilding(void)         0x403E00
end

vtable 0
end
funcs
thiscall bool CControllerConfigManager::GetIsKeyboardKeyDown(RsKeyCodes key)     0x52DDB0
thiscall bool CControllerConfigManager::GetIsKeyboardKeyJustDown(RsKeyCodes key) 0x52E450
end

vtable 0
end
funcs
thiscall void CTaskComplexProstituteSolicit::CTaskComplexProstituteSolicit(CPed *pClient)   0x661A60
thiscall CTask* CTaskComplexProstituteSolicit::CreateSubTask(int taskId,CPed *pProstitute)               0x666360
cdecl void CTaskComplexProstituteSolicit::GetRidOfPlayerProstitute(void)          0x661D30
cdecl bool CTaskComplexProstituteSolicit::IsTaskValid(CPed *pProstitute,CPed *pClient)              0x661BB0
end

vtable 0
end
funcs
cdecl void CDraw::SetFOV(float fovValue)              0x6FF410
cdecl float CDraw::CalculateAspectRatio(void) 0x6FF420
end

vtable 0
end
funcs
thiscall void CDirectory::CDirectory(void)                          0x532290
thiscall void CDirectory::CDirectory(int capacity)                           0x5322A0
thiscall void CDirectory::~CDirectory()                             0x5322D0
thiscall void CDirectory::Init(int capacity,void *entries)                          0x5322F0
thiscall void CDirectory::AddItem(DirectoryInfo const&entry) 0x532310
thiscall void CDirectory::ReadDirFile(char const*filename)                  0x532350
thiscall bool CDirectory::WriteDirFile(char const*filename)                 0x532410
thiscall DirectoryInfo* CDirectory::FindItem(char const*name)                     0x532450
thiscall DirectoryInfo* CDirectory::FindItem(char const*name,uint &outOffset,uint &outStreamingSize)       0x5324A0
thiscall DirectoryInfo* CDirectory::FindItem(uint key,uint &outOffset,uint &outStreamingSize)              0x5324D0
end

vtable 0
end
funcs
// dummy function
cdecl int CCutsceneMgr::AddCutsceneHead(CObject *object,int)                         0x5B0380
cdecl void CCutsceneMgr::AppendToNextCutscene(char const*objectName,char const*animName)          0x4D5DB0
cdecl void CCutsceneMgr::AttachObjectToBone(CObject *attachment,CObject *object,int boneId)            0x5B0450
cdecl void CCutsceneMgr::AttachObjectToFrame(CObject *attachment,CEntity *object,char const*frameName)   0x5B0480
cdecl void CCutsceneMgr::AttachObjectToParent(CObject *attachment,CEntity *object)              0x5B04B0
cdecl void CCutsceneMgr::BuildCutscenePlayer(void)                              0x4D5E20
cdecl CCutsceneObject* CCutsceneMgr::CreateCutsceneObject(int modelId)                              0x5B02A0
cdecl void CCutsceneMgr::DeleteCutsceneData(void)                               0x4D5ED0
cdecl void CCutsceneMgr::DeleteCutsceneData_overlay(void)                       0x5AFD60
cdecl void CCutsceneMgr::FinishCutscene(void)                                   0x5B04D0
cdecl uint CCutsceneMgr::GetCutsceneTimeInMilleseconds(void)                    0x5B0550
cdecl bool CCutsceneMgr::HasCutsceneFinished(void)                              0x5B0570
cdecl void CCutsceneMgr::HideRequestedObjects(void)                             0x5AFAD0
cdecl void CCutsceneMgr::Initialise(void)                                       0x4D5A20
cdecl void CCutsceneMgr::IsCutsceneSkipButtonBeingPressed(void)                 0x4D5D10
cdecl void CCutsceneMgr::LoadAnimationUncompressed(char const*animName)                 0x4D5AB0
cdecl void CCutsceneMgr::LoadCutsceneData(char const*cutsceneName)                          0x4D5E80
cdecl void CCutsceneMgr::LoadCutsceneData_loading(void)                         0x5B11C0
cdecl void CCutsceneMgr::LoadCutsceneData_overlay(char const*cutsceneName)                  0x5B13F0
cdecl void CCutsceneMgr::LoadCutsceneData_postload(void)                        0x5AFBC0
cdecl void CCutsceneMgr::LoadCutsceneData_preload(void)                         0x5B05A0
cdecl void CCutsceneMgr::LoadEverythingBecauseCutsceneDeletedAllOfIt(void)      0x4D5C10
cdecl void CCutsceneMgr::RemoveCutscenePlayer(void)                             0x4D5E50
cdecl void CCutsceneMgr::RemoveEverythingBecauseCutsceneDoesntFitInMemory(void) 0x4D5AF0
cdecl void CCutsceneMgr::SetCutsceneAnim(char const*animName,CObject *object)                 0x5B0390
cdecl void CCutsceneMgr::SetCutsceneAnimToLoop(char const*animName)                     0x5B0420
// dummy function
cdecl void CCutsceneMgr::SetHeadAnim(char const*animName,CObject *headObject)                     0x5B0440
cdecl void CCutsceneMgr::SetupCutsceneToStart(void)                             0x5B14D0
cdecl void CCutsceneMgr::Shutdown(void)                                         0x4D5E60
cdecl void CCutsceneMgr::SkipCutscene(void)                                     0x5B1700
cdecl void CCutsceneMgr::StartCutscene(void)                                    0x5B1460
cdecl void CCutsceneMgr::Update(void)                                           0x4D5D00
cdecl void CCutsceneMgr::Update_overlay(void)                                   0x5B1720
cdecl short FindCutsceneAudioTrackId(char const*cutsceneName)                                0x5AFA50
cdecl void UpdateCutsceneObjectBoundingBox(RpClump *clump,int modelId)                       0x5B01E0
end

vtable 0
end
funcs
cdecl CAnimBlendClumpData* RpAnimBlendAllocateData(RpClump *clump)                                                 0x4D5F50
cdecl CAnimBlendAssociation* RpAnimBlendClumpAddAssociation(RpClump *clump,CAnimBlendAssociation *association,uint flags,float startTime,float blendAmount) 0x4D6790
cdecl CAnimBlendAssociation* RpAnimBlendClumpExtractAssociations(RpClump *clump)                                     0x4D6BE0
cdecl void RpAnimBlendClumpFillFrameArray(RpClump *clump,AnimBlendFrameData **frameData)                    0x4D64A0
cdecl AnimBlendFrameData* RpAnimBlendClumpFindBone(RpClump *clump,uint id)                                           0x4D6400
cdecl AnimBlendFrameData* RpAnimBlendClumpFindFrame(RpClump *clump,char const*name)                                   0x4D62A0
cdecl AnimBlendFrameData* RpAnimBlendClumpFindFrameFromHashKey(RpClump *clump,uint key)                               0x4D6370
cdecl CAnimBlendAssociation* RpAnimBlendClumpGetAssociation(RpClump *clump,bool,CAnimBlendHierarchy *hierarchy)               0x4D68E0
cdecl CAnimBlendAssociation* RpAnimBlendClumpGetAssociation(RpClump *clump,char const*name)                              0x4D6870
cdecl CAnimBlendAssociation* RpAnimBlendClumpGetAssociation(RpClump *clump,uint animId)                                     0x4D68B0
cdecl CAnimBlendAssociation* RpAnimBlendClumpGetFirstAssociation(RpClump *clump)                                     0x4D15E0
cdecl CAnimBlendAssociation* RpAnimBlendClumpGetFirstAssociation(RpClump *clump,uint flags)                                0x4D6A70
cdecl CAnimBlendAssociation* RpAnimBlendClumpGetMainAssociation(RpClump *clump,CAnimBlendAssociation **pAssociation,float *blendAmount)     0x4D6910
cdecl CAnimBlendAssociation* RpAnimBlendClumpGetMainAssociation_N(RpClump *clump,int n)                                0x4D6A30
cdecl CAnimBlendAssociation* RpAnimBlendClumpGetMainPartialAssociation(RpClump *clump)                               0x4D69A0
cdecl CAnimBlendAssociation* RpAnimBlendClumpGetMainPartialAssociation_N(RpClump *clump,int n)                         0x4D69F0
cdecl uint RpAnimBlendClumpGetNumAssociations(RpClump *clump)                                      0x4D6B60
cdecl uint RpAnimBlendClumpGetNumNonPartialAssociations(RpClump *clump)                            0x4D6BB0
cdecl uint RpAnimBlendClumpGetNumPartialAssociations(RpClump *clump)                               0x4D6B80
cdecl void RpAnimBlendClumpGiveAssociations(RpClump *clump,CAnimBlendAssociation *association)                0x4D6C30
cdecl void RpAnimBlendClumpInit(RpClump *clump)                                                    0x4D6720
cdecl bool RpAnimBlendClumpIsInitialized(RpClump *clump)                                           0x4D6760
cdecl void RpAnimBlendClumpPauseAllAnimations(RpClump *clump)                                      0x4D6B00
cdecl void RpAnimBlendClumpRemoveAllAssociations(RpClump *clump)                                   0x4D6C00
cdecl void RpAnimBlendClumpRemoveAssociations(RpClump *clump,uint flags)                                 0x4D6820
cdecl void RpAnimBlendClumpSetBlendDeltas(RpClump *clump,uint flags,float delta)                               0x4D67E0
cdecl void RpAnimBlendClumpUnPauseAllAnimations(RpClump *clump)                                    0x4D6B30
cdecl void RpAnimBlendClumpUpdateAnimations(RpClump *clump,float step,bool onScreen)                             0x4D34F0
cdecl RtAnimAnimation* RpAnimBlendCreateAnimationForHierarchy(RpHAnimHierarchy *hierarchy)                         0x4D60E0
cdecl char* RpAnimBlendFrameGetName(RwFrame *frame)                                                 0x4D5EF0
cdecl void RpAnimBlendFrameSetName(RwFrame *frame,char *name)                                          0x4D5F00
cdecl CAnimBlendAssociation* RpAnimBlendGetNextAssociation(CAnimBlendAssociation *association)                             0x4D6AB0
cdecl CAnimBlendAssociation* RpAnimBlendGetNextAssociation(CAnimBlendAssociation *association,uint flags)                        0x4D6AD0
cdecl void RpAnimBlendKeyFrameInterpolate(void *voidOut,void *voidIn1,void *voidIn2,float time,void *customData)                  0x4D60C0
cdecl bool RpAnimBlendPluginAttach(void)                                                      0x4D6150
end

vtable 9
void CSimpleModelInfo::SetAtomic(int atomicIndex, RpAtomic *atomic)     0x56F790
end
funcs
thiscall RpAtomic* CSimpleModelInfo::GetAtomicFromDistance(float distance)  0x56F690
thiscall float CSimpleModelInfo::GetLargestLodDistance(void)   0x56F660
thiscall RpAtomic* CSimpleModelInfo::GetLastAtomic(float distance)          0x56F620
thiscall float CSimpleModelInfo::GetLodDistance(int lodIndex)           0x56F6F0
thiscall void CSimpleModelInfo::Init(void)                    0x56F770
thiscall void CSimpleModelInfo::SetLodDistances(float *distances)      0x56F600
thiscall void CSimpleModelInfo::SetupBigBuilding(int minLineIndex,int maxLineIndex)     0x56F420
end

vtable 0
end
funcs
// dummy function; returns "-1"
cdecl int CPools::CheckBuildingAtomics(void)           0x550170
cdecl void CPools::CheckPoolsEmpty(void)                0x551950
cdecl CObject* CPools::GetObject(int handle)                       0x550050
cdecl int CPools::GetObjectRef(CObject *object)              0x550020
cdecl CPed* CPools::GetPed(int handle)                          0x54FF90
cdecl int CPools::GetPedRef(CPed *ped)                    0x54FF60
cdecl CVehicle* CPools::GetVehicle(int)                      0x54FFF0
cdecl int CPools::GetVehicleRef(CVehicle *vehicle)            0x54FFC0
cdecl void CPools::Initialise(void)                     0x550F10
// returns "true"
cdecl bool CPools::Load(void)            0x5D0890
// returns "true"
cdecl bool CPools::LoadObjectPool(void)  0x5D4A40
// returns "true"
cdecl bool CPools::LoadPedPool(void)     0x5D2D70
// returns "true"
cdecl bool CPools::LoadVehiclePool(void) 0x5D2A20
cdecl void CPools::MakeSureSlotInObjectPoolIsEmpty(int slot) 0x550080
// returns "true"
cdecl bool CPools::Save(void)            0x5D0880
// returns "true"
cdecl bool CPools::SaveObjectPool(void)  0x5D4940
// returns "true"
cdecl bool CPools::SavePedPool(void)     0x5D4B40
// returns "true"
cdecl bool CPools::SaveVehiclePool(void) 0x5D4800
cdecl void CPools::ShutDown(void)                       0x5519F0
end

vtable 0
end
funcs
// called each frame from Render2dStuff()
cdecl void CHud::Draw(void)                                               0x58FAE0
cdecl void CHud::DrawAfterFade(void)                                      0x58D490
cdecl void CHud::DrawAreaName(void)                                       0x58AA50
cdecl void CHud::DrawBustedWastedMessage(void)                            0x58CA50
cdecl void CHud::DrawCrossHairs(void)                                     0x58E020
cdecl float CHud::DrawFadeState(DRAW_FADE_STATE fadeState,int)                       0x58D580
cdecl void CHud::DrawHelpText(void)                                       0x58B6E0
cdecl void CHud::DrawMissionTimers(void)                                  0x58B180
cdecl void CHud::DrawMissionTitle(void)                                   0x58D240
cdecl void CHud::DrawOddJobMessage(uchar priority)                                 0x58CC80
cdecl void CHud::DrawRadar(void)                                          0x58A330
cdecl void CHud::DrawScriptText(uchar priority)                                    0x58C080
cdecl void CHud::DrawSubtitles(void)                                      0x58C250
cdecl void CHud::DrawSuccessFailedMessage(void)                           0x58C6A0
cdecl void CHud::DrawVehicleName(void)                                    0x58AEA0
cdecl void CHud::DrawVitalStats(void)                                     0x589650
cdecl void CHud::GetRidOfAllHudMessages(uchar)                            0x588A50
cdecl float CHud::GetYPosBasedOnHealth(uchar playerId,float pos,signed char offset)            0x588B60
cdecl void CHud::Initialise(void)                                         0x5BA850
cdecl void CHud::ReInitialise(void)                                       0x588880
cdecl void CHud::ResetWastedText(void)                                    0x589070
cdecl void CHud::SetBigMessage(char *text,ushort style)                             0x588FC0
cdecl void CHud::SetHelpMessage(char const*text,bool quickMessage,bool permanent,bool addToBrief) 0x588BE0
cdecl void CHud::SetHelpMessageStatUpdate(uchar state,ushort statId,float diff,float max)       0x588D40
cdecl void CHud::SetMessage(char *text)                                       0x588F60
cdecl void CHud::SetVehicleName(char *name)                                   0x588F50
cdecl void CHud::SetZoneName(char *name,uchar displayState)                                0x588BB0
cdecl void CHud::Shutdown(void)                                           0x588850
cdecl void CHud::DrawAmmo(CPed *ped, int x, int y, float alpha)                                           0x5893B0
cdecl void CHud::DrawPlayerInfo(void)                                     0x58EAF0
cdecl void CHud::DrawTripSkip(void)                                       0x58A160
cdecl void CHud::DrawWanted(void)                                    0x58D9A0
cdecl void CHud::DrawWeaponIcon(CPed *ped, int x, int y, float alpha)                                     0x58D7D0
cdecl void CHud::RenderArmorBar(int playerId, int x, int y)                                     0x5890A0
cdecl void CHud::RenderBreathBar(int playerId, int x, int y)                                    0x589190
cdecl void CHud::RenderHealthBar(int playerId, int x, int y)                                    0x589270
end

vtable 0
end
funcs
cdecl void CWeather::AddRain(void)                        0x72A9A0
cdecl void CWeather::AddSandStormParticles(void)          0x72A820
cdecl uchar* CWeather::FindWeatherTypesList(void)           0x72A520
cdecl void CWeather::ForceWeather(short weatherType)                  0x72A4E0
cdecl void CWeather::ForceWeatherNow(short weatherType)               0x72A4F0
cdecl bool CWeather::ForecastWeather(int weatherType,int numSteps)             0x72A590
cdecl void CWeather::Init(void)                           0x72A480
cdecl void CWeather::ReleaseWeather(void)                 0x72A510
cdecl void CWeather::RenderRainStreaks(void)              0x72AF70
cdecl void CWeather::SetWeatherToAppropriateTypeNow(void) 0x72A790
cdecl void CWeather::Update(void)                         0x72B850
cdecl void CWeather::UpdateInTunnelness(void)             0x72B630
cdecl void CWeather::UpdateWeatherRegion(CVector *posn)       0x72A640
end

vtable 0
end
funcs
// unused function; for 'weaponType', see eWeaponType
cdecl void CSpecialFX::AddWeaponStreak(int weaponType) 0x7233F0
cdecl void CSpecialFX::Init(void)           0x7268F0
cdecl void CSpecialFX::Render(void)         0x726AD0
cdecl void CSpecialFX::Render2DFXs(void)    0x721660
cdecl void CSpecialFX::ReplayStarted(void)  0x721D30
cdecl void CSpecialFX::Shutdown(void)       0x723390
cdecl void CSpecialFX::Update(void)         0x726AA0
end

vtable 0
end
funcs
cdecl void CMirrors::BeforeConstructRenderList(void)           0x726DF0
cdecl void CMirrors::BeforeMainRender(void)                    0x727140
cdecl void CMirrors::BuildCamMatrix(CMatrix *mat,CVector pointA,CVector pointB) 0x723150
cdecl void CMirrors::BuildCameraMatrixForScreens(CMatrix *mat)    0x7266B0
cdecl void CMirrors::CreateBuffer(void)                        0x7230A0
cdecl void CMirrors::Init(void)                                0x723000
cdecl void CMirrors::RenderMirrorBuffer(void)                  0x726090
cdecl void CMirrors::ShutDown(void)                            0x723050
end

vtable 0
end
funcs
cdecl void CCheckpoints::DeleteCP(uint id,ushort type)                                                                         0x722FC0
cdecl void CCheckpoints::Init(void)                                                                                    0x722880
cdecl CCheckpoint* CCheckpoints::PlaceMarker(uint id,ushort type,CVector &posn,CVector &direction,float size,uchar red,uchar green,uchar blue,uchar alpha,ushort pulsePeriod,float pulseFraction,short rotateRate) 0x722C40
cdecl void CCheckpoints::Render(void)                                                                                  0x726060
cdecl void CCheckpoints::SetHeading(uint id,float angle)                                                                        0x722970
// dummy function
cdecl void CCheckpoints::Shutdown(void)                                                                                0x7228F0
cdecl void CCheckpoints::Update(void)                                                                                  0x7229C0
cdecl void CCheckpoints::UpdatePos(uint id,CVector &posn)                                                                     0x722900
end

vtable 0
end
funcs
thiscall void CCheckpoint::Render(void) 0x725C00
end

vtable 0
end
funcs
cdecl void CBrightLights::RenderOutGeometryBuffer(void)                                        0x722150
cdecl void CBrightLights::Render(void)                                                         0x7241C0
cdecl void CBrightLights::RegisterOne(CVector posn,CVector top,CVector right,CVector at,uchar color,uchar,uchar,uchar) 0x724770
cdecl void CBrightLights::Init(void)                                                           0x722140
end

vtable 0
end
funcs
cdecl void CMotionBlurStreaks::Update(void)                                           0x7240C0
cdecl void CMotionBlurStreaks::Render(void)                                           0x7240E0
cdecl void CMotionBlurStreaks::RegisterStreak(uint red, uchar green, uchar blue, uchar alpha, CVector leftPoint, CVector rightPoint) 0x721DC0
cdecl void CMotionBlurStreaks::Init(void)                                             0x721D90
end

vtable 0
end
funcs
thiscall void CRegisteredMotionBlurStreak::Update(void) 0x721EE0
thiscall void CRegisteredMotionBlurStreak::Render(void) 0x721F70
end

vtable 0
end
funcs
thiscall void CBulletTrace::Update(void) 0x721D70
end

vtable 0
end
funcs
// 'data' is unused
cdecl RpAtomic* RemoveRefsCB(RpAtomic *atomic, void *data)   0x7226D0
cdecl void RemoveRefsForAtomic(RpClump *clump)    0x7226F0
// 'data' is a pointer to store atomic (RpAtomic **)
cdecl RpAtomic* MarkerAtomicCB(RpAtomic *atomic,void *data) 0x722220
end

vtable 0
end
funcs
// returns slot index; -1 if not found
cdecl int C3dMarkers::DirectionArrowFindFirstFreeSlot(void)                                                                      0x721120
cdecl void C3dMarkers::DirectionArrowSet(CVector posn,float size,int red,int green,int blue,int alpha,float dir_x,float dir_y,float dir_z)                                         0x721140
cdecl void C3dMarkers::DirectionArrowsDraw(void)                                                                                  0x7211F0
cdecl void C3dMarkers::DirectionArrowsInit(void)                                                                                  0x721100
cdecl void C3dMarkers::ForceRender(uchar bEnable)                                                                                         0x722870
cdecl void C3dMarkers::Init(void)                                                                                                 0x724E40
cdecl RpClump* C3dMarkers::LoadMarker(char const*modelName)                                                                                    0x722810
// load user 3d markers from save file; always return true
cdecl bool C3dMarkers::LoadUser3dMarkers(void)                                                                                    0x5D42E0
cdecl C3dMarker* C3dMarkers::PlaceMarker(uint id,ushort type,CVector &posn,float size,uchar red,uchar green,uchar blue,uchar alpha,ushort pulsePeriod,float pulseFraction,short rotateRate,float nrm_x,float nrm_y,float nrm_z,bool zCheck) 0x725120
cdecl void C3dMarkers::PlaceMarkerCone(uint id,CVector &posn,float size,uchar red,uchar green,uchar blue,uchar alpha,ushort pulsePeriod,float pulseFraction,short rotateRate,uchar bEnableCollision)                     0x726D40
cdecl void C3dMarkers::PlaceMarkerSet(uint id,ushort type,CVector &posn,float size,uchar red,uchar green,uchar blue,uchar alpha,ushort pulsePeriod,float pulseFraction,short rotateRate)                     0x725BA0
cdecl void C3dMarkers::Render(void)                                                                                               0x725040
// save user 3d markers to save file; always return true
cdecl void C3dMarkers::SaveUser3dMarkers(void)                                                                                    0x5D4300
cdecl void C3dMarkers::Shutdown(void)                                                                                             0x722710
cdecl void C3dMarkers::Update(void)                                                                                               0x7227B0
// only set material color (m_user3dMarkerColor) for first material in first atomic; 'data' is unused
cdecl RpAtomic* C3dMarkers::User3dMarkerAtomicCB(RpAtomic *atomic,void *data)                                                                    0x7210D0
cdecl void C3dMarkers::User3dMarkerDelete(int slotIndex)                                                                                    0x721090
cdecl void C3dMarkers::User3dMarkerDeleteAll(void)                                                                                0x7210B0
// returns slot index; -1 if not found
cdecl int C3dMarkers::User3dMarkerFindFirstFreeSlot(void)                                                                        0x720FB0
// returns slot index; -1 if not created; for 'colour', see eHudColours 
cdecl int C3dMarkers::User3dMarkerSet(float x,float y,float z,int colour)                                                                     0x720FD0
cdecl void C3dMarkers::User3dMarkersDraw(void)                                                                                    0x723240
end

vtable 0
end
funcs
thiscall bool C3dMarker::AddMarker(uint id,ushort type,float size,uchar red,uchar green,uchar blue,uchar alpha,ushort pulsePeriod,float pulseFraction,short rotateRate) 0x722230
thiscall void C3dMarker::DeleteMarkerObject(void)                                                0x722390
thiscall bool C3dMarker::IsZCoordinateUpToDate(void)                                             0x7226A0
thiscall void C3dMarker::Render(void)                                                            0x7223D0
thiscall void C3dMarker::SetZCoordinateIfNotUpToDate(float coordinate)                           0x724E10
thiscall void C3dMarker::UpdateZCoordinate(CVector,float)                                        0x724D40
end

vtable 0
end
funcs
cdecl void ModifyStringLabelForControlSetting(char *stringLabel)                              0x454B70
cdecl void CPickups::AddToCollectedPickupsArray(int handle)                                          0x455240
cdecl void CPickups::CreatePickupCoorsCloseToCoors(float in_x,float in_y,float in_z,float *out_x,float *out_y,float *out_z) 0x458A80
cdecl void CPickups::CreateSomeMoney(CVector coors,int amount)                                             0x458970
cdecl void CPickups::DetonateMinesHitByGunShot(CVector *shotOrigin,CVector *shotTarget)                           0x4590C0
cdecl void CPickups::DoCollectableEffects(CEntity *entity)                                          0x455E20
cdecl void CPickups::DoMineEffects(CEntity *entity)                                                 0x4560E0
cdecl void CPickups::DoMoneyEffects(CEntity *entity)                                                0x454E80
cdecl void CPickups::DoPickUpEffects(CEntity *entity)                                               0x455720
cdecl CPickup* CPickups::FindPickUpForThisObject(CObject *object)                                       0x4551C0
cdecl int CPickups::GenerateNewOne(CVector coors,uint modelId,uchar pickupType,uint ammo,uint moneyPerDay,bool isEmpty,char *message)                 0x456F20
cdecl int CPickups::GenerateNewOne_WeaponType(CVector coors,eWeaponType weaponType,uchar pickupType,uint ammo,bool isEmpty,char *message)    0x457380
// returns -1 if this index is not actual
cdecl int CPickups::GetActualPickupIndex(int pickupIndex)                                                0x4552A0
cdecl int CPickups::GetNewUniquePickupIndex(int pickupIndex)                                             0x456A30
// returns pickup handle
cdecl int CPickups::GetUniquePickupIndex(int pickupIndex)                                                0x455280
// returns TRUE if player got goodies
cdecl bool CPickups::GivePlayerGoodiesWithPickUpMI(ushort modelId,int playerId)                                0x4564F0
cdecl void CPickups::Init(void)                                                               0x454A70
cdecl bool CPickups::IsPickUpPickedUp(int pickupHandle)                                                    0x454B40
// load pickups from save file; always return TRUE
cdecl bool CPickups::Load(void)                                                               0x5D35A0
// returns model id
cdecl int CPickups::ModelForWeapon(eWeaponType weaponType)                                              0x454AC0
cdecl void CPickups::PassTime(uint time)                                                           0x455200
cdecl void CPickups::PickedUpHorseShoe(void)                                                  0x455390
cdecl void CPickups::PickedUpOyster(void)                                                     0x4552D0
cdecl void CPickups::PictureTaken(void)                                                       0x456A70
cdecl bool CPickups::PlayerCanPickUpThisWeaponTypeAtThisMoment(eWeaponType weaponType)                   0x4554C0
cdecl void CPickups::ReInit(void)                                                             0x456E60
cdecl void CPickups::RemoveMissionPickUps(void)                                               0x456DE0
cdecl void CPickups::RemovePickUp(int pickupHandle)                                                        0x4573D0
cdecl void CPickups::RemovePickUpsInArea(float cornerA_x,float cornerA_y,float cornerA_z,float cornerB_x,float cornerB_y,float cornerB_z)                 0x456D30
cdecl void CPickups::RemovePickupObjects(void)                                                0x455470
// remove pickups with types PICKUP_ONCE_TIMEOUT and PICKUP_MONEY in area
cdecl void CPickups::RemoveUnnecessaryPickups(CVector const&posn,float radius)                           0x4563A0
cdecl void CPickups::RenderPickUpText(void)                                                   0x455000
// save pickups to save file; always return TRUE
cdecl bool CPickups::Save(void)                                                               0x5D3540
// check for pickups in area
cdecl bool CPickups::TestForPickupsInBubble(CVector posn,float radius)                                    0x456450
// search for pickup in area (radius = 5.5 units) with this weapon model and pickup type and add ammo to this pickup; returns TRUE if merged
cdecl bool CPickups::TryToMerge_WeaponType(CVector posn,eWeaponType weaponType,uchar pickupType,uint ammo, bool)               0x4555A0
cdecl void CPickups::Update(void)                                                             0x458DE0
cdecl void CPickups::UpdateMoneyPerDay(int pickupHandle,ushort money)                                            0x455680
// returns weapon type (see eWeaponType)
cdecl int CPickups::WeaponForModel(int modelId)                                                      0x454AE0
end

vtable 0
end
funcs
// set pickup x y z coords
thiscall void CPickup::SetPosn(float x,float y,float z)          0x454960
// get pickup position
thiscall CVector CPickup::GetPosn(void)                       0x4549A0
// get pickup x coord
thiscall float CPickup::GetXCoord(void)                     0x4549F0
// get pickup y coord
thiscall float CPickup::GetYCoord(void)                     0x454A10
// get pickup z coord
thiscall float CPickup::GetZCoord(void)                     0x454A30
// give player an ammo from weapon pickup
thiscall void CPickup::ExtractAmmoFromPickup(CPlayerPed *playerPed) 0x454BE0
// is pickup visible (checks if distance between pickup and camera is shorter than 100 units)
thiscall bool CPickup::IsVisible(void)                     0x454C70
// delete pickup's object (CObject)
thiscall void CPickup::GetRidOfObjects(void)               0x454CF0
thiscall bool CPickup::PickUpShouldBeInvisible(void)       0x454D20
// message = GXT key
cdecl void CPickup::FindTextIndexForString(char *message)      0x455500
cdecl char* CPickup::FindStringForTextIndex(int index)         0x455540
// remove pickup
thiscall void CPickup::Remove(void)                        0x4556C0
// creates an object (CObject) for pickup. objectPoolSlotIndex - object to replace; use -1 to create a new object
thiscall void CPickup::GiveUsAPickUpObject(CObject **pObject,int objectPoolSlotIndex) 0x4567E0
// updates the pickup. Returns TRUE if pickup was removed/disabled
thiscall void CPickup::Update(CPlayerPed *playerPed,CVehicle *vehicle,int playerId) 0x457410
// checks if pickup collides with line (origin;target), removes pickup and creates an explosion. Used in previous GTA games for mine pickup
thiscall void CPickup::ProcessGunShot(CVector *origin,CVector *target) 0x4588B0
end

vtable 0
end
funcs
// dummy function
cdecl void CCollision::Update(void)                                                                                                                                            0x411E20
cdecl void CCollision::SortOutCollisionAfterLoad(void)                                                                                                                         0x411E30
cdecl bool CCollision::TestSphereSphere(CColSphere const&sphere1,CColSphere const&sphere2)                                                                                                   0x411E70
cdecl void CalculateColPointInsideBox(CBox const&box,CVector const&point,CColPoint &colPoint)                                                                                                  0x411EC0
cdecl bool CCollision::TestSphereBox(CSphere const&sphere,CBox const&box)                                                                                                               0x4120C0
cdecl bool CCollision::ProcessSphereBox(CColSphere const&sphere,CColBox const&box,CColPoint &colPoint,float &maxTouchDistance)                                                                                  0x412130
cdecl bool CCollision::PointInTriangle(CVector const&point,CVector const*triPoints)                                                                                                          0x412700
cdecl float CCollision::DistToLineSqr(CVector const*lineStart,CVector const*lineEnd,CVector const*point)                                                                                             0x412850
cdecl float CCollision::DistToMathematicalLine(CVector const*lineStart,CVector const*lineEnd,CVector const*point)                                                                                    0x412970
cdecl float CCollision::DistToMathematicalLine2D(float lineStartX,float lineStartY,float lineEndX,float lineEndY,float pointX,float pointY)                                                                                           0x412A30
cdecl float CCollision::DistAlongLine2D(float lineX,float lineY,float lineDirX,float lineDirY,float pointX,float pointY)                                                                                                    0x412A80
cdecl bool CCollision::ProcessLineSphere(CColLine const&line,CColSphere const&sphere,CColPoint &colPoint,float &depth)                                                                                0x412AA0
cdecl bool CCollision::TestLineBox_DW(CColLine const&line,CBox const&box)                                                                                                             0x412C70
cdecl bool CCollision::TestLineBox(CColLine const&line,CBox const&box)                                                                                                                0x413070
cdecl bool CCollision::TestVerticalLineBox(CColLine const&line,CBox const&box)                                                                                                        0x413080
cdecl bool CCollision::ProcessLineBox(CColLine const&line,CColBox const&box,CColPoint &colPoint,float &maxTouchDistance)                                                                                      0x413100
cdecl bool CCollision::Test2DLineAgainst2DLine(float line1StartX,float line1StartY,float line1EndX,float line1EndY,float line2StartX,float line2StartY,float line2EndX,float line2EndY)                                                                                0x4138D0
cdecl bool ProcessDiscCollision(CColPoint &colPoint1,CMatrix const&mat,CColDisk const&disk,CColPoint &colPoint2,bool &,float &,CColPoint &colPoint3)                                                             0x413960
cdecl bool CCollision::TestLineTriangle(CColLine const&line,CompressedVector const*verts,CColTriangle const&tri,CColTrianglePlane const&triPlane)                                                  0x413AC0
cdecl bool CCollision::ProcessLineTriangle(CColLine const&line,CompressedVector const*verts,CColTriangle const&tri,CColTrianglePlane const&triPlane,CColPoint &colPoint,float &maxTouchDistance,CStoredCollPoly *collPoly)         0x4140F0
cdecl bool CCollision::ProcessVerticalLineTriangle(CColLine const&line,CompressedVector const*verts,CColTriangle const&tri,CColTrianglePlane const&triPlane,CColPoint &colPoint,float &maxTouchDistance,CStoredCollPoly *collPoly) 0x4147E0
cdecl bool CCollision::IsStoredPolyStillValidVerticalLine(CVector const&lineOrigin,float lineDist,CColPoint &colPoint,CStoredCollPoly *collPoly)                                                                  0x414D70
cdecl void CCollision::GetBoundingBoxFromTwoSpheres(CColBox *bbox,CColSphere *sphere1,CColSphere *sphere2)                                                                                       0x415230
cdecl bool CCollision::IsThisVehicleSittingOnMe(CVehicle *vehicle,CVehicle *vehicleOnMe)                                                                                                         0x4152C0
cdecl bool CCollision::CheckCameraCollisionPeds(int sectorX,int sectorY,CVector *pos,CVector *dir,float *)                                                                                           0x415320
cdecl bool CCollision::CheckPeds(CVector *pos,CVector *dir,float *)                                                                                                                  0x4154A0
cdecl void ResetMadeInvisibleObjects(void)                                                                                                                                     0x415540
cdecl bool CCollision::SphereCastVsBBox(CColSphere *sphere1,CColSphere *sphere2,CColBox *box)                                                                                                   0x415590
cdecl bool CCollision::RayPolyPOP(CVector *,CVector *,CColTriangle *,CVector *,CVector *)                                                                                      0x415620
cdecl int CCollision::GetPrincipleAxis(CVector *vec)                                                                                                                             0x4156D0
cdecl bool CCollision::PointInPoly(CVector *point,CColTriangle *tri,CVector *,CVector *triVerts)                                                                                               0x415730
cdecl void CCollision::Closest3(CVector *,CVector *)                                                                                                                           0x415950
cdecl float ClosestSquaredDistanceBetweenFiniteLines(CVector *line1Start,CVector *line1End,CVector *line2Start,CVector *line2End,float)                                                                             0x415A40
cdecl bool CCollision::SphereCastVersusVsPoly(CColSphere *sphere1,CColSphere *sphere2,CColTriangle *tri,CColTrianglePlane *triPlane,CompressedVector *verts)                                                 0x415CF0
cdecl void CCollision::Init(void)                                                                                                                                              0x416260
cdecl void CCollision::Shutdown(void)                                                                                                                                          0x4162E0
cdecl void CCollision::CalculateTrianglePlanes(CCollisionData *colData)                                                                                                               0x416330
cdecl void CCollision::RemoveTrianglePlanes(CCollisionData *colData)                                                                                                                  0x416400
cdecl bool CCollision::ProcessSphereSphere(CColSphere const&sphere1,CColSphere const&sphere2,CColPoint &colPoint,float &maxTouchDistance)                                                                            0x416450
cdecl bool CCollision::TestSphereTriangle(CColSphere const&sphere,CompressedVector const*verts,CColTriangle const&tri,CColTrianglePlane const&triPlane)                                              0x4165B0
cdecl bool CCollision::ProcessSphereTriangle(CColSphere const&sphere,CompressedVector const*verts,CColTriangle const&tri,CColTrianglePlane const&triPlane,CColPoint &colPoint,float &maxTouchDistance)                       0x416BA0
cdecl bool CCollision::TestLineSphere(CColLine const&line,CColSphere const&sphere)                                                                                                       0x417470
cdecl float CCollision::DistToLine(CVector const*lineStart,CVector const*lineEnd,CVector const*point)                                                                                                0x417610
cdecl bool CCollision::TestLineOfSight(CColLine const&line,CMatrix const&transform,CColModel &colModel,bool doSeeThroughCheck,bool shootThrough)                                                                                   0x417730
cdecl bool CCollision::ProcessLineOfSight(CColLine const&line,CMatrix const&transform,CColModel &colModel,CColPoint &colPoint,float &maxTouchDistance,bool doSeeThroughCheck,bool shootThrough)                                                            0x417950
cdecl bool CCollision::ProcessVerticalLine(CColLine const&line,CMatrix const&transform,CColModel &colModel,CColPoint &colPoint,float &maxTouchDistance,bool doSeeThroughCheck,bool shootThrough,CStoredCollPoly *collPoly)                                         0x417BF0
cdecl bool CCollision::SphereCastVsSphere(CColSphere *,CColSphere *,CColSphere *)                                                                                              0x417F20
cdecl void CCollision::ClosestPointOnLine(CVector *,CVector *,CVector *,CVector *)                                                                                             0x417FD0
cdecl void CCollision::ClosestPointsOnPoly(CColTriangle *,CVector *,CVector *,CVector *)                                                                                       0x418100
cdecl void CCollision::ClosestPointOnPoly(CColTriangle *,CVector *,CVector *)                                                                                                  0x418150
cdecl bool CCollision::SphereCastVsCaches(CColSphere *sphere,CVector *,int,CColCacheEntry *,int *,CColCacheEntry *)                                                                  0x4181B0
cdecl void CCollision::CalculateTrianglePlanes(CColModel *colModel)                                                                                                                    0x418580
cdecl void CCollision::RemoveTrianglePlanes(CColModel *colModel)                                                                                                                       0x4185A0
// returns number of resulting collision points
cdecl int CCollision::ProcessColModels(CMatrix const&transform1,CColModel &colModel1,CMatrix const&transform2,CColModel &colModel2,CColPoint *colPoint1,CColPoint *colPoint2,float *maxTouchDistance, bool)                                                 0x4185C0
cdecl bool CCollision::SphereCastVsEntity(CColSphere *sphere1,CColSphere *sphere2,CEntity *entity)                                                                                                 0x419F00
cdecl bool CCollision::SphereVsEntity(CColSphere *sphere,CEntity *entity)                                                                                                                  0x41A5A0
cdecl bool CCollision::CheckCameraCollisionBuildings(int sectorX,int sectorY,CColBox *,CColSphere *,CColSphere *,CColSphere *)                                                                 0x41A820
cdecl bool CCollision::CheckCameraCollisionVehicles(int sectorX,int sectorY,CColBox *,CColSphere *,CColSphere *,CColSphere *,CVector *)                                                        0x41A990
cdecl bool CCollision::CheckCameraCollisionObjects(int sectorX,int sectorY,CColBox *,CColSphere *,CColSphere *,CColSphere *)                                                                   0x41AB20
cdecl bool CCollision::BuildCacheOfCameraCollision(CColSphere *sphere1,CColSphere *sphere2)                                                                                                  0x41AC40
cdecl bool CCollision::CameraConeCastVsWorldCollision(CColSphere *sphere1,CColSphere *sphere2,float *,float)                                                                                 0x41B000
end

vtable 0
end
funcs
thiscall void CColModel::~CColModel()                           0x40F700
thiscall void CColModel::MakeMultipleAlloc(void)                0x40F740
thiscall CColModel& CColModel::operator=(CColModel const&colModel)            0x40F7C0
thiscall void CColModel::AllocateData(void)                     0x40F810
thiscall void CColModel::AllocateData(int numSpheres, int numBoxes, int numLines, int numVertices, int numTriangles, bool disks) 0x40F870
thiscall void CColModel::AllocateData(int size)                      0x40F9B0
thiscall void CColModel::RemoveCollisionVolumes(void)           0x40F9E0
thiscall void CColModel::CalculateTrianglePlanes(void)          0x40FA30
thiscall void CColModel::RemoveTrianglePlanes(void)             0x40FA40
thiscall void CColModel::CColModel(void)                        0x40FB60
cdecl void* CColModel::operator new(uint size)                     0x40FC30
cdecl void CColModel::operator delete(void *data)                0x40FC40
end

vtable 0
end
funcs
thiscall void CCollisionData::CCollisionData(void)                 0x40F030
thiscall void CCollisionData::RemoveCollisionVolumes(void)         0x40F070
thiscall void CCollisionData::Copy(CCollisionData const&)          0x40F120
thiscall void CCollisionData::CalculateTrianglePlanes(void)        0x40F590
thiscall void CCollisionData::GetTrianglePoint(CVector &outVec,int vertId)      0x40F5E0
thiscall void CCollisionData::GetShadTrianglePoint(CVector &outVec,int vertId)  0x40F640
thiscall void CCollisionData::RemoveTrianglePlanes(void)           0x40F6A0
thiscall void CCollisionData::SetLinkPtr(void *link) 0x40F6C0
thiscall void* CCollisionData::GetLinkPtr(void)                     0x40F6E0
end

vtable 0
end
funcs
thiscall void CBoundingBox::CBoundingBox(void) 0x40FAF0
end

vtable 0
end
funcs
thiscall void CColDisk::Set(float startRadius,CVector const&start,CVector const&end,float endRadius,uchar material,uchar pieceType,uchar lighting) 0x40FD50
end

vtable 0
end
funcs
cdecl void CShinyTexts::Init(void)                    0x7221B0
cdecl void CShinyTexts::RenderOutGeometryBuffer(void) 0x7221C0
cdecl void CShinyTexts::Render(void)                                                                                                               0x724890
cdecl void CShinyTexts::RegisterOne(CVector cornerAA,CVector cornerBA,CVector cornerBB,CVector cornerAB,float u1,float v1,float u2,float v2,float u3,float v3,float u4,float v4,uchar red,uchar green,uchar blue,uchar alpha,float maxDistance) 0x724B60
end

vtable 0
end
funcs
cdecl void CPointLights::Init(void)                                                                   0x6FFB40
cdecl float CPointLights::GenerateLightsAffectingObject(CVector const*point,float *totalLighting,CEntity *entity)              0x6FFBB0
cdecl float CPointLights::GetLightMultiplier(CVector const*point)                                           0x6FFE70
cdecl void CPointLights::RemoveLightsAffectingObject(void)                                            0x6FFFE0
cdecl bool CPointLights::ProcessVerticalLineUsingCache(CVector point,float *outZ)                               0x6FFFF0
cdecl void CPointLights::AddLight(uchar lightType,CVector point,CVector direction,float radius,float red,float green,float blue,uchar fogType,bool generateExtraShadows,CEntity *entityAffected) 0x7000E0
cdecl void CPointLights::RenderFogEffect(void)                                                        0x7002D0
end

vtable 0
end
funcs
cdecl void SetAmbientColours(RwRGBAReal *colours)                                           0x57FAD0
cdecl void SetAmbientColoursForPedsCarsAndObjects(void)                              0x57FAF0
cdecl void SetAmbientColours(void)                                                   0x57FB10
cdecl void SetFullAmbient(void)                                                      0x57FB30
cdecl void ActivateDirectional(void)                                                 0x57FB50
cdecl void DeActivateDirectional(void)                                               0x57FB60
cdecl void ReSetAmbientAndDirectionalColours(void)                                   0x57FB70
cdecl void SetBrightMarkerColours(float power)                                             0x57FBA0
cdecl void SetAmbientAndDirectionalColours(float power)                                    0x57FC50
cdecl void RemoveExtraDirectionalLights(RpWorld *world)                                   0x57FCD0
cdecl void AddAnExtraDirectionalLight(RpWorld *world,float x,float y,float z,float red,float green,float blue) 0x57FD00
cdecl void WorldReplaceNormalLightsWithScorched(RpWorld *world,float intensity)                     0x57FE40
cdecl RpWorld* LightsDestroy(RpWorld *world)                                                  0x57FE80
cdecl RpWorld* LightsCreate(RpWorld *world)                                                   0x57FF50
cdecl void SetLightsWithTimeOfDayColour(RpWorld *world)                                   0x5800F0
end

vtable 0
end
funcs
cdecl RwTexture* GetFirstTexture(RwTexDictionary *texDictionary) 0x57F900
cdecl RwObject* GetFirstObject(RwFrame *frame)                  0x57F940
cdecl RpAtomic* GetFirstAtomic(RpClump *clump)                  0x57F980
end

vtable 0
end
funcs
thiscall void CPad::UpdateMouse(void)                                                             0x53F3C0
thiscall void CPad::ReconcileTwoControllersInput(CControllerState const&controllerA,CControllerState const&controllerB) 0x53F530
thiscall void CPad::SetDrunkInputDelay(int delay)                                                       0x53F910
thiscall void CPad::StartShake(short time,uchar frequency,uint)                                                  0x53F920
thiscall void CPad::StartShake_Distance(short time,uchar frequency,float x,float y,float z)                            0x53F9A0
thiscall void CPad::StartShake_Train(float x,float y)                                                 0x53FA70
// dummy function
thiscall void CPad::ProcessPCSpecificStuff(void)                                                  0x53FB40
thiscall void CPad::StopShaking(short)                                                            0x53FB50
cdecl CPad* CPad::GetPad(int padNumber)                                                                   0x53FB70
thiscall short CPad::GetSteeringLeftRight(void)                                                    0x53FB80
thiscall short CPad::GetSteeringUpDown(void)                                                       0x53FBD0
thiscall short CPad::GetPedWalkLeftRight(void)                                                     0x53FC90
thiscall short CPad::GetPedWalkUpDown(void)                                                        0x53FD30
thiscall bool CPad::GetLookLeft(void)                                                             0x53FDD0
thiscall bool CPad::GetLookRight(void)                                                            0x53FE10
thiscall bool CPad::GetLookBehindForCar(void)                                                     0x53FE70
thiscall bool CPad::GetLookBehindForPed(void)                                                     0x53FEC0
thiscall bool CPad::GetHorn(void)                                                                 0x53FEE0
thiscall bool CPad::HornJustDown(void)                                                            0x53FF30
thiscall bool CPad::GetHydraulicJump(void)                                                        0x53FF70
thiscall short CPad::GetCarGunFired(void)                                                          0x53FF90
thiscall short CPad::CarGunJustDown(void)                                                          0x53FFE0
thiscall short CPad::GetHandBrake(void)                                                            0x540040
thiscall short CPad::GetBrake(void)                                                                0x540080
thiscall bool CPad::GetExitVehicle(void)                                                          0x5400D0
thiscall bool CPad::ExitVehicleJustDown(void)                                                     0x540120
thiscall uchar CPad::GetMeleeAttack(void)                                                          0x540340
thiscall uchar CPad::MeleeAttackJustDown(void)                                                     0x540390
thiscall short CPad::GetAccelerate(void)                                                           0x5403F0
thiscall bool CPad::GetAccelerateJustDown(void)                                                   0x540440
thiscall bool CPad::NextStationJustUp(void)                                                       0x5405B0
thiscall bool CPad::LastStationJustUp(void)                                                       0x5405E0
thiscall bool CPad::CycleWeaponLeftJustDown(void)                                                 0x540610
thiscall bool CPad::CycleWeaponRightJustDown(void)                                                0x540640
thiscall bool CPad::GetTarget(void)                                                               0x540670
thiscall bool CPad::GetDuck(void)                                                                 0x540700
thiscall bool CPad::DuckJustDown(void)                                                          0x540720
thiscall bool CPad::GetJump(void)                                                                 0x540750
thiscall bool CPad::JumpJustDown(void)                                                            0x540770
thiscall bool CPad::GetSprint(void)                                                                0x5407A0
thiscall bool CPad::SprintJustDown(void)                                                          0x5407F0
thiscall bool CPad::ShiftTargetLeftJustDown(void)                                                 0x540850
thiscall bool CPad::ShiftTargetRightJustDown(void)                                                0x540880
thiscall short CPad::GetDisplayVitalStats(CPed *ped)                                                  0x5408B0
thiscall bool CPad::CollectPickupJustDown(void)                                                   0x540A70
thiscall bool CPad::GetForceCameraBehindPlayer(void)                                              0x540AE0
thiscall bool CPad::SniperZoomIn(void)                                                            0x540B30
thiscall bool CPad::SniperZoomOut(void)                                                           0x540B80
thiscall bool CPad::GetGroupControlForward(void)                                             0x541190
thiscall bool CPad::GetGroupControlBack(void)                                                0x5411B0
thiscall bool CPad::ConversationYesJustDown(void)                                                 0x5411D0
thiscall bool CPad::ConversationNoJustDown(void)                                                  0x541200
thiscall bool CPad::GroupControlForwardJustDown(void)                                             0x541230
thiscall bool CPad::GroupControlBackJustDown(void)                                                0x541260
thiscall void CPad::Clear(bool enablePlayerControls, bool resetPhase)                                                                   0x541A70
thiscall void CPad::UpdatePads(void)                                                              0x541DD0
end

vtable 0
end
funcs
cdecl float FindPlayerHeading(void)                     0x4BBF70;
cdecl CVector& FindPlayerCentreOfWorld_NoSniperShift(void) 0x4BC020;
cdecl CVector& FindPlayerCentreOfWorld(int playerId)                0x4BC0A0;
cdecl CPed* FindPlayerPed(void)                         0x4BC120;
cdecl CTrain* FindPlayerTrain(void)                       0x4BC140;
cdecl CEntity* FindPlayerEntity(void)                      0x4BC1B0;
cdecl CVehicle* FindPlayerVehicle(void)                     0x4BC1E0;
cdecl CVector& FindPlayerSpeed(void)                       0x4BC210;
cdecl CVector& FindPlayerCoors(void)                       0x4BC240;
end

vtable 0
end
funcs
cdecl short CFont::character_code(uchar character)                                 0x54FE50
cdecl int CFont::FindNewCharacter(short character)                               0x54FE70
cdecl void CFont::SetDropShadowPosition(short position)                          0x54FF20
cdecl void CFont::SetDropColor(CRGBA color)                                   0x54FF30
cdecl void CFont::SetAlphaFade(float fade)                                   0x54FFC0
cdecl void CFont::SetRightJustifyWrap(float wrap)                            0x54FFD0
cdecl void CFont::SetFontStyle(short style)                                   0x54FFE0
cdecl void CFont::SetPropOn(void)                                       0x550020
cdecl void CFont::SetPropOff(void)                                      0x550030
cdecl void CFont::SetRightJustifyOff(void)                              0x550040
cdecl void CFont::SetRightJustifyOn(void)                               0x550060
cdecl void CFont::SetBackGroundOnlyTextOff(void)                        0x550080
cdecl void CFont::SetBackGroundOnlyTextOn(void)                         0x550090
cdecl void CFont::SetBackgroundColor(CRGBA color)                             0x5500A0
cdecl void CFont::SetBackgroundOff(void)                                0x5500D0
cdecl void CFont::SetBackgroundOn(void)                                 0x5500E0
cdecl void CFont::SetCentreSize(float size)                                  0x5500F0
cdecl void CFont::SetWrapx(float wrap)                                       0x550100
cdecl void CFont::SetCentreOff(void)                                    0x550110
cdecl void CFont::SetCentreOn(void)                                     0x550120
cdecl void CFont::SetJustifyOff(void)                                   0x550140
cdecl void CFont::SetJustifyOn(void)                                    0x550150
cdecl void CFont::SetColor(CRGBA color)                                       0x550170
cdecl void CFont::SetSlant(float slant)                                       0x550200
cdecl void CFont::SetSlantRefPoint(float x,float y)                         0x550210
cdecl void CFont::SetScale(float width,float height)                                 0x550230
cdecl void CFont::DrawFonts(void)                                       0x550250
cdecl void CFont::FilterOutTokensFromString(ushort *str)                   0x550260
cdecl ushort* CFont::ParseToken(ushort *str)                                  0x5502D0
cdecl ushort* CFont::ParseToken(ushort *str,CRGBA &color,bool &flashing,bool &bold)            0x550510
cdecl float CFont::GetStringWidth(ushort *str,bool sentence)                         0x550650
cdecl void CFont::GetTextRect(CRect *rect_out,float x,float y,ushort *text)             0x550720
cdecl int CFont::GetNumberLines(float x,float y,ushort *text)                  0x550C70
cdecl void CFont::PrintString(float x,float y,ushort *text)                     0x551040
cdecl void CFont::PrintStringFromBottom(float x,float y,ushort *text)           0x551620
cdecl void CFont::PrintString(float x,float y,uint,ushort *,ushort *,float) 0x5516C0
cdecl void CFont::RenderFontBuffer(void)                                0x551A30
cdecl void CFont::PrintChar(float x,float y,short character)                          0x551E70
cdecl void CFont::InitPerFrame(void)                                    0x5522B0
cdecl void CFont::Shutdown(void)                                        0x5522E0
cdecl void CFont::Initialise(void)                                      0x552310
cdecl void UnicodeMakeUpperCase(ushort *str_out,ushort const*str_in)                 0x552470
cdecl int UnicodeStrlen(ushort const*str)                                 0x5524B0
cdecl void AsciiToUnicode(char const*str_ascii,ushort *str_unicode)                         0x552500
end

vtable 0
end
funcs
cdecl void CPlayerPed::RemovePlayerPed(int playerId)                                                      0x6094A0
cdecl void CPlayerPed::DeactivatePlayerPed(int playerId)                                                  0x609520
cdecl void CPlayerPed::ReactivatePlayerPed(int playerId)                                                  0x609540
thiscall CPad* CPlayerPed::GetPadFromPlayer(void)                                                    0x609560
thiscall bool CPlayerPed::CanPlayerStartMission(void)                                               0x609590
thiscall bool CPlayerPed::IsHidden(void)                                                            0x609620
thiscall void CPlayerPed::ReApplyMoveAnims(void)                                                    0x609650
thiscall bool CPlayerPed::DoesPlayerWantNewWeapon(eWeaponType weaponType, bool)                                 0x609710
// dummy function
thiscall void CPlayerPed::ProcessPlayerWeapon(CPad *pad)                                               0x6097F0
thiscall void CPlayerPed::PickWeaponAllowedFor2Player(void)                                         0x609800
thiscall void CPlayerPed::UpdateCameraWeaponModes(CPad *pad)                                           0x609830
thiscall void CPlayerPed::ProcessAnimGroups(void)                                                   0x6098F0
thiscall void CPlayerPed::ClearWeaponTarget(void)                                                   0x609C80
thiscall float CPlayerPed::GetWeaponRadiusOnScreen(void)                                             0x609CD0
cdecl bool CPlayerPed::PedCanBeTargettedVehicleWise(CPed *ped)                                      0x609D90
thiscall float CPlayerPed::FindTargetPriority(CEntity *entity)                                             0x609DE0
thiscall void CPlayerPed::Clear3rdPersonMouseTarget(void)                                           0x609ED0
// GetWanted()->m_nWantedLevel = 0;
thiscall void CPlayerPed::Busted(void)                                                              0x609EF0
thiscall void CPlayerPed::SetWantedLevel(int level)                                                       0x609F10
thiscall void CPlayerPed::SetWantedLevelNoDrop(int level)                                                 0x609F30
thiscall void CPlayerPed::CheatWantedLevel(int level)                                                     0x609F50
thiscall bool CPlayerPed::CanIKReachThisTarget(CVector posn, CWeapon *weapon, bool)                              0x609F80
thiscall CPlayerInfo* CPlayerPed::GetPlayerInfoForThisPlayerPed(void)                                       0x609FF0
thiscall void CPlayerPed::DoStuffToGoOnFire(void)                                                   0x60A020
thiscall void CPlayerPed::AnnoyPlayerPed(bool)                                                      0x60A040
thiscall void CPlayerPed::ClearAdrenaline(void)                                                     0x60A070
thiscall void CPlayerPed::DisbandPlayerGroup(void)                                                  0x60A0A0
thiscall void CPlayerPed::MakeGroupRespondToPlayerTakingDamage(CEventDamage const& damageEvent)                 0x60A110
thiscall void CPlayerPed::TellGroupToStartFollowingPlayer(bool, bool, bool)                           0x60A1D0
thiscall void CPlayerPed::MakePlayerGroupDisappear(void)                                            0x60A440
thiscall void CPlayerPed::MakePlayerGroupReappear(void)                                             0x60A4B0
thiscall void CPlayerPed::ResetSprintEnergy(void)                                                   0x60A530
thiscall bool CPlayerPed::HandleSprintEnergy(bool, float)                                            0x60A550
thiscall float CPlayerPed::ControlButtonSprint(eSprintType sprintType)                                          0x60A610
thiscall float CPlayerPed::GetButtonSprintResults(eSprintType sprintType)                                       0x60A820
thiscall void CPlayerPed::ResetPlayerBreath(void)                                                   0x60A8A0
thiscall void CPlayerPed::HandlePlayerBreath(bool, float)                                            0x60A8D0
thiscall void CPlayerPed::SetRealMoveAnim(void)                                                     0x60A9C0
thiscall void CPlayerPed::MakeChangesForNewWeapon(eWeaponType weaponType)                                      0x60B460
cdecl bool LOSBlockedBetweenPeds(CEntity *entity1, CEntity *entity2)                                            0x60B550
thiscall void CPlayerPed::Compute3rdPersonMouseTarget(bool meleeWeapon)                                         0x60B650
thiscall void CPlayerPed::DrawTriangleForMouseRecruitPed(void)                                      0x60BA80
thiscall bool CPlayerPed::DoesTargetHaveToBeBroken(CEntity *entity,CWeapon *weapon)                             0x60C0C0
thiscall void CPlayerPed::KeepAreaAroundPlayerClear(void)                                         0x60C1E0
thiscall void CPlayerPed::SetPlayerMoveBlendRatio(CVector *)                                        0x60C520
thiscall CPed* CPlayerPed::FindPedToAttack(void)                                                     0x60C5F0
thiscall void CPlayerPed::ForceGroupToAlwaysFollow(bool enable)                                            0x60C7C0
thiscall void CPlayerPed::ForceGroupToNeverFollow(bool enable)                                             0x60C800
thiscall void CPlayerPed::MakeThisPedJoinOurGroup(CPed *ped)                                           0x60C840
thiscall bool CPlayerPed::PlayerWantsToAttack(void)                                                 0x60CC50
thiscall void CPlayerPed::SetInitialState(bool bGroupCreated)                                                     0x60CD20
thiscall void CPlayerPed::MakeChangesForNewWeapon(int weaponSlot)                                              0x60D000
thiscall void CPlayerPed::EvaluateTarget(CEntity *target,CEntity **outTarget,float *outTargetPriority,float maxDistance,float,bool)             0x60D020
thiscall void CPlayerPed::EvaluateNeighbouringTarget(CEntity *target,CEntity **outTarget,float *outTargetPriority,float maxDistance,float,bool) 0x60D1C0
thiscall void CPlayerPed::ProcessGroupBehaviour(CPad *pad)                                             0x60D350
// return PlayerWantsToAttack();
thiscall bool CPlayerPed::PlayerHasJustAttackedSomeone(void)                                        0x60D5A0
thiscall void CPlayerPed::CPlayerPed(int playerId,bool bGroupCreated)                                                      0x60D5B0
cdecl void CPlayerPed::SetupPlayerPed(int playerId)                                                       0x60D790
thiscall void CPlayerPed::ProcessWeaponSwitch(CPad *pad)                                               0x60D850
thiscall bool CPlayerPed::FindWeaponLockOnTarget(void)                                              0x60DC50
thiscall bool CPlayerPed::FindNextWeaponLockOnTarget(CEntity *,bool)                                0x60E530
thiscall int CPlayerPed::GetWantedLevel(void)                                                      0x41BE60
end

vtable 1
void CBaseModelInfo::Shutdown(void) 0x0
void CBaseModelInfo::DeleteRwObject(void) 0x0
RwObject* CBaseModelInfo::CreateInstance(void) 0x0
RwObject* CBaseModelInfo::CreateInstance(RwMatrixTag *tranform) 0x0
RwObject* CBaseModelInfo::GetRwObject(void) 0x0
void CBaseModelInfo::SetAnimFile(char const* filename) 0x0
void CBaseModelInfo::ConvertAnimFileIndex(void) 0x0
int CBaseModelInfo::GetAnimFileIndex(void) 0x0
end
funcs
thiscall void CBaseModelInfo::RemoveRef(void)               0x53F1A0
thiscall void CBaseModelInfo::AddRef(void)                  0x53F1B0
thiscall void CBaseModelInfo::RemoveTexDictionaryRef(void)         0x53F1C0
thiscall void CBaseModelInfo::AddTexDictionaryRef(void)            0x53F1D0
thiscall void CBaseModelInfo::ClearTexDictionary(void)             0x53F1E0
thiscall void CBaseModelInfo::SetTexDictionary(char *txdName)               0x53F1F0
thiscall void CBaseModelInfo::Add2dEffect(C2dEffect *effect)      0x53F220
thiscall C2dEffect* CBaseModelInfo::Get2dEffect(int effectNumber)              0x53F260
end

vtable 0
end
funcs
cdecl void CTimer::EndUserPause(void)            0x4D0D90
cdecl void CTimer::StartUserPause(void)          0x4D0DA0
cdecl void CTimer::Stop(void)                    0x4D0DB0
cdecl bool CTimer::GetIsSlowMotionActive(void)   0x4D0DC0
cdecl uint CTimer::GetCurrentTimeInCycles(void)  0x4D0DF0
cdecl uint CTimer::GetCyclesPerMillisecond(void) 0x4D0E30
cdecl void CTimer::Resume(void)                  0x4D0E50
cdecl void CTimer::Suspend(void)                 0x4D0ED0
cdecl void CTimer::Update(void)                  0x4D0F30
cdecl void CTimer::Shutdown(void)                0x4D12F0
cdecl void CTimer::Initialise(void)              0x4D1300
end

vtable 17
void CPhysical::ProcessEntityCollision(CEntity *, CColPoint *) 0x0
end
funcs
cdecl void CPhysical::PlacePhysicalRelativeToOtherPhysical(CPhysical* phys1, CPhysical* phys2, CVector offset)      0x4AF100
thiscall void CPhysical::RemoveRefsToEntity(CEntity *entity)                                            0x4AF1D0
thiscall bool CPhysical::ProcessCollisionSectorList_SimpleCar(CSector *sector)                          0x4AF2E0
thiscall bool CPhysical::ProcessShiftSectorList(CPtrList *ptrList)                                       0x4B02B0
thiscall bool CPhysical::ProcessCollisionSectorList(CPtrList *ptrList)                                   0x4B1070
thiscall bool CPhysical::ApplyFriction(CPhysical* phys, float, CColPoint &colPoint)                              0x4B39F0
thiscall bool CPhysical::ApplyFriction(float, CColPoint &colPoint)                                         0x4B5200
thiscall bool CPhysical::ApplySpringDampening(float, CVector &, CVector &, CVector &)                0x4B5810
thiscall bool CPhysical::ApplySpringCollisionAlt(float, CVector &, CVector &, float, float, CVector &) 0x4B5AB0
thiscall bool CPhysical::ApplySpringCollision(float, CVector &, CVector &, float, float)              0x4B5C60
thiscall bool CPhysical::ApplyCollisionAlt(CEntity *entity, CColPoint &colPoint, float &, CVector &, CVector &)     0x4B5DB0
thiscall bool CPhysical::ApplyCollision(CPhysical* phys, CColPoint &colPoint, float &, float &)                   0x4B6600
thiscall bool CPhysical::ApplyCollision(CColPoint &colPoint, float &)                                      0x4B8AA0
thiscall void CPhysical::ApplyTurnSpeed(void)                                                     0x4B8EC0
thiscall bool CPhysical::GetHasCollidedWith(CEntity *entity)                                            0x4B9010
thiscall void CPhysical::AddCollisionRecord(CEntity *entity)                                            0x4B9050
thiscall bool CPhysical::CheckCollision(void)                                                     0x4B9450
thiscall void CPhysical::ApplyFrictionTurnForce(float, float, float, float, float, float)              0x4BAA00
thiscall void CPhysical::ApplyAirResistance(void)                                                 0x4BAB00
thiscall void CPhysical::ApplyMoveSpeed(void)                                                     0x4BAC70
thiscall void CPhysical::ApplyTurnForce(float, float, float, float, float, float)                      0x4BACC0
thiscall void CPhysical::ApplyMoveForce(float x, float y, float z)                                        0x4BADC0
thiscall void CPhysical::RemoveFromMovingList(void)                                               0x4BAE30
thiscall void CPhysical::AddToMovingList(void)                                                    0x4BAE90
thiscall void CPhysical::RemoveAndAdd(void)                                                       0x4BAEE0
end

vtable 0
end
funcs
cdecl void* CTreadable::operator new(uint size) 0x407FF0
thiscall void CTreadable::CTreadable(void)   0x408020
end

vtable 17
CTreadable* CBuilding::GetIsATreadable(void) 0x0
end
funcs
cdecl    bool IsBuildingPointerValid(CBuilding *building) 0x407D30
thiscall void CBuilding::ReplaceWithNewModel(int modelIndex) 0x407DB0
// CBuilding allocation
thiscall CBuilding* CBuilding::operator new(uint size)       0x407E10
// CBuilding constructor
thiscall void CBuilding::CBuilding(void)          0x407E40
end
vtable 0
end
funcs
// returns ePedRace value
cdecl int CPopulation::FindPedRaceFromName(char *raceName) 0x5B6D40
// loads pedgrp.dat
cdecl void CPopulation::LoadPedGroups(void) 0x5BCFE0
// loads cargrp.dat
cdecl void CPopulation::LoadCarGroups(void) 0x5BD1A0
// init variables at game init and reinit
cdecl void CPopulation::Initialise(void)                                                      0x610E10
// empty function
cdecl void CPopulation::Shutdown(void)                                                        0x610EC0
cdecl float CPopulation::FindDummyDistForModel(int modelIndex)                                            0x610ED0
cdecl float CPopulation::FindPedDensityMultiplierCullZone(void)                                0x610F00
// CWorld::Remove(ped); delete ped;
cdecl void CPopulation::RemovePed(CPed *ped)                                                     0x610F20
// returns 0
cdecl int CPopulation::ChoosePolicePedOccupation(void)                                       0x610F40
cdecl bool CPopulation::ArePedStatsCompatible(int statType1, int statType2)                                        0x610F50
cdecl bool CPopulation::PedMICanBeCreatedAtAttractor(int modelIndex)                                     0x6110C0
// checks if ped with specific model index can be created at script attractor
cdecl bool CPopulation::PedMICanBeCreatedAtThisAttractor(int modelIndex, char *attrName)                          0x6110E0
cdecl bool CPopulation::PedMICanBeCreatedInInterior(int modelIndex)                                      0x611450
// is model male
cdecl bool CPopulation::IsMale(int modelIndex)                                                           0x611470
// is model female
cdecl bool CPopulation::IsFemale(int modelIndex)                                                         0x611490
// returns false
cdecl bool CPopulation::IsSecurityGuard(ePedType pedType)                                             0x6114B0
// checks if surface at this point is skateable
cdecl bool CPopulation::IsSkateable(CVector const&point)                                           0x6114C0
// calls CGangs::ChooseGangPedModel(int); parameter - gang id?
cdecl void CPopulation::ChooseGangOccupation(int)                                             0x611550
// empty function, returns ped
cdecl CPed *CPopulation::AddExistingPedInCar(CPed *ped, CVehicle *vehicle)                                0x611560
// updates ped counter, for updateState see eUpdatePedCounterState
cdecl void CPopulation::UpdatePedCount(CPed *ped, uchar updateState)                                          0x611570
// empty function
cdecl void CPopulation::MoveCarsAndPedsOutOfAbandonedZones(void)                              0x6116A0
// empty function
cdecl void CPopulation::DealWithZoneChange(eLevelName, eLevelName, bool)                        0x6116B0
// returns ped creation distance multiplier
cdecl float CPopulation::PedCreationDistMultiplier(void)                                       0x6116C0
cdecl bool CPopulation::IsSunbather(int modelIndex)                                                      0x611760
// returns false
cdecl bool CPopulation::CanSolicitPlayerOnFoot(int modelIndex)                                           0x611780
// returns true if ped type is PED_TYPE_PROSTITUTE
cdecl bool CPopulation::CanSolicitPlayerInCar(int modelIndex)                                            0x611790
// returns true if ped type is PED_TYPE_CIVMALE
cdecl bool CPopulation::CanJeerAtStripper(int modelIndex)                                                0x6117B0
cdecl void CPopulation::PlaceGangMembers(ePedType pedType, int, CVector const&posn)                         0x6117D0
cdecl void CPopulation::LoadSpecificDriverModelsForCar(int carModelIndex)                                   0x6117F0
// returns ped model index
cdecl int CPopulation::FindSpecificDriverModelForCar_ToUse(int carModelIndex)                              0x611900
cdecl void CPopulation::RemoveSpecificDriverModelsForCar(int carModelIndex)                                 0x6119D0
cdecl bool CPopulation::IsCorrectTimeOfDayForEffect(C2dEffect const*effect)                         0x611B20
// return CPopulation::m_bMoreCarsAndFewerPeds? 1.7f : 1.0f;
cdecl float CPopulation::FindCarMultiplierMotorway(void)                                       0x611B60
// return 1.0f;
cdecl float CPopulation::FindPedMultiplierMotorway(void)                                       0x611B80
cdecl void CPopulation::ManagePed(CPed *ped, CVector const&playerPosn)                                      0x611FC0
cdecl int CPopulation::FindNumberOfPedsWeCanPlaceOnBenches(void)                             0x612240
cdecl void CPopulation::RemoveAllRandomPeds(void)                                             0x6122C0
cdecl bool CPopulation::TestRoomForDummyObject(CObject *object)                                     0x612320
cdecl bool CPopulation::TestSafeForRealObject(CDummyObject *dummyObject)                                 0x6123A0
cdecl CPed* CPopulation::AddPed(ePedType pedType, uint modelIndex, CVector const&posn, bool makeWander)                             0x612710
// creates male01 ped in front of car?
cdecl CPed* CPopulation::AddDeadPedInFrontOfCar(CVector const&posn, CVehicle *vehicle)                     0x612CD0
cdecl int CPopulation::ChooseCivilianOccupation(bool male, bool female, int animType, int ignoreModelIndex, int statType, bool, bool, bool checkAttractor, char *attrName) 0x612F90
cdecl void CPopulation::ChooseCivilianCoupleOccupations(int &model1, int &model2)                          0x613180
cdecl int CPopulation::ChooseCivilianOccupationForVehicle(bool male, CVehicle *vehicle)                   0x613260
cdecl void CPopulation::CreateWaitingCoppers(CVector posn, float)                                   0x6133F0
// Creates ped in a vehicle. gangPedType can be set to -1
cdecl CPed* CPopulation::AddPedInCar(CVehicle *vehicle, bool driver, int gangPedType, int seatNumber, bool male, bool criminal)                        0x613A00
cdecl void CPopulation::PlaceMallPedsAsStationaryGroup(CVector const&posn)                    0x613CD0
cdecl void CPopulation::PlaceCouple(ePedType pedType1, int modelIndex1, ePedType pedType2, int modelIndex2, CVector posn)                        0x613D60
// Creates ped at attractor. decisionMakerType can be set to -1
cdecl bool CPopulation::AddPedAtAttractor(int modelIndex, C2dEffect *attractor, CVector posn, CEntity *entity, int decisionMakerType)              0x614210
cdecl float CPopulation::FindDistanceToNearestPedOfType(ePedType pedType, CVector posn)                      0x6143E0
cdecl int CPopulation::PickGangCar(int gangId)                                                      0x614490
cdecl int CPopulation::PickRiotRoadBlockCar(void)                                            0x6144B0
cdecl void CPopulation::ConvertToRealObject(CDummyObject *dummyObject)                                   0x614580
cdecl void CPopulation::ConvertToDummyObject(CObject *object)                                       0x614670
cdecl bool CPopulation::AddToPopulation(float, float, float, float)                              0x614720
// returns number of generated peds?
cdecl int CPopulation::GeneratePedsAtAttractors(CVector posn, float, float, float, float, int decisionMakerType, int numPeds)     0x615970
cdecl void CPopulation::GeneratePedsAtStartOfGame(void)                                       0x615C90
cdecl void CPopulation::ManageObject(CObject *object, CVector const&posn)                                0x615DC0
cdecl void CPopulation::ManageDummy(CDummy *dummy, CVector const&posn)                                  0x616000
cdecl void CPopulation::ManageAllPopulation(void)                                             0x6160A0
cdecl void CPopulation::ManagePopulation(void)                                                0x616190
cdecl void CPopulation::RemovePedsIfThePoolGetsFull(void)                                     0x616300
cdecl void CPopulation::ConvertAllObjectsToDummyObjects(void)                                 0x616420
cdecl void CPopulation::PopulateInterior(int numPeds, CVector posn)                                         0x616470
cdecl void CPopulation::Update(bool generatePeds)                                                          0x616650
end

vtable 66
void CBike::ProcessAI(uint &) 0x0
end
funcs
thiscall void CBike::SetupModelNodes(void)                                                          0x6B5960
// dummy function
thiscall void CBike::dmgDrawCarCollidingParticles(CVector const& position,float power,eWeaponType weaponType)                 0x6B5A00
cdecl bool CBike::DamageKnockOffRider(CVehicle *,float,ushort,CEntity *,CVector &,CVector &)     0x6B5A10
// dummy function
thiscall CPed* CBike::KnockOffRider(eWeaponType,uchar,CPed *,bool)                                   0x6B5F40
thiscall void CBike::SetRemoveAnimFlags(CPed *ped)                                                     0x6B5F50
thiscall void CBike::ReduceHornCounter(void)                                                        0x6B5F90
thiscall void CBike::ProcessBuoyancy(void)                                                          0x6B5FB0
thiscall void CBike::ResetSuspension(void)                                                          0x6B6740
thiscall bool CBike::GetAllWheelsOffGround(void)                                                    0x6B6790
// dummy function
thiscall void CBike::DebugCode(void)                                                                0x6B67A0
thiscall void CBike::DoSoftGroundResistance(uint &)                                                 0x6B6D40
thiscall void CBike::PlayHornIfNecessary(void)                                                      0x6B7130
thiscall void CBike::CalculateLeanMatrix(void)                                                      0x6B7150
cdecl void CBike::ProcessRiderAnims(CPed *rider,CVehicle *vehicle,CRideAnimData *rideData,tBikeHandlingData *handling) 0x6B7280
thiscall void CBike::FixHandsToBars(CPed *rider)                                                         0x6B7F90
thiscall void CBike::Teleport(CVector,uchar)                                                        0x6BCFC0
thiscall void CBike::PreRender(void)                                                                0x6BD090
thiscall void CBike::Render(void)                                                                   0x6BDE20
thiscall void CBike::ProcessEntityCollision(CEntity *,CColPoint *)                                  0x6BDEA0
thiscall void CBike::ProcessControlInputs(uchar)                                                    0x6BE310
thiscall void CBike::BlowUpCar(CEntity *,uchar)                                                     0x6BEA10
thiscall void CBike::BurstTyre(uchar,bool)                                                          0x6BEB20
thiscall void CBike::PlaceOnRoadProperly(void)                                                      0x6BEEB0
thiscall void CBike::GetCorrectedWorldDoorPosition(CVector &out,CVector,CVector)                       0x6BF230
thiscall void CBike::CBike(int modelIndex,uchar createdBy)                                          0x6BF430
end

vtable 0
end
funcs
cdecl bool NodeNamePluginAttach(void)              0x72FAB0
cdecl void SetFrameNodeName(RwFrame *frame,char const*name) 0x72FB00
cdecl char* GetFrameNodeName(RwFrame *frame)             0x72FB30
end

vtable 0
end
funcs
thiscall void CStreamingInfo::Init(void)                      0x407460
thiscall void CStreamingInfo::AddToList(CStreamingInfo* listStart)      0x407480
thiscall void CStreamingInfo::RemoveFromList(void)            0x4074E0
thiscall CStreamingInfo* CStreamingInfo::GetNext(void)                   0x407520
thiscall CStreamingInfo* CStreamingInfo::GetPrev(void)                   0x407540
thiscall bool CStreamingInfo::InList(void)                    0x407560
thiscall uint CStreamingInfo::GetCdPosn(void)                 0x407570
thiscall uint CStreamingInfo::GetCdSize(void)                 0x407590
thiscall bool CStreamingInfo::GetCdPosnAndSize(uint &outPosn,uint &outSize) 0x4075A0
thiscall void CStreamingInfo::SetCdPosnAndSize(uint posn,uint size)     0x4075E0
end

vtable 0
end
funcs
thiscall void CColPoint::operator=(CColPoint const&) 0x417210
end

vtable 0
end
funcs
thiscall void CDummyObject::CDummyObject(CObject *object) 0x4E05D0
thiscall void CDummyObject::CDummyObject(void)      0x4E0640
end

vtable 0
end
funcs
cdecl void CPtrNode::operator delete(void *data) 0x4C1500
cdecl void* CPtrNode::operator new(uint size)      0x4C1520
end

vtable 0
end
funcs
thiscall void CPtrList::Flush(void) 0x4C14B0
endx

vtable 0
end
funcs
cdecl void CEntryInfoNode::operator delete(void *data) 0x489BB0
cdecl void* CEntryInfoNode::operator new(uint size)      0x489BD0
end

vtable 0
end
funcs
thiscall void CEntryInfoList::Flush(void) 0x489B60
end

vtable 0
end
funcs
cdecl    bool  IsDummyPointerValid(CDummy *dummy)   0x487460
cdecl    void* CDummy::operator new(uint size)      0x4877B0
thiscall void  CDummy::CDummy(void)                 0x4877E0
end

vtable 0
end
funcs
thiscall void CTaskComplexPlayHandSignalAnim::CTaskComplexPlayHandSignalAnim(AnimationId animationId, float blendFactor) 0x61B2B0
thiscall CTask* CTaskComplexPlayHandSignalAnim::CreateSubTask(int taskType) 0x61B2F0
thiscall int CTaskComplexPlayHandSignalAnim::GetAnimIdForPed(CPed *ped) 0x61B460
end

vtable 0
end
funcs
thiscall void CTaskManager::CTaskManager(CPed *ped)            0x6816A0
thiscall void CTaskManager::~CTaskManager()                 0x6816D0
thiscall CTask* CTaskManager::GetActiveTask(void)             0x681720
thiscall CTask* CTaskManager::FindActiveTaskByType(int taskType)       0x681740
thiscall CTask* CTaskManager::FindTaskByType(int taskIndex,int taskType)         0x6817D0
thiscall CTask* CTaskManager::GetTaskSecondary(int)           0x681810
thiscall bool CTaskManager::HasTaskSecondary(CTask const*task)  0x681820
thiscall void CTaskManager::Flush(void)                     0x681850
thiscall void CTaskManager::FlushImmediately(void)          0x6818A0
thiscall void CTaskManager::SetNextSubTask(CTask *task)         0x681920
thiscall CTask* CTaskManager::GetSimplestTask(CTask *task)        0x681970
thiscall void CTaskManager::StopTimers(CEvent const*_event)       0x6819A0
thiscall CTask* CTaskManager::GetSimplestActiveTask(void)     0x6819D0
thiscall CTask* CTaskManager::GetSimplestTask(int taskIndex)            0x681A00
thiscall void CTaskManager::AddSubTasks(CTask *task)            0x681A30
thiscall void CTaskManager::ParentsControlChildren(CTask *task) 0x681A80
thiscall void CTaskManager::SetTask(CTask *task,int taskIndex,bool)       0x681AF0
thiscall void CTaskManager::SetTaskSecondary(CTask *task,int taskIndex)   0x681B60
thiscall void CTaskManager::ClearTaskEventResponse(void)    0x681BD0
thiscall void CTaskManager::ManageTasks(void)               0x681C10
end

vtable 66
void CBike::ProcessAI(uint& outFlags) 0x0
end
funcs
thiscall void CBike::SetupModelNodes(void) 0x6B5960
thiscall void CBike::dmgDrawCarCollidingParticles(CVector const& position, float force, eWeaponType weapon) 0x6B5A00

end

vtable 0
end
funcs
thiscall void CObject::ProcessGarageDoorBehaviour(void)                                             0x44A4D0
thiscall bool CObject::CanBeDeleted(void)                                                           0x59F120
thiscall void CObject::SetRelatedDummy(CDummyObject *relatedDummy)                                              0x59F160
cdecl    void CObject::SetMatrixForTrainCrossing(CMatrix *matrix,float)                                   0x59F200
thiscall bool CObject::TryToExplode(void)                                                           0x59F2D0
thiscall void CObject::SetObjectTargettable(uchar targetable)                                                  0x59F300
thiscall bool CObject::CanBeTargetted(void)                                                         0x59F320
thiscall void CObject::RefModelInfo(int modelIndex)                                                            0x59F330
thiscall void CObject::SetRemapTexture(RwTexture *remapTexture, short txdIndex)                                     0x59F350
thiscall float CObject::GetRopeHeight(void)                                                          0x59F380
thiscall void CObject::SetRopeHeight(float height)                                                         0x59F3A0
thiscall CEntity* CObject::GetObjectCarriedWithRope(void)                                               0x59F3C0
thiscall void CObject::ReleaseObjectCarriedWithRope(void)                                           0x59F3E0
thiscall void CObject::AddToControlCodeList(void)                                                   0x59F400
thiscall void CObject::RemoveFromControlCodeList(void)                                              0x59F450
thiscall void CObject::ResetDoorAngle(void)                                                         0x59F4B0
thiscall void CObject::LockDoor(void)                                                               0x59F5C0
thiscall void CObject::Init(void)                                                                   0x59F840
thiscall void CObject::DoBurnEffect(void)                                                           0x59FB50
thiscall uchar CObject::GetLightingFromCollisionBelow(void)                                          0x59FD00
thiscall void CObject::ProcessSamSiteBehaviour(void)                                                0x5A07D0
thiscall void CObject::ProcessTrainCrossingBehaviour(void)                                          0x5A0B50
thiscall void CObject::ObjectDamage(float damage,CVector *fxOrigin,CVector *fxDirection,CEntity *damager,eWeaponType weaponType)                0x5A0D90
thiscall void CObject::Explode(void)                                                                0x5A1340
thiscall void CObject::ObjectFireDamage(float damage,CEntity *damager)                                            0x5A1580
cdecl void CObject::TryToFreeUpTempObjects(int numObjects)                                                  0x5A1840
cdecl void CObject::DeleteAllTempObjects(void)                                                   0x5A18B0
cdecl void CObject::DeleteAllMissionObjects(void)                                                0x5A1910
cdecl void CObject::DeleteAllTempObjectsInArea(CVector point,float radius)                                    0x5A1980
thiscall void CObject::GrabObjectToCarryWithRope(CPhysical *attachTo)                                       0x5A1AB0
thiscall bool CObject::CanBeUsedToTakeCoverBehind(void)                                             0x5A1B60
thiscall CObject* CObject::Create(modelIndex)                                                                  0x5A1F60
thiscall CObject* CObject::Create(CDummyObject *dummyObject)                                                       0x5A2070
thiscall void CObject::ProcessControlLogic(void)                                                    0x5A29A0
cdecl    bool IsObjectPointerValid_NotInWorld(CObject *object)                                            0x5A2B90
cdecl    bool IsObjectPointerValid(CObject *object)                                                       0x5A2C20
end

vtable 0
void CEntity::Add(void)                               0x0
void CEntity::Remove(void)                            0x0
void CEntity::~CEntity()                              0x0
void CEntity::SetModelIndex(uint modelIndex)          0x0
void CEntity::SetModelIndexNoCreate(uint modelIndex)  0x0
void CEntity::CreateRwObject(void)                    0x0
void CEntity::DeleteRwObject(void)                    0x0
CRect CEntity::GetBoundRect(void)                     0x0
void CEntity::ProcessControl(void)                    0x0
void CEntity::ProcessCollision(void)                  0x0
void CEntity::ProcessShift(void)                      0x0
void CEntity::Teleport(CVector posn)                  0x0
void CEntity::PreRender(void)                         0x0
void CEntity::Render(void)                            0x0
bool CEntity::SetupLighting(void)                     0x0
void CEntity::RemoveLighting(bool resetWorldColors)   0x0
void CEntity::FlagToDestroyWhenNextProcessed(void)    0x0
void CEntity::GetIsATreadable(void)                   0x0
end
funcs
thiscall void CEntity::SetRwObjectAlpha(int alpha)                    0x487990
thiscall void CEntity::ModifyMatrixForTreeInWind(void)                0x487A20
thiscall void CEntity::SetupBigBuilding(void)                         0x487C70
thiscall float CEntity::GetDistanceFromCentreOfMassToBaseOfModel(void) 0x487D10
thiscall bool CEntity::GetIsOnScreenComplex(void)                     0x488250
thiscall bool CEntity::GetIsOnScreen(void)                            0x4885D0
thiscall bool CEntity::IsVisible(void)                                0x488720
thiscall bool CEntity::GetIsTouching(CVector  const&posn,float radius)           0x488740
thiscall bool CEntity::HasPreRenderEffects(void)                      0x489170
thiscall void CEntity::UpdateRpHAnim(void)                            0x489330
thiscall void CEntity::UpdateRwFrame(void)                            0x489360
thiscall void CEntity::GetBoundCentre(CVector &out)                      0x489380
thiscall CVector CEntity::GetBoundCentre(void)                           0x4893D0
cdecl RpAtomic *AtomicRemoveAnimFromSkinCB(RpAtomic *atomic,void *callbackData)           0x489750
thiscall void CEntity::DetachFromRwObject(void)                       0x489790
thiscall void CEntity::AttachToRwObject(RwObject *rwObject)                   0x4897C0
thiscall void CEntity::~CEntity()                                     0x4898E0
thiscall void CEntity::CEntity(void)                                  0x489910
thiscall void CEntity::PruneReferences(void)                          0x4C69F0
thiscall void CEntity::ResolveReferences(void)                        0x4C6A30
thiscall void CEntity::CleanUpOldReference(CEntity** pEntity)                 0x4C6A80
thiscall void CEntity::RegisterReference(CEntity** pEntity)                   0x4C6AC0
thiscall void CEntity::ProcessLightsForEntity(void)                   0x541590
thiscall bool CEntity::IsEntityOccluded(void)                         0x634AE0
end

vtable 0
end
funcs
thiscall bool CPlaceable::IsWithinArea(float x1,float y1,float z1,float x2,float y2,float z2) 0x4BB900
thiscall bool CPlaceable::IsWithinArea(float x1,float y1,float x2,float y2)             0x4BB9E0
thiscall void CPlaceable::SetHeading(float heading)                         0x4BBA80
thiscall void CPlaceable::CPlaceable(void)                                  0x4BBAD0
end

vtable 0
end
funcs
cdecl CMatrix operator*(CMatrix  const&a,CMatrix  const&b)   0x4DE6C0
cdecl void Invert(CMatrix  const&in,CMatrix&out)             0x4DE870
thiscall void CMatrix::CopyToRwMatrix(RwMatrixTag *rwMatrix)       0x4DE960
cdecl CMatrix Invert(CMatrix  const&in)                      0x4DE9C0
thiscall void CMatrix::Reorthogonalise(void)               0x4DEA30
thiscall void CMatrix::Rotate(float x,float y,float z)           0x4DEBA0
thiscall void CMatrix::RotateZ(float angle)                      0x4DEEB0
thiscall void CMatrix::RotateY(float angle)                      0x4DEFE0
thiscall void CMatrix::RotateX(float angle)                      0x4DF110
thiscall void CMatrix::SetRotate(float x,float y,float z)        0x4DF240
thiscall void CMatrix::SetRotateZ(float angle)                   0x4DF3B0
thiscall void CMatrix::SetRotateY(float angle)                   0x4DF450
thiscall void CMatrix::SetRotateX(float angle)                   0x4DF4F0
thiscall void CMatrix::SetRotateZOnly(float angle)               0x4DF590
thiscall void CMatrix::SetRotateXOnly(float angle)               0x4DF620
thiscall void CMatrix::SetTranslateOnly(float x,float y,float z) 0x4DF6B0
thiscall void CMatrix::SetTranslate(float x,float y,float z)     0x4DF6D0
thiscall void CMatrix::SetScale(float factor)                     0x4DF730
thiscall void CMatrix::ResetOrientation(void)              0x4DF780
thiscall void CMatrix::SetUnity(void)                      0x4DF7C0
thiscall void CMatrix::operator+=(CMatrix const&right)          0x4DF820
thiscall void CMatrix::CopyOnlyMatrix(CMatrix const&src)      0x4DF8A0
thiscall void CMatrix::operator=(CMatrix const&right)           0x4DF8C0
thiscall void CMatrix::UpdateRW(void)                      0x4DF8F0
thiscall void CMatrix::Update(void)                        0x4DF970
thiscall void CMatrix::Detach(void)                        0x4DF9E0
thiscall void CMatrix::AttachRW(RwMatrixTag *rwMatrix,bool deleteOnDetach)        0x4DFA00
thiscall void CMatrix::Attach(RwMatrixTag *rwMatrix,bool deleteOnDetach)          0x4DFA40
thiscall void CMatrix::~CMatrix()                          0x4DFAE0
thiscall void CMatrix::CMatrix(RwMatrixTag *rwMatrix,bool deleteOnDetach)         0x4DFB00
thiscall void CMatrix::CMatrix(CMatrix const&src)             0x4DFBA0
cdecl CVector operator*(CMatrix  const&m,CVector  const&v)   0x4DFF20
cdecl CVector Multiply3x3(CVector  const&v,CMatrix  const&m) 0x4DFFB0
cdecl CVector Multiply3x3(CMatrix  const&m,CVector  const&v) 0x4E0030
end

vtable 0
end
funcs
// damageCompId - eLights/ePanel/... id for this component
thiscall bool CDamageManager::GetComponentGroup(tComponent component, tComponentGroup* group, uchar *damageCompId) 0x6C2040
thiscall void CDamageManager::ResetDamageStatus(void)                                 0x6C20E0
thiscall void CDamageManager::SetLightStatus(eLights light, uint status)                            0x6C2100
thiscall uint CDamageManager::GetLightStatus(eLights light)                                 0x6C2130
thiscall void CDamageManager::SetPanelStatus(int panel, uint status)                                0x6C2150
thiscall uint CDamageManager::GetPanelStatus(int)                                     0x6C2180
thiscall void CDamageManager::SetWheelStatus(int wheel, uint status)                                0x6C21A0
thiscall uint CDamageManager::GetWheelStatus(int wheel)                                     0x6C21B0
thiscall void CDamageManager::SetDoorStatus(eDoors door, uint status)                              0x6C21C0
thiscall void CDamageManager::SetDoorStatus(int doorNodeIndex, uint status)                                 0x6C21E0
thiscall uint CDamageManager::GetDoorStatus(int doorNodeIndex)                                      0x6C2230
thiscall uint CDamageManager::GetDoorStatus(eDoors door)                                   0x6C2250
// Status is a value between 0-250
thiscall void CDamageManager::SetEngineStatus(uint status)                                   0x6C22A0
// Status is a value between 0-250
thiscall uint CDamageManager::GetEngineStatus(void)                                   0x6C22C0
thiscall void CDamageManager::SetAeroplaneCompStatus(int component, uint status)                        0x6C22D0
thiscall uint CDamageManager::GetAeroplaneCompStatus(int component)                             0x6C2300
// damageCompId - eLights/ePanel/... id for this component
thiscall bool CDamageManager::ProgressDoorDamage(uchar damageCompId, CAutomobile *car)                 0x6C2320
// Empty function
thiscall bool CDamageManager::ProgressEngineDamage(float)                             0x6C23B0
// Set next level of damage to panel
thiscall bool CDamageManager::ProgressPanelDamage(uchar panel)                              0x6C23C0
// Set next level of damage to panel
thiscall bool CDamageManager::ProgressWheelDamage(uchar wheel)                              0x6C2440
// Set next level of damage to aeroplane component
thiscall bool CDamageManager::ProgressAeroplaneDamage(uchar component)                          0x6C2460
thiscall bool CDamageManager::ApplyDamage(CAutomobile car, tComponent component, float intensity, float)         0x6C24B0
thiscall void CDamageManager::FuckCarCompletely(bool skipWheels)                                 0x6C25D0
// returns -1 if no node for this panel
thiscall int CDamageManager::GetCarNodeIndexFromPanel(ePanels panel)                       0x6C26A0
// returns -1 if no node for this door
thiscall int CDamageManager::GetCarNodeIndexFromDoor(eDoors door)                         0x6C26F0
thiscall void CDamageManager::Reset(void)                                             0x6A04E0
end

vtable 66
void CAutomobile::ProcessAI(uint &)              0x0
void CAutomobile::ResetSuspension(void)          0x0
void CAutomobile::ProcessFlyingCarStuff(void)    0x0
void CAutomobile::DoHoverSuspensionRatios(void)  0x0
void CAutomobile::ProcessSuspension(void)        0x0
end
funcs
// Find and save components ptrs (RwFrame) to m_apModelNodes array
thiscall void CAutomobile::SetupModelNodes(void)                                                         0x6A0770
// Process vehicle hydraulics
thiscall void CAutomobile::HydraulicControl(void)                                                        0x6A07A0
// Sets the angle of a vehicles extra. Called at 08A4 opcode (CONTROL_MOVABLE_VEHICLE_PART)
thiscall bool CAutomobile::UpdateMovingCollision(float angle)                                                  0x6A1460
// Called at 098D opcode (GET_CAR_MOVING_COMPONENT_OFFSET)
thiscall float CAutomobile::GetMovingCollisionOffset(void)                                                0x6A2150
// Makes the helicopter fly to the specified location, keeping a specific Z height/altitude. This must be called for helis only.
thiscall void CAutomobile::TellHeliToGoToCoors(float x, float y, float z, float altitudeMin, float altitudeMax)                                  0x6A2390
// Force orientation for heli to specified angle (radians)
thiscall void CAutomobile::SetHeliOrientation(float angle)                                                     0x6A2450
// Cancel orientation forcing (m_fForcedOrientation = -1.0f)
thiscall void CAutomobile::ClearHeliOrientation(void)                                                    0x6A2460
// Makes the plane fly to the specified location, keeping a specific Z height/altitude.
thiscall void CAutomobile::TellPlaneToGoToCoors(float x, float y, float z, float altitudeMin, float altitudeMax)                                 0x6A2470
// Empty function
thiscall void CAutomobile::HideAllComps(void)                                                            0x6A2510
// Empty function
thiscall void CAutomobile::ShowAllComps(void)                                                            
// Set random damage to vehicle. Called when generating a vehicle @CCarCtrl::GenerateOneRandomCar
thiscall void CAutomobile::SetRandomDamage(bool)                                                         0x6A2530
// Make a vehicle fully damaged
thiscall void CAutomobile::SetTotalDamage(bool)                                                          0x6A27F0
// Disable matfx (material effects) for material (callback), "data" parameter is unused
cdecl RpMaterial *DisableMatFx(RpMaterial *material, void *data)                                                          0x6A2980
// if(m_nHornCounter) m_nHornCounter--;
thiscall void CAutomobile::ReduceHornCounter(void)                                                       0x6A29A0
// Apply custom car plate texture to vehicle
thiscall void CAutomobile::CustomCarPlate_BeforeRenderingStart(CVehicleModelInfo *model)                      0x6A2F00
// Reset car plate texture after rendering
thiscall void CAutomobile::CustomCarPlate_AfterRenderingStop(CVehicleModelInfo *model)                        0x6A2F30
// Check if vehicle is in air
thiscall bool CAutomobile::GetAllWheelsOffGround(void)                                                   0x6A2F70
// Some debug function
thiscall void CAutomobile::DebugCode(void)                                                               0x6A2F80
// Repair vehicle's tyre
thiscall void CAutomobile::FixTyre(eWheels wheel)                                                              0x6A3580
// Repair vehicle's door. "nodeIndex" is an index of component in m_apModelNodes array
thiscall void CAutomobile::FixDoor(int nodeIndex, eDoors door)                                                           0x6A35A0
// Repair vehicle's panel. "nodeIndex" is an index of component in m_apModelNodes array
thiscall void CAutomobile::FixPanel(int nodeIndex, ePanels panel)                                                         0x6A3670
// Enable/disable taxi light for taxi
thiscall void CAutomobile::SetTaxiLight(bool enable)                                                            0x6A3740
// Enable taxi light for all taxis (CAutomobile::m_sAllTaxiLights = true;)
cdecl void CAutomobile::SetAllTaxiLights(bool)                                                        0x6A3760
// Play horn for NPC vehicle (called @CAutomobile::ProcessAI)
thiscall void CAutomobile::PlayHornIfNecessary(void)                                                     0x6A3820
thiscall void CAutomobile::SetBusDoorTimer(uint time, uchar)                                                   0x6A3860
thiscall void CAutomobile::ProcessAutoBusDoors(void)                                                     0x6A38A0
// Make player vehicle jumps when pressing horn
thiscall void CAutomobile::BoostJumpControl(void)                                                        0x6A3A60
// Creates/updates nitro particle
thiscall void CAutomobile::DoNitroEffect(float state)                                                          0x6A3BD0
// Remove nitro particle
thiscall void CAutomobile::StopNitroEffect(void)                                                         0x6A3E60
thiscall void CAutomobile::NitrousControl(signed char)                                                   0x6A3EA0
thiscall void CAutomobile::TowTruckControl(void)                                                         0x6A40F0
// Empty function
thiscall CPed* CAutomobile::KnockPedOutCar(eWeaponType, ushort, CPed *)                                     0x6A44C0
thiscall void CAutomobile::PopBootUsingPhysics(void)                                                     0x6A44D0
// Close all doors
thiscall void CAutomobile::CloseAllDoors(void)                                                           0x6A4520
thiscall void CAutomobile::DoSoftGroundResistance(uint &)                                                0x6A4AF0
thiscall void CAutomobile::ProcessCarWheelPair(int, int, float, CVector *, CVector *, float, float, float, bool) 0x6A4EC0
thiscall float CAutomobile::GetCarRoll(void)                                                              0x6A6010
thiscall float CAutomobile::GetCarPitch(void)                                                             0x6A6050
thiscall bool CAutomobile::IsInAir(void)                                                                 0x6A6140
// Create colliding particles
thiscall void CAutomobile::dmgDrawCarCollidingParticles(CVector  const& position, float force, eWeaponType weapon)               0x6A6DC0
thiscall void CAutomobile::ProcessCarOnFireAndExplode(uchar)                                             0x6A7090
thiscall CObject* CAutomobile::SpawnFlyingComponent(int nodeIndex, uint collisionType)                                                0x6A8580
thiscall void CAutomobile::ProcessBuoyancy(void)                                                         0x6A8C00
// Process combine
thiscall void CAutomobile::ProcessHarvester(void)                                                        0x6A9680
thiscall void CAutomobile::ProcessSwingingDoor(int nodeIndex, eDoors door)                                               0x6A9D70
// Returns spawned flying component?
thiscall CObject* CAutomobile::RemoveBonnetInPedCollision(void)                                              0x6AA200
thiscall void CAutomobile::UpdateWheelMatrix(int nodeIndex, int flags)                                                    0x6AA290
thiscall void CAutomobile::PopDoor(int nodeIndex, eDoors door, bool showVisualEffect)                                                      0x6ADEF0
thiscall void CAutomobile::PopPanel(int nodeIndex, ePanels panel, bool showVisualEffect)                                                    0x6ADF80
thiscall void CAutomobile::ScanForCrimes(void)                                                           0x6ADFF0
thiscall void CAutomobile::TankControl(void)                                                             0x6AE850
// Makes a vehicles acts like a tank on a road - blows up collided vehicles. Must be called in a loop
thiscall void CAutomobile::BlowUpCarsInPath(void)                                                        0x6AF110
thiscall void CAutomobile::PlaceOnRoadProperly(void)                                                     0x6AF420
thiscall void CAutomobile::PopBoot(void)                                                                 0x6AF910
thiscall void CAutomobile::CloseBoot(void)                                                               0x6AFA20
thiscall void CAutomobile::DoHeliDustEffect(float, float)                                                 0x6B0690
thiscall void CAutomobile::CAutomobile(int modelIndex, uchar usage, bool setupSuspensionLines)                                                   0x6B0A90
thiscall void CAutomobile::SetBumperDamage(ePanels panel, bool withoutVisualEffect)                                             0x6B1350
thiscall void CAutomobile::SetPanelDamage(ePanels panel, bool createWindowGlass)                                                  0x6B1480
thiscall void CAutomobile::SetDoorDamage(eDoors door, bool withoutVisualEffect)                                                0x6B1600
thiscall bool CAutomobile::RcbanditCheck1CarWheels(CPtrList &ptrlist)                                           0x6B3F70
thiscall bool CAutomobile::RcbanditCheckHitWheels(void)                                                  0x6B45E0
thiscall void CAutomobile::FireTruckControl(float)                                                       0x729B60
thiscall bool CAutomobile::HasCarStoppedBecauseOfLight(void)                                             0x44D520
// callback
cdecl RpAtomic* GetCurrentAtomicObjectCB(RwObject *object, void *data)                                   0x6A0750
end

vtable 0
end
funcs
cdecl void CRadar::LoadTextures(void)                                                       0x5827D0
cdecl int CRadar::GetNewUniqueBlipIndex(int blipArrId)                                               0x582820
cdecl int CRadar::GetActualBlipArrayIndex(int blipIndex)                                             0x582870
cdecl void CRadar::DrawLegend(int x,int y,int blipType)                                                  0x5828A0
cdecl float CRadar::LimitRadarPoint(CVector2D &point)                                             0x5832F0
cdecl void CRadar::LimitToMap(float *pX,float *pY)                                              0x583350
cdecl uchar CRadar::CalculateBlipAlpha(float distance)                                                0x583420
cdecl void CRadar::TransformRadarPointToScreenSpace(CVector2D &out,CVector2D const&in)           0x583480
cdecl void CRadar::TransformRealWorldPointToRadarSpace(CVector2D &out,CVector2D const&in)        0x583530
cdecl void CRadar::TransformRadarPointToRealWorldSpace(CVector2D &out,CVector2D const&in)        0x5835A0
cdecl void CRadar::TransformRealWorldToTexCoordSpace(CVector2D &out,CVector2D const&in,int,int)  0x583600
cdecl void CRadar::CalculateCachedSinCos(void)                                              0x583670
cdecl int CRadar::SetCoordBlip(eBlipType type,CVector posn,uint,eBlipDisplay blipDisplay, char* scriptName)                        0x583820
cdecl int CRadar::SetShortRangeCoordBlip(eBlipType type,CVector posn,uint,eBlipDisplay blipDisplay, char* scriptName)              0x583920
cdecl int CRadar::SetEntityBlip(eBlipType type,int entityHandle,uint,eBlipDisplay blipDisplay)                           0x5839A0
cdecl void CRadar::ChangeBlipColour(int blipIndex,uint color)                                               0x583AB0
cdecl bool CRadar::HasThisBlipBeenRevealed(int blipArrId)                                             0x583AF0
cdecl bool CRadar::DisplayThisBlip(int spriteId,char priority)                                         0x583B40
cdecl void CRadar::ChangeBlipBrightness(int blipIndex,int brightness)                                            0x583C70
cdecl void CRadar::ChangeBlipScale(int blipIndex,int size)                                                 0x583CC0
cdecl void CRadar::ChangeBlipDisplay(int blipIndex,eBlipDisplay blipDisplay)                                      0x583D20
cdecl void CRadar::SetBlipSprite(int blipIndex,int spriteId)                                                   0x583D70
cdecl void CRadar::SetBlipAlwaysDisplayInZoom(int blipIndex,uchar display)                                    0x583DB0
cdecl void CRadar::SetBlipFade(int blipIndex,uchar fade)                                                   0x583E00
cdecl void CRadar::SetCoordBlipAppearance(int blipIndex,uchar appearance)                                        0x583E50
cdecl void CRadar::SetBlipFriendly(int blipIndex,uchar friendly)                                               0x583EB0
cdecl void CRadar::SetBlipEntryExit(int blipIndex,CEntryExit *enex)                                       0x583F00
cdecl void CRadar::ShowRadarTrace(float x,float y,uint size,uchar red,uchar green,uchar blue,uchar alpha)                 0x583F40
// type 2 - box, 0,1 - triangles
cdecl void CRadar::ShowRadarTraceWithHeight(float x,float y,uint size,uchar red,uchar green,uchar blue,uchar alpha,uchar type) 0x584070
// show debug line at this position
cdecl void CRadar::ShowRadarMarker(CVector posn,uint color,float radius)                                      0x584480
cdecl uint CRadar::GetRadarTraceColour(uint color,uchar bright, uchar friendly)                                          0x584770
cdecl void CRadar::DrawRotatingRadarSprite(CSprite2d *sprite,float x,float y,float angle,uint width, uint height, CRGBA const&color)             0x584850
cdecl void CRadar::DrawYouAreHereSprite(float x,float y)                                        0x584960
cdecl void CRadar::SetupRadarRect(int x,int y)                                                  0x584A80
cdecl bool ClipRadarTileCoords(int &x,int &y)                                                 0x584B00
cdecl void CRadar::RequestMapSection(int x,int y)                                               0x584B50
cdecl void CRadar::RemoveMapSection(int x,int y)                                                0x584BB0
cdecl void CRadar::RemoveRadarSections(void)                                                0x584BF0
cdecl void CRadar::StreamRadarSections(int x,int y)                                             0x584C50
cdecl bool IsPointInsideRadar(CVector2D  const&point)                                            0x584D40
cdecl void GetTextureCorners(int x,int y,CVector2D *corners)                                           0x584D90
// returns number of intersections
cdecl int LineRadarBoxCollision(CVector2D &result,CVector2D const&lineStart,CVector2D const&lineEnd)             0x584E00
cdecl int CRadar::ClipRadarPoly(CVector2D *out,CVector2D const*in)                              0x585040
cdecl void CRadar::DrawAreaOnRadar(CRect  const&rect,CRGBA  const&color,bool inMenu)                        0x5853D0
cdecl void CRadar::DrawRadarMask(void)                                                      0x585700
cdecl void CRadar::StreamRadarSections(CVector  const&worldPosn)                                     0x5858D0
cdecl void CRadar::Shutdown(void)                                                           0x585940
cdecl void CRadar::InitFrontEndMap(void)                                                    0x585960
cdecl void CRadar::AddBlipToLegendList(uchar,int blipArrId)                                           0x5859F0
cdecl void CRadar::SetMapCentreToPlayerCoords(void)                                         0x585B20
cdecl void CRadar::Draw3dMarkers(void)                                                      0x585BF0
cdecl void CRadar::SetRadarMarkerState(int,uchar)                                           0x585FE0
cdecl void CRadar::DrawRadarSprite(ushort spriteId,float x,float y,uchar alpha)                                0x585FF0
cdecl void CRadar::DrawRadarSection(int x,int y)                                                0x586110
cdecl void CRadar::DrawRadarSectionMap(int x,int y,CRect rect)                                       0x586520
cdecl void CRadar::DrawRadarGangOverlay(bool inMenu)                                               0x586650
cdecl void CRadar::DrawRadarMap(void)                                                       0x586880
cdecl void CRadar::DrawMap(void)                                                            0x586B00
cdecl void CRadar::DrawCoordBlip(int blipArrId,uchar isSprite)                                                 0x586D60
cdecl void CRadar::DrawEntityBlip(int blipArrId,uchar)                                                0x587000
cdecl void CRadar::ClearActualBlip(int blipArrId)                                                     0x587C10
cdecl void CRadar::ClearBlipForEntity(eBlipType blipType,int entityHandle)                                        0x587C60
cdecl void CRadar::ClearBlip(int blipIndex)                                                           0x587CE0
cdecl void CRadar::SetupAirstripBlips(void)                                                 0x587D20
cdecl void CRadar::Initialise(void)                                                         0x587FB0
cdecl void CRadar::DrawBlips(void)                                                          0x588050
end


vtable 0
end
funcs
thiscall void CCopPed::SetPartner(CCopPed *partner)             0x5DDE80
thiscall void CCopPed::AddCriminalToKill(CPed *criminal)        0x5DDEB0
thiscall void CCopPed::RemoveCriminalToKill(CPed *,int criminalIdx) 0x5DE040
thiscall void CCopPed::ClearCriminalsToKill(void)       0x5DE070
end

vtable 3
void CPed::SetMoveAnim(void)                                                              0x5E4A00
// always returns true
bool CPed::Save(void) 0x5D5730
// always returns true
bool CPed::Load(void) 0x5D4640
end
funcs
thiscall bool CPed::PedIsInvolvedInConversation(void) 0x43AB90
thiscall bool CPed::PedIsReadyForConversation(bool)   0x43ABA0
thiscall bool CPed::PedCanPickUpPickUp(void) 0x455560
thiscall void CPed::CreateDeadPedMoney(void)                          0x4590F0
thiscall void CPed::CreateDeadPedPickupCoors(float *pX,float *pY,float *pZ) 0x459180
thiscall void CPed::CreateDeadPedWeaponPickups(void)                  0x4591D0
cdecl void CPed::Initialise(void)                                                               0x5DEBB0
thiscall void CPed::SetPedStats(ePedStats statsType)                                                         0x5DEBC0
thiscall void CPed::Update(void)                                                                   0x5DEBE0
thiscall void CPed::SetMoveState(eMoveState moveState)                                                       0x5DEC00
thiscall void CPed::SetMoveAnimSpeed(CAnimBlendAssociation *association)                                      0x5DEC10
thiscall void CPed::StopNonPartialAnims(void)                                                      0x5DED10
thiscall void CPed::RestartNonPartialAnims(void)                                                   0x5DED50
thiscall bool CPed::CanUseTorsoWhenLooking(void)                                                   0x5DED90
thiscall void CPed::SetLookFlag(float lookHeading,bool likeUnused,bool)                                                   0x5DEDC0
thiscall void CPed::SetLookFlag(CEntity *lookingTo,bool likeUnused,bool)                                               0x5DEE40
thiscall void CPed::SetAimFlag(CEntity *aimingTo)                                                          0x5DEED0
thiscall void CPed::ClearAimFlag(void)                                                             0x5DEF20
// Gets point direction relatively to ped
thiscall int CPed::GetLocalDirection(CVector2D  const&)                                           0x5DEF60
thiscall bool CPed::IsPedShootable(void)                                                           0x5DEFD0
thiscall bool CPed::UseGroundColModel(void)                                                        0x5DEFE0
thiscall bool CPed::CanPedReturnToState(void)                                                      0x5DF000
thiscall bool CPed::CanSetPedState(void)                                                           0x5DF030
thiscall bool CPed::CanBeArrested(void)                                                            0x5DF060
thiscall bool CPed::CanStrafeOrMouseControl(void)                                                  0x5DF090
thiscall bool CPed::CanBeDeleted(void)                                                             0x5DF100
thiscall bool CPed::CanBeDeletedEvenInVehicle(void)                                                0x5DF150
thiscall void CPed::RemoveGogglesModel(void)                                                       0x5DF170
thiscall int CPed::GetWeaponSlot(eWeaponType weaponType)                                                     0x5DF200
thiscall void CPed::GrantAmmo(eWeaponType weaponType,uint ammo)                                                    0x5DF220
thiscall void CPed::SetAmmo(eWeaponType weaponType,uint ammo)                                                      0x5DF290
thiscall bool CPed::DoWeHaveWeaponAvailable(eWeaponType weaponType)                                           0x5DF300
thiscall bool CPed::DoGunFlash(int,bool)                                                           0x5DF340
thiscall void CPed::SetGunFlashAlpha(bool rightHand)                                                         0x5DF400
thiscall void CPed::ResetGunFlashAlpha(void)                                                       0x5DF4E0
thiscall float CPed::GetBikeRidingSkill(void)                                                       0x5DF510
thiscall void CPed::ShoulderBoneRotation(RpClump *clump)                                                0x5DF560
thiscall void CPed::SetLookTimer(uint time)                                                             0x5DF8D0
thiscall bool CPed::IsPlayer(void)                                                                 0x5DF8F0
thiscall void CPed::SetPedPositionInCar(void)                                                      0x5DF910
thiscall void CPed::RestoreHeadingRate(void)                                                       0x5DFD60
cdecl void CPed::RestoreHeadingRateCB(CAnimBlendAssociation *,void *data)                           0x5DFD70
thiscall void CPed::SetRadioStation(void)                                                          0x5DFD90
thiscall void CPed::PositionAttachedPed(void)                                                      0x5DFDF0
thiscall void CPed::Undress(char *modelName)                                                                0x5E00F0
thiscall void CPed::Dress(void)                                                                    0x5E0130
thiscall bool CPed::IsAlive(void)                                                                  0x5E0170
// dummy function
thiscall void CPed::UpdateStatEnteringVehicle(void)                                                0x5E01A0
// dummy function
thiscall void CPed::UpdateStatLeavingVehicle(void)                                                 0x5E01B0
thiscall void CPed::GetTransformedBonePosition(RwV3d &inOffsetOutPosn,uint boneId,bool updateSkinBones) 0x5E01C0
thiscall void CPed::ReleaseCoverPoint(void)                                                        0x5E0270
thiscall CTask* CPed::GetHoldingTask(void)                                                           0x5E0290
thiscall CEntity* CPed::GetEntityThatThisPedIsHolding(void)                                            0x5E02E0
thiscall void CPed::DropEntityThatThisPedIsHolding(uchar)                                          0x5E0360
thiscall bool CPed::CanThrowEntityThatThisPedIsHolding(void)                                       0x5E0400
thiscall bool CPed::IsPlayingHandSignal(void)                                                      0x5E0460
thiscall void CPed::StopPlayingHandSignal(void)                                                    0x5E0480
thiscall float CPed::GetWalkAnimSpeed(void)                                                         0x5E04B0
thiscall void CPed::SetPedDefaultDecisionMaker(void)                                               0x5E06E0
// limitAngle in radians
thiscall bool CPed::CanSeeEntity(CEntity *entity,float limitAngle)                                                  0x5E0730
thiscall bool CPed::PositionPedOutOfCollision(int,CVehicle *,bool)                                 0x5E0820
thiscall bool CPed::PositionAnyPedOutOfCollision(void)                                             0x5E13C0
thiscall bool CPed::OurPedCanSeeThisEntity(CEntity *entity,bool isSpotted)                                         0x5E1660
thiscall void CPed::SortPeds(CPed** pedList,int,int)                                                       0x5E17E0
thiscall void CPed::ClearLookFlag(void)                                                            0x5E1950
thiscall float CPed::WorkOutHeadingForMovingFirstPerson(float heading)                                      0x5E1A00
thiscall void CPed::UpdatePosition(void)                                                           0x5E1B10
thiscall void CPed::ProcessBuoyancy(void)                                                          0x5E1FA0
thiscall bool CPed::IsPedInControl(void)                                                           0x5E3960
thiscall void CPed::RemoveWeaponModel(int modelIndex)                                                         0x5E3990
thiscall void CPed::AddGogglesModel(int modelIndex,bool *pGogglesType)                                                    0x5E3A90
thiscall void CPed::PutOnGoggles(void)                                                             0x5E3AE0
thiscall char CPed::GetWeaponSkill(eWeaponType weaponType)                                                    0x5E3B60
thiscall void CPed::SetWeaponSkill(eWeaponType weaponType,char skill)                                        0x5E3C10
thiscall void CPed::ClearLook(void)                                                                0x5E3FF0
thiscall bool CPed::TurnBody(void)                                                                 0x5E4000
thiscall bool CPed::IsPointerValid(void)                                                           0x5E4220
thiscall void CPed::GetBonePosition(RwV3d &outPosition,uint boneId,bool updateSkinBones)                                             0x5E4280
thiscall CObject* CPed::GiveObjectToPedToHold(int modelIndex,uchar replace)                                               0x5E4390
thiscall void CPed::SetPedState(ePedState pedState)                                                         0x5E4500
thiscall void* CPed::operator new(uint size)                                                             0x5E4720
thiscall void CPed::operator delete(void *data)                                                        0x5E4760
thiscall void CPed::SetCharCreatedBy(uchar createdBy)                                                        0x5E47E0
thiscall void CPed::CalculateNewVelocity(void)                                                     0x5E4C50
thiscall void CPed::CalculateNewOrientation(void)                                                  0x5E52E0
thiscall void CPed::ClearAll(void)                                                                 0x5E5320
thiscall void CPed::DoFootLanded(bool leftFoot,uchar)                                                       0x5E5380
thiscall void CPed::PlayFootSteps(void)                                                            0x5E57F0
thiscall void CPed::AddWeaponModel(int modelIndex)                                                            0x5E5ED0
thiscall void CPed::TakeOffGoggles(void)                                                           0x5E6010
thiscall void CPed::GiveWeapon(eWeaponType weaponType,uint ammo,bool likeUnused)                                              0x5E6080
thiscall void CPed::SetCurrentWeapon(int slot)                                                          0x5E61F0
thiscall void CPed::SetCurrentWeapon(eWeaponType weaponType)                                                  0x5E6280
thiscall void CPed::ClearWeapon(eWeaponType weaponType)                                                       0x5E62B0
thiscall void CPed::ClearWeapons(void)                                                             0x5E6320
thiscall void CPed::RemoveWeaponWhenEnteringVehicle(int)                                           0x5E6370
thiscall void CPed::ReplaceWeaponWhenExitingVehicle(void)                                          0x5E6490
thiscall void CPed::ReplaceWeaponForScriptedCutscene(void)                                         0x5E6530
thiscall void CPed::RemoveWeaponForScriptedCutscene(void)                                          0x5E6550
thiscall void CPed::GetWeaponSkill(void)                                                           0x5E6580
thiscall void CPed::PreRenderAfterTest(void)                                                       0x5E65A0
thiscall void CPed::SetIdle(void)                                                                  0x5E7980
thiscall void CPed::SetLook(float heading)                                                                 0x5E79B0
thiscall void CPed::SetLook(CEntity *entity)                                                             0x5E7A60
thiscall void CPed::Look(void)                                                                     0x5E7B20
thiscall CEntity* CPed::AttachPedToEntity(CEntity *entity,CVector offset,ushort,float,eWeaponType weaponType)                  0x5E7CB0
thiscall CEntity* CPed::AttachPedToBike(CEntity *entity,CVector offset,ushort,float,float,eWeaponType weaponType)              0x5E7E60
thiscall void CPed::DettachPedFromEntity(void)                                                     0x5E7EC0
thiscall void CPed::SetAimFlag(float heading)                                                              0x5E8830
thiscall bool CPed::CanWeRunAndFireWithWeapon(void)                                                0x5E88E0
thiscall void CPed::RequestDelayedWeapon(void)                                                     0x5E8910
thiscall void CPed::GiveDelayedWeapon(eWeaponType weaponType,uint ammo)                                            0x5E89B0
cdecl bool IsPedPointerValid(CPed *ped)                                                            0x5E8A30
thiscall void CPed::GiveWeaponAtStartOfFight(void)                                                 0x5E8AB0
thiscall void CPed::GiveWeaponWhenJoiningGang(void)                                                0x5E8BE0
thiscall bool CPed::GetPedTalking(void)                      0x5EFF50
thiscall void CPed::DisablePedSpeech(short)                  0x5EFF60
thiscall void CPed::EnablePedSpeech(void)                    0x5EFF70
thiscall void CPed::DisablePedSpeechForScriptSpeech(short)   0x5EFF80
thiscall void CPed::EnablePedSpeechForScriptSpeech(void)     0x5EFF90
thiscall void CPed::CanPedHoldConversation(void)             0x5EFFA0
thiscall void CPed::SayScript(int,uchar,uchar,uchar)         0x5EFFB0
thiscall void CPed::Say(ushort,uint,float,uchar,uchar,uchar) 0x5EFFE0
cdecl RwObject* SetPedAtomicVisibilityCB(RwObject *rwObject,void *data)        0x5F0060
thiscall void CPed::RemoveBodyPart(int boneId,char localDir)              0x5F0140
thiscall void CPed::SpawnFlyingComponent(int,char)        0x5F0190
thiscall bool CPed::DoesLOSBulletHitPed(CColPoint &colPoint)             0x5F01A0
thiscall void CPed::RemoveWeaponAnims(int likeUnused,float blendDelta)                 0x5F0250
thiscall bool CPed::IsPedHeadAbovePos(float zPos)                     0x5F02C0
thiscall void CPed::KillPedWithCar(CVehicle *car,float,bool)        0x5F0360
thiscall void CPed::MakeTyresMuddySectorList(CPtrList &ptrList) 0x6AE0D0
thiscall void CPed::DeadPedMakesTyresBloody(void) 0x6B4200
end



vtable 0
end
funcs
cdecl void CPointLights::AddLight(uchar lightType,CVector origin,CVector direction,float radius,float red,float green,float blue,uchar fogType,bool generateExtraShadows,CEntity *entityAffected) 0x7000E0
end

vtable 0
end
funcs
cdecl void CShadows::AddPermanentShadow(uchar type,RwTexture *texture,CVector *posn,float x1,float y1,float x2,float y2,short intensity,uchar red,uchar green,uchar blue,float zDistance,uint time,float scale)   0x706F60
cdecl void CShadows::StoreShadowToBeRendered(uchar type,RwTexture *texture,CVector *posn,float x1,float y1,float x2,float y2,short intensity,uchar red,uchar green,uchar blue,float zDistance,bool bDrawOnWater,float scale,CRealTimeShadow *shadowData,bool bDrawOnBuildings) 0x707390
end

vtable 23
void CVehicle::ProcessControlCollisionCheck(void)                                     0x871EDC
void CVehicle::ProcessControlInputs(uchar playerNum)											 0x871EE0
// component index in m_apModelNodes array
void CVehicle::GetComponentWorldPosition(int componentId,CVector &posnOut)								 0x871EE4
// component index in m_apModelNodes array
bool CVehicle::IsComponentPresent(int componentId)												 0x871EE8
void CVehicle::OpenDoor(CPed *ped,int componentId,eDoors door,float doorOpenRatio,bool playSound)								 0x871EEC
void CVehicle::ProcessOpenDoor(CPed *ped,uint doorComponentId,uint,uint,float)							 0x871EF0
float CVehicle::GetDooorAngleOpenRatio(uint door)											 0x871EF4
float CVehicle::GetDooorAngleOpenRatio(eDoors door)										 0x871EF8
bool CVehicle::IsDoorReady(uint door)														 0x871EFC
bool CVehicle::IsDoorReady(eDoors door)													 0x871F00
bool CVehicle::IsDoorFullyOpen(uint door)													 0x871F04
bool CVehicle::IsDoorFullyOpen(eDoors door)												 0x871F08
bool CVehicle::IsDoorClosed(uint door)													 0x871F0C
bool CVehicle::IsDoorClosed(eDoors door)													 0x871F10
bool CVehicle::IsDoorMissing(uint door)													 0x871F14
bool CVehicle::IsDoorMissing(eDoors door)													 0x871F18
// check if car has roof as extra
bool CVehicle::IsOpenTopCar(void)													 0x871F1C
// remove ref to this entity
void CVehicle::RemoveRefsToVehicle(CEntity *entity)										 0x871F20
void CVehicle::BlowUpCar(CEntity *damager,uchar bHideExplosion)											 0x871F24
void CVehicle::BlowUpCarCutSceneNoExtras(bool bNoCamShake, bool bNoSpawnFlyingComps, bool bDetachWheels, bool bExplosionSound)						 0x871F28
bool CVehicle::SetUpWheelColModel(CColModel *wheelCol)										 0x871F2C
// returns false if it's not possible to burst vehicle's tyre or it is already damaged. bPhysicalEffect=true applies random moving force to vehicle
bool CVehicle::BurstTyre(uchar tyreComponentId,bool bPhysicalEffect)													 0x871F30
bool CVehicle::IsRoomForPedToLeaveCar(uint,CVector *)								 0x871F34
void CVehicle::ProcessDrivingAnims(CPed *driver,uchar)										 0x871F38
// get special ride anim data for bile or quad
CRideAnimData* CVehicle::GetRideAnimData(void)													 0x871F3C
void CVehicle::SetupSuspensionLines(void)											 0x871F40
CVector CVehicle::AddMovingCollisionSpeed(CVector &)									 0x871F44
void CVehicle::Fix(void)																 0x871F48
void CVehicle::SetupDamageAfterLoad(void)											 0x871F4C
void CVehicle::DoBurstAndSoftGroundRatios(void)										 0x871F50
float CVehicle::GetHeightAboveRoad(void)												 0x871F54
void CVehicle::PlayCarHorn(void)														 0x871F58
int CVehicle::GetNumContactWheels(void)												 0x871F5C
void CVehicle::VehicleDamage(float damageIntensity,ushort collisionComponent,CEntity *damager,CVector *vecCollisionCoors,CVector *vecCollisionDirection,eWeaponType weapon)	 0x871F60
bool CVehicle::CanPedStepOutCar(bool)												 0x871F64
bool CVehicle::CanPedJumpOutCar(CPed *ped)												 0x871F68
bool CVehicle::GetTowHitchPos(CVector &posnOut,bool,CVehicle*)								 0x871F6C
bool CVehicle::GetTowBarPos(CVector &posnOut,bool,CVehicle*)								 0x871F70
// always return true
bool CVehicle::SetTowLink(CVehicle*,bool)											 0x871F74
bool CVehicle::BreakTowLink(void)													 0x871F78
float CVehicle::FindWheelWidth(bool bRear)													 0x871F7C
// always return true
bool CVehicle::Save(void)															 0x871F80
// always return true
bool CVehicle::Load(void)															 0x871F84
end
funcs
stdcall void CVehicle::Shutdown(void)                                                                                                                            0x6D0B40
// -1 if no remap index
thiscall int CVehicle::GetRemapIndex(void)                                                                                                                       0x6D0B70
thiscall void CVehicle::SetRemapTexDictionary(int txdId)                                                                                                       0x6D0BC0
// index for m_awRemapTxds[] array
thiscall void CVehicle::SetRemap(int remapIndex)                                                                                                                             0x6D0C00
thiscall void CVehicle::SetCollisionLighting(uchar lighting)                                                                                                               0x6D0CA0
thiscall void CVehicle::UpdateLightingFromStoredPolys(void)                                                                                                       0x6D0CC0
thiscall void CVehicle::CalculateLightingFromCollision(void)                                                                                                      0x6D0CF0
thiscall void CVehicle::ResetAfterRender(void)                                                                                                                    0x6D0E20
// 2 - bike, 3 - heli, 4 - boat, 5 - plane
thiscall int CVehicle::GetVehicleAppearance(void)                                                                                                                0x6D1080
// returns false if vehicle model has no car plate material
thiscall bool CVehicle::CustomCarPlate_TextureCreate(CVehicleModelInfo *model)                                                                                         0x6D10E0
thiscall void CVehicle::CustomCarPlate_TextureDestroy(void)                                                                                                       0x6D1150
thiscall bool CVehicle::CanBeDeleted(void)                                                                                                                      0x6D1180
thiscall float CVehicle::ProcessWheelRotation(tWheelState wheelState,CVector  const&,CVector  const&,float)                                                                   0x6D1230
thiscall bool CVehicle::CanVehicleBeDamaged(CEntity *damager,eWeaponType weapon,uchar *)                                                                                        0x6D1280
thiscall void CVehicle::ProcessDelayedExplosion(void)                                                                                                             0x6D1340
thiscall bool CVehicle::AddPassenger(CPed *passenger)                                                                                                                      0x6D13A0
thiscall bool CVehicle::AddPassenger(CPed *passenger,uchar seatNumber)                                                                                                                0x6D14D0
thiscall void CVehicle::RemovePassenger(CPed *passenger)                                                                                                                   0x6D1610
thiscall void CVehicle::SetDriver(CPed *driver)                                                                                                                         0x6D16A0
thiscall void CVehicle::RemoveDriver(bool)                                                                                                                        0x6D1950
thiscall CPed* CVehicle::SetUpDriver(int pedType,bool,bool)                                                                                                                0x6D1A50
thiscall CPed* CVehicle::SetupPassenger(int seatNumber,int pedType,bool,bool)                                                                                                         0x6D1AA0
thiscall bool CVehicle::IsPassenger(CPed *ped)                                                                                                                 0x6D1BD0
thiscall bool CVehicle::IsPassenger(int modelIndex)                                                                                                                          0x6D1C00
thiscall bool CVehicle::IsDriver(CPed *ped)                                                                                                                    0x6D1C40
thiscall bool CVehicle::IsDriver(int modelIndex)                                                                                                                             0x6D1C60
thiscall void CVehicle::KillPedsInVehicle(void)                                                                                                                   0x6D1C80
// return this->m_pCoords->matrix.at.z <= -0.9;
thiscall bool CVehicle::IsUpsideDown(void)                                                                                                                        0x6D1D90
// return this->m_pCoords->matrix.right.z >= 0.8 || this->m_pCoords->matrix.right.z <= -0.8;
thiscall bool CVehicle::IsOnItsSide(void)                                                                                                                         0x6D1DD0
thiscall bool CVehicle::CanPedOpenLocks(CPed *ped)                                                                                                             0x6D1E20
thiscall bool CVehicle::CanDoorsBeDamaged(void)                                                                                                                   0x6D1E60
thiscall bool CVehicle::CanPedEnterCar(void)                                                                                                                      0x6D1E80
thiscall void CVehicle::ProcessCarAlarm(void)                                                                                                                     0x6D21F0
stdcall void DestroyVehicleAndDriverAndPassengers(CVehicle *vehicle)                                                                                                    0x6D2250
thiscall bool CVehicle::IsVehicleNormal(void)                                                                                                                     0x6D22F0
thiscall void CVehicle::ChangeLawEnforcerState(uchar state)                                                                                                             0x6D2330
thiscall bool CVehicle::IsLawEnforcementVehicle(void)                                                                                                             0x6D2370
thiscall bool CVehicle::ShufflePassengersToMakeSpace(void)                                                                                                        0x6D2450
thiscall void CVehicle::ExtinguishCarFire(void)                                                                                                                   0x6D2460
thiscall void CVehicle::ActivateBomb(void)                                                                                                                        0x6D24F0
thiscall void CVehicle::ActivateBombWhenEntered(void)                                                                                                             0x6D2570
thiscall bool CVehicle::CarHasRoof(void)                                                                                                                          0x6D25D0
thiscall float CVehicle::HeightAboveCeiling(float,eFlightModel)                                                                                                    0x6D2600
stdcall RwObject* SetVehicleAtomicVisibilityCB(RwObject *object,void *data)                                                                                                     0x6D2690
stdcall RwFrame* SetVehicleAtomicVisibilityCB(RwFrame *component,void *data)                                                                                                      0x6D26D0
thiscall void CVehicle::SetComponentVisibility(RwFrame *component,uint visibilityState)                                                                                                    0x6D2700
thiscall void CVehicle::ApplyBoatWaterResistance(tBoatHandlingData *boatHandling,float)                                                                                       0x6D2740
stdcall RpMaterial* SetCompAlphaCB(RpMaterial *material,void *data)                                                                                                                 0x6D2950
thiscall void CVehicle::SetComponentAtomicAlpha(RpAtomic *atomic,int alpha)                                                                                                   0x6D2960
thiscall void CVehicle::UpdateClumpAlpha(void)                                                                                                                    0x6D2980
thiscall void CVehicle::UpdatePassengerList(void)                                                                                                                 0x6D29E0
thiscall CPed* CVehicle::PickRandomPassenger(void)                                                                                                                 0x6D2A10
thiscall void CVehicle::AddDamagedVehicleParticles(void)                                                                                                          0x6D2A80
thiscall void CVehicle::MakeDirty(CColPoint &colPoint)                                                                                                                    0x6D2BF0
thiscall bool CVehicle::AddWheelDirtAndWater(CColPoint &colPoint,uint,uchar,uchar)                                                                                        0x6D2D50
thiscall void CVehicle::SetGettingInFlags(uchar doorId)                                                                                                                  0x6D3000
thiscall void CVehicle::SetGettingOutFlags(uchar doorId)                                                                                                                 0x6D3020
thiscall void CVehicle::ClearGettingInFlags(uchar doorId)                                                                                                                0x6D3040
thiscall void CVehicle::ClearGettingOutFlags(uchar doorId)                                                                                                               0x6D3060
thiscall void CVehicle::SetWindowOpenFlag(uchar doorId)                                                                                                                  0x6D3080
thiscall void CVehicle::ClearWindowOpenFlag(uchar doorId)                                                                                                                0x6D30B0
thiscall bool CVehicle::SetVehicleUpgradeFlags(int upgradeModelIndex,int componentIndex,int &resultModelIndex)                                                                                                     0x6D30E0
thiscall bool CVehicle::ClearVehicleUpgradeFlags(int,int componentIndex)                                                                                                         0x6D3210
stdcall RpAtomic* RemoveUpgradeCB(RpAtomic *atomic,void *data)                                                                                                                  0x6D3300
stdcall RpAtomic* FindUpgradeCB(RpAtomic *atomic,void *data)                                                                                                                    0x6D3370
stdcall RwObject* RemoveObjectsCB(RwObject *object,void *data)                                                                                                                  0x6D33B0
stdcall RwFrame* RemoveObjectsCB(RwFrame *component,void *data)                                                                                                                   0x6D3420
stdcall RwObject* CopyObjectsCB(RwObject *object,void *data)                                                                                                                    0x6D3450
stdcall RwObject* FindReplacementUpgradeCB(RwObject *object,void *data)                                                                                                         0x6D3490
stdcall RpAtomic* RemoveAllUpgradesCB(RpAtomic *atomic,void *data)                                                                                                              0x6D34D0
thiscall RpAtomic* CVehicle::CreateUpgradeAtomic(CBaseModelInfo *model,UpgradePosnDesc const*upgradePosn,RwFrame *parentComponent,bool isDamaged)                                                              0x6D3510
thiscall void CVehicle::RemoveUpgrade(int upgradeId)                                                                                                                        0x6D3630
// return upgrade model id or -1 if not present
thiscall int CVehicle::GetUpgrade(int upgradeId)                                                                                                                           0x6D3650
thiscall RpAtomic* CVehicle::CreateReplacementAtomic(CBaseModelInfo *model,RwFrame *component,int,bool bDamaged,bool bIsWheel)                                                                         0x6D3700
thiscall void CVehicle::AddReplacementUpgrade(int modelIndex,int nodeId)                                                                                                            0x6D3830
thiscall void CVehicle::RemoveReplacementUpgrade(int nodeId)                                                                                                             0x6D39E0
// return upgrade model id or -1 if not present
thiscall void CVehicle::GetReplacementUpgrade(int nodeId)                                                                                                                0x6D3A50
thiscall void CVehicle::RemoveAllUpgrades(void)                                                                                                                   0x6D3AB0
thiscall int CVehicle::GetSpareHasslePosId(void)                                                                                                                 0x6D3AE0
thiscall void CVehicle::SetHasslePosId(int hasslePos,bool enable)                                                                                                                  0x6D3B30
thiscall void CVehicle::InitWinch(int)                                                                                                                            0x6D3B60
thiscall void CVehicle::UpdateWinch(void)                                                                                                                         0x6D3B80
thiscall void CVehicle::RemoveWinch(void)                                                                                                                         0x6D3C70
thiscall void CVehicle::ReleasePickedUpEntityWithWinch(void)                                                                                                      0x6D3CB0
thiscall void CVehicle::PickUpEntityWithWinch(CEntity *)                                                                                                          0x6D3CD0
thiscall CEntity* CVehicle::QueryPickedUpEntityWithWinch(void)                                                                                                        0x6D3CF0
thiscall float CVehicle::GetRopeHeightForHeli(void)                                                                                                                0x6D3D10
thiscall void CVehicle::SetRopeHeightForHeli(float height)                                                                                                               0x6D3D30
thiscall void CVehicle::RenderDriverAndPassengers(void)                                                                                                           0x6D3D60
thiscall void CVehicle::PreRenderDriverAndPassengers(void)                                                                                                        0x6D3DB0
thiscall float CVehicle::GetPlaneGunsAutoAimAngle(void)                                                                                                            0x6D3E00
thiscall int CVehicle::GetPlaneNumGuns(void)                                                                                                                     0x6D3F30
thiscall void CVehicle::SetFiringRateMultiplier(float multiplier)                                                                                                            0x6D4010
thiscall float CVehicle::GetFiringRateMultiplier(void)                                                                                                             0x6D4090
thiscall unsigned int CVehicle::GetPlaneGunsRateOfFire(void)                                                                                                              0x6D40E0
thiscall CVector CVehicle::GetPlaneGunsPosition(int gunId)                                                                                                                 0x6D4290
thiscall unsigned int CVehicle::GetPlaneOrdnanceRateOfFire(eOrdnanceType ordnanceType)                                                                                                 0x6D4590
thiscall CVector CVehicle::GetPlaneOrdnancePosition(eOrdnanceType ordnanceType)                                                                                                   0x6D46E0
thiscall void CVehicle::SelectPlaneWeapon(bool bChange,eOrdnanceType ordnanceType)                                                                                                     0x6D4900
thiscall void CVehicle::DoPlaneGunFireFX(CWeapon *weapon,CVector &particlePos,CVector &gunshellPos,int particleIndex)                                                                                       0x6D4AD0
thiscall void CVehicle::FirePlaneGuns(void)                                                                                                                       0x6D4D30
thiscall void CVehicle::FireUnguidedMissile(eOrdnanceType ordnanceType,bool bCheckTime)                                                                                                   0x6D5110
thiscall bool CVehicle::CanBeDriven(void)                                                                                                                         0x6D5400
thiscall void CVehicle::ReactToVehicleDamage(CPed *ped)                                                                                                              0x6D5490
thiscall bool CVehicle::GetVehicleLightsStatus(void)                                                                                                              0x6D55C0
thiscall bool CVehicle::CanPedLeanOut(CPed *ped)                                                                                                                     0x6D5CF0
thiscall void CVehicle::SetVehicleCreatedBy(int createdBy)                                                                                                             0x6D5D70
thiscall void CVehicle::SetupRender(void)                                                                                                                         0x6D64F0
thiscall void CVehicle::ProcessWheel(CVector &,CVector &,CVector &,CVector &,int,float,float,float,char,float *,tWheelState *,ushort)                             0x6D6C00
thiscall void CVehicle::ProcessBikeWheel(CVector &,CVector &,CVector &,CVector &,int,float,float,float,float,char,float *,tWheelState *,eBikeWheelSpecial,ushort) 0x6D73B0
// return nearest wheel?
thiscall int CVehicle::FindTyreNearestPoint(float x,float y)                                                                                                         0x6D7BC0
thiscall void CVehicle::InflictDamage(CEntity *damager,eWeaponType weapon,float intensity,CVector coords)                                                                                        0x6D7C90
thiscall void CVehicle::KillPedsGettingInVehicle(void)                                                                                                            0x6D82F0
thiscall bool CVehicle::UsesSiren(void)                                                                                                                           0x6D8470
thiscall bool CVehicle::IsSphereTouchingVehicle(float x,float y,float z,float radius)                                                                                          0x6D84D0
thiscall void CVehicle::FlyingControl(eFlightModel flightModel,float,float,float,float)                                                                                       0x6D85F0
// always return false?
thiscall void CVehicle::BladeColSectorList(CPtrList &ptrList,CColModel &colModel,CMatrix &matrix,short,float)                                                                          0x6DAF00
thiscall void CVehicle::SetComponentRotation(RwFrame *component,int axis,float angle,bool bResetPosition)                                                                                            0x6DBA30
thiscall void CVehicle::SetTransmissionRotation(RwFrame *component,float,float,CVector posn,bool isFront)                                                                               0x6DBBB0
thiscall void CVehicle::ProcessBoatControl(tBoatHandlingData *boatHandling,float &,bool,bool)                                                                                 0x6DBCE0
thiscall void CVehicle::DoBoatSplashes(float)                                                                                                                     0x6DD130
thiscall void CVehicle::DoSunGlare(void)                                                                                                                          0x6DD6F0
thiscall void CVehicle::AddWaterSplashParticles(void)                                                                                                             0x6DDF60
thiscall void CVehicle::AddExhaustParticles(void)                                                                                                                 0x6DE240
// always return false?
thiscall bool CVehicle::AddSingleWheelParticles(tWheelState,uint,float,float,CColPoint *,CVector *,float,int,uint surfaceType,bool *bloodState,uint)                                    0x6DE880
thiscall bool CVehicle::GetSpecialColModel(void)                                                                                                                  0x6DF3D0
thiscall void CVehicle::RemoveVehicleUpgrade(int upgradeModelIndex)                                                                                                                 0x6DF930
thiscall void CVehicle::AddUpgrade(int modelIndex,int upgradeIndex)                                                                                                                       0x6DFA20
thiscall void CVehicle::UpdateTrailerLink(bool,bool)                                                                                                              0x6DFC50
thiscall void CVehicle::UpdateTractorLink(bool,bool)                                                                                                              0x6E0050
thiscall CEntity* CVehicle::ScanAndMarkTargetForHeatSeekingMissile(CEntity *entity)                                                                                         0x6E0400
thiscall void CVehicle::FireHeatSeakingMissile(CEntity *targetEntity,eOrdnanceType ordnanceType,bool)                                                                                      0x6E05C0
thiscall void CVehicle::PossiblyDropFreeFallBombForPlayer(eOrdnanceType ordnanceType,bool)                                                                                     0x6E07E0
thiscall void CVehicle::ProcessSirenAndHorn(bool)                                                                                                                 0x6E0950
thiscall bool CVehicle::DoHeadLightEffect(int dummyId,CMatrix &vehicleMatrix,uchar lightId,uchar lightState)                                                                                              0x6E0A50
thiscall void CVehicle::DoHeadLightBeam(int,CMatrix &matrix,uchar)                                                                                                      0x6E0E20
thiscall void CVehicle::DoHeadLightReflectionSingle(CMatrix &matrix,uchar lightId)                                                                                              0x6E1440
thiscall void CVehicle::DoHeadLightReflectionTwin(CMatrix &matrix)                                                                                                      0x6E1600
thiscall void CVehicle::DoHeadLightReflection(CMatrix &,uint,uchar,uchar)                                                                                         0x6E1720
thiscall bool CVehicle::DoTailLightEffect(int lightId,CMatrix &matrix,uchar,uchar,uint,uchar)                                                                                   0x6E1780
thiscall void CVehicle::DoVehicleLights(CMatrix &matrix,uint flags)                                                                                                           0x6E1A60
thiscall void CVehicle::FillVehicleWithPeds(bool bSetClothesToAfro)                                                                                                                 0x6E2900
thiscall void* CVehicle::operator new(uint size)                                                                                                                        0x6E2D50
thiscall void CVehicle::operator delete(void *data)                                                                                                                   0x6E2D90
thiscall void CVehicle::operator delete(void *data,int)                                                                                                               0x6E2DD0
thiscall void CVehicle::DoBladeCollision(CVector,CMatrix &matrix,short,float,float)                                                                                     0x6E2E50
thiscall void CVehicle::AddVehicleUpgrade(int modelId)                                                                                                                    0x6E3290
thiscall void CVehicle::SetupUpgradesAfterLoad(void)                                                                                                              0x6E3400
thiscall void CVehicle::GetPlaneWeaponFiringStatus(bool &status,eOrdnanceType &ordnanceType)                                                                                        0x6E3440                                                                                                                             0x6E38A0
stdcall bool IsVehiclePointerValid(CVehicle *vehicle)                                                                                                                   0x6E38F0
thiscall void CVehicle::ProcessWeapons(void)                                                                                                                      0x6E3950
end


vtable 0
end
funcs
thiscall void CPhysical::RemoveAndAdd(void)                                                               0x542560
thiscall void CPhysical::AddToMovingList(void)                                                            0x542800
thiscall void CPhysical::RemoveFromMovingList(void)                                                       0x542860
thiscall void CPhysical::SetDamagedPieceRecord(float damageIntensity,CEntity *damagingEntity,CColPoint &colPoint,float distanceMult)                         0x5428C0
thiscall void CPhysical::ApplyMoveForce(CVector force)                                                          0x5429F0
thiscall void CPhysical::ApplyTurnForce(CVector dir,CVector velocity)                                                  0x542A50
thiscall void CPhysical::ApplyForce(CVector dir,CVector velocity,bool flag)                                                 0x542B50
thiscall CVector CPhysical::GetSpeed(CVector direction)                                                                0x542CE0
thiscall void CPhysical::ApplyMoveSpeed(void)                                                             0x542DD0
thiscall void CPhysical::ApplyTurnSpeed(void)                                                             0x542E20
thiscall void CPhysical::ApplyGravity(void)                                                               0x542FE0
thiscall void CPhysical::ApplyFrictionMoveForce(CVector moveForce)                                                  0x5430A0
thiscall void CPhysical::ApplyFrictionTurnForce(CVector posn,CVector velocity)                                          0x543100
thiscall void CPhysical::ApplyFrictionForce(CVector posn,CVector velocity)                                              0x543220
thiscall void CPhysical::SkipPhysics(void)                                                                0x5433B0
thiscall void CPhysical::AddCollisionRecord(CEntity *collidedEntity)                                                    0x543490
thiscall bool CPhysical::GetHasCollidedWith(CEntity *entity)                                                    0x543540
thiscall bool CPhysical::GetHasCollidedWithAnyObject(void)                                                0x543580
thiscall bool CPhysical::ApplyCollision(CEntity *entity,CColPoint &colPoint,float &)                                    0x5435C0
thiscall bool CPhysical::ApplySoftCollision(CEntity *entity,CColPoint &colPoint,float &)                                0x543890
thiscall bool CPhysical::ApplySpringCollision(float,CVector &,CVector &,float,float,float &)              0x543C90
thiscall bool CPhysical::ApplySpringCollisionAlt(float,CVector &,CVector &,float,float,CVector &,float &) 0x543D60
thiscall bool CPhysical::ApplySpringDampening(float,float,CVector &,CVector &,CVector &)                  0x543E90
thiscall bool CPhysical::ApplySpringDampeningOld(float,float,CVector &,CVector &,CVector &)               0x544100
thiscall void CPhysical::RemoveRefsToEntity(CEntity *entity)                                                    0x544280
thiscall void CPhysical::DettachEntityFromEntity(float x,float y,float z,bool useCollision)                                  0x5442F0
thiscall void CPhysical::DettachAutoAttachedEntity(void)                                                  0x5446A0
thiscall float CPhysical::GetLightingFromCol(bool flag)                                                         0x5447B0
thiscall float CPhysical::GetLightingTotal(void)                                                           0x544850
thiscall bool CPhysical::CanPhysicalBeDamaged(eWeaponType weapon,uchar *)                                        0x5448B0
thiscall void CPhysical::ApplyAirResistance(void)                                                         0x544C40
thiscall bool CPhysical::ApplyCollisionAlt(CEntity *entity,CColPoint &colPoint,float &,CVector &,CVector &)             0x544D50
thiscall bool CPhysical::ApplyFriction(float,CColPoint &colPoint)                                                 0x5454C0
thiscall bool CPhysical::ApplyFriction(CPhysical* physical,float,CColPoint &colPoint)                                      0x545980
thiscall bool CPhysical::ProcessShiftSectorList(int sectorX,int sectorY)                                                  0x546670
stdcall void CPhysical::PlacePhysicalRelativeToOtherPhysical(CPhysical* physical1,CPhysical* physical2,CVector offset)              0x546DB0
thiscall float CPhysical::ApplyScriptCollision(CVector,float,float,CVector*)                               0x546ED0
thiscall void CPhysical::PositionAttachedEntity(void)                                                     0x546FF0
thiscall void CPhysical::ApplySpeed(void)                                                                 0x547B80
thiscall void CPhysical::UnsetIsInSafePosition(void)                                                      0x548320
thiscall void CPhysical::ApplyFriction(void)                                                              0x5483D0
thiscall bool CPhysical::ApplyCollision(CPhysical* physical,CColPoint &colPoint,float &,float &)                           0x548680
thiscall bool CPhysical::ApplySoftCollision(CPhysical* physical,CColPoint &colPoint,float &,float &)                       0x54A2C0
thiscall bool CPhysical::ProcessCollisionSectorList(int sectorX,int sectorY)                                              0x54BA60
thiscall bool CPhysical::ProcessCollisionSectorList_SimpleCar(CRepeatSector *sector)                            0x54CFF0
thiscall void CPhysical::AttachEntityToEntity(CEntity *entity,CVector offset,CVector rotation)                                  0x54D570
thiscall void CPhysical::AttachEntityToEntity(CEntity *entity,CVector * offset,RtQuat *rotation)                               0x54D690
thiscall bool CPhysical::CheckCollision(void)                                                             0x54D920
thiscall bool CPhysical::CheckCollision_SimpleCar(void)                                                   0x54DAB0
end


vtable 0
end
funcs
thiscall void CEntity::UpdateRwFrame(void)                                            0x532B00
thiscall void CEntity::UpdateRpHAnim(void)                                            0x532B20
thiscall bool CEntity::HasPreRenderEffects(void)                                      0x532B70
thiscall bool CEntity::DoesNotCollideWithFlyers(void)                                 0x532D40
stdcall RpMaterial* MaterialUpdateUVAnimCB(RpMaterial *material,void *data)                             0x532D70
thiscall void CEntity::ModifyMatrixForPoleInWind(void)                                0x532DB0
thiscall bool CEntity::LivesInThisNonOverlapSector(int sectorX,int sectorY)                           0x533050
thiscall void CEntity::SetupBigBuilding(void)                                         0x533150
thiscall void CEntity::ModifyMatrixForCrane(void)                                     0x533170
thiscall void CEntity::PreRenderForGlassWindow(void)                                  0x533240
thiscall void CEntity::SetRwObjectAlpha(int alpha)                                          0x5332C0
stdcall bool IsEntityPointerValid(CEntity *entity)                                         0x533310
thiscall CVector CEntity::FindTriggerPointCoors(int triggerIndex)                                     0x533380
thiscall C2dEffect* CEntity::GetRandom2dEffect(int effectType,uchar)                                   0x533410
thiscall CVector CEntity::TransformFromObjectSpace(CVector const &offset)                      0x5334F0
thiscall void CEntity::TransformFromObjectSpace(CVector &outPosn,CVector const &offset)            0x533560
thiscall void CEntity::CreateEffects(void)                                            0x533790
thiscall void CEntity::DestroyEffects(void)                                           0x533BF0
thiscall void CEntity::AttachToRwObject(RwObject *object, bool updateEntityMatrix)                                   0x533ED0
thiscall void CEntity::DetachFromRwObject(void)                                       0x533FB0
thiscall CVector CEntity::GetBoundCentre(void)                                           0x534250
thiscall void CEntity::GetBoundCentre(CVector &outCentre)                                      0x534290
thiscall void CEntity::RenderEffects(void)                                            0x5342B0
// is entity touching entity
thiscall bool CEntity::GetIsTouching(CEntity *entity)                                       0x5343F0
// is entity touching sphere
thiscall bool CEntity::GetIsTouching(CVector const & centre,float radius)                           0x5344B0
thiscall bool CEntity::GetIsOnScreen(void)                                            0x534540
thiscall bool CEntity::GetIsBoundingBoxOnScreen(void)                                 0x5345D0
thiscall void CEntity::ModifyMatrixForTreeInWind(void)                                0x534E90
thiscall void CEntity::ModifyMatrixForBannerInWind(void)                              0x535040
thiscall CColModel* CEntity::GetColModel(void)                                              0x535300
thiscall void CEntity::CalculateBBProjection(CVector *,CVector *,CVector *,CVector *) 0x535340
thiscall void CEntity::UpdateAnim(void)                                               0x535F00
thiscall bool CEntity::IsVisible(void)                                                0x536BC0
thiscall float CEntity::GetDistanceFromCentreOfMassToBaseOfModel(void)                 0x536BE0
thiscall void CEntity::CleanUpOldReference(CEntity** entity)                                 0x571A00
thiscall void CEntity::ResolveReferences(void)                                        0x571A40
thiscall void CEntity::PruneReferences(void)                                          0x571A90
thiscall void CEntity::RegisterReference(CEntity** entity)                                   0x571B70
thiscall void CEntity::ProcessLightsForEntity(void)                                   0x6FC7A0
thiscall void CEntity::RemoveEscalatorsForEntity(void)                                0x717900
thiscall bool CEntity::IsEntityOccluded(void)                                         0x71FAE0
end