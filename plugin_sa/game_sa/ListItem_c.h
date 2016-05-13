#pragma once

#include "plbase/PluginBase.h"

class PLUGIN_API ListItem_c
{
public:
	ListItem_c *next;
	ListItem_c *prev;
};