#pragma once

#include "plbase/PluginBase_SA.h"
#include "RenderWare.h"

#pragma pack(push, 4)
class PLUGIN_API CScene
{
public:
	RpWorld *m_pRpWorld;
	RwCamera *m_pRwCamera;
};
#pragma pack(pop)

extern PLUGIN_API CScene &Scene;