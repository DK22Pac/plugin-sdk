#pragma once

#include "plugin/plugin.h"
#include "CBox.h"
#include "CColSphere.h"
#include "CColData.h"

#pragma pack(push, 4)
class PLUGIN_API CColModel
{
public:
	CBox m_boundBox;
	CColSphere m_colSphere;
	CColData *m_pColData;
};
#pragma pack(pop)

VALIDATE_SIZE(CColModel, 0x30);