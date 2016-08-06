#include "CPedIntelligence.h"

CTaskSimpleJetPack *CPedIntelligence::GetJetpackTask()
{
	return ((CTaskSimpleJetPack *(__thiscall *)(CPedIntelligence *))0x601110)(this);
}

CTaskSimpleUseGun *CPedIntelligence::GetUseGunTask()
{
	return ((CTaskSimpleUseGun *(__thiscall *)(CPedIntelligence *))0x600F70)(this);
}