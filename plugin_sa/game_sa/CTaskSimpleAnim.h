/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskSimple.h"
#include "CAnimBlendAssociation.h"

class PLUGIN_API CTaskSimpleAnim : public CTaskSimple {
protected:
    CTaskSimpleAnim(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
	CAnimBlendAssociation *m_pBlendAssociation;
	unsigned char m_nFlags;
private:
	char _pad0[3];
};

VALIDATE_SIZE(CTaskSimpleAnim, 0x10);