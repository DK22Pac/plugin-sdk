#pragma once

#include "plbase/PluginBase_SA.h"
#include "ListItem_c.h"

class PLUGIN_API List_c
{
public:
	ListItem_c *last;
	ListItem_c *first;
	unsigned int count;
};

VALIDATE_SIZE(List_c, 0xC);