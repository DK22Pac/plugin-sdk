#pragma once
#include "plbase\PluginBase_VC.h"

struct tQueuedMode {
	short Mode;
	float Duration;
	short MinZoom;
	short MaxZoom;
};

VALIDATE_SIZE(tQueuedMode, 0xC);