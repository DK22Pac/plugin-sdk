#pragma once
#include "plugin\plugin.h"
#include "CClumpModelInfo.h"
#include "eWeaponType.h"

#pragma pack(push, 4)
class PLUGIN_API CWeaponModelInfo : public CClumpModelInfo
{
public:
	eWeaponType m_weaponInfo;

	//

	CWeaponModelInfo();
	~CWeaponModelInfo();
};
#pragma pack(pop)

VALIDATE_SIZE(CWeaponModelInfo, 0x28);