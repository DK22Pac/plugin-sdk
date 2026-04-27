/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "ListItem_c.h"

// US-1.00 @ 0x004A8DB0
// EU-1.00 @ 0x004A8DB0
ListItem_c::ListItem_c(void) {
	plugin::CallMethod<0x004A8DB0>(this);
}

// US-1.00 @ 0x004A8DC0
// EU-1.00 @ 0x0049EA70
ListItem_c::~ListItem_c(void) {
	plugin::CallMethod<0x004A8DC0>(this);
}
