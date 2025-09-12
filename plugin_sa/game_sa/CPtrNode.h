/*
	Plugin-SDK (Grand Theft Auto San Andreas) header file
	Authors: GTA Community. See more here
	https://github.com/DK22Pac/plugin-sdk
	Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

class PLUGIN_API CPtrNode {
public:
	void* m_pVoid;
	CPtrNode* m_pNext;

	inline CPtrNode(void* item) : m_pVoid(item) {}
};

VALIDATE_SIZE(CPtrNode, 8);