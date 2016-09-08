/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
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