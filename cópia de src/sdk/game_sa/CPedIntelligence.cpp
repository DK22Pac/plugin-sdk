#include "CPedIntelligence.h"

CTaskSimpleJetpack *CPedIntelligence::GetJetpackTask()
{
	return ((CTaskSimpleJetpack *(__thiscall *)(CPedIntelligence *))0x601110)(this);
}

CTaskSimpleUseGun *CPedIntelligence::GetUseGunTask()
{
	return ((CTaskSimpleUseGun *(__thiscall *)(CPedIntelligence *))0x600F70)(this);
}