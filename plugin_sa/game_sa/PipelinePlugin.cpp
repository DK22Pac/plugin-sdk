/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
# include "PipelinePlugin.h"
# include <cassert>

// US-1.00 @ 0x0072FBD0
// EU-1.00 @ 0x0072FBD0
RwBool PipelinePluginAttach(void) {
	return plugin::CallAndReturn<RwBool, 0x0072FBD0>();
}

// US-1.00 @ 0x0072FC40
// EU-1.00 @ 0x0072FC40
RwUInt32 GetPipelineID(RpAtomic * pAtomic) {
	assert(pAtomic);
	return plugin::CallAndReturn<RwUInt32, 0x0072FC40>(pAtomic);
}

// US-1.00 @ 0x0072FC50
// EU-1.00 @ 0x0072FC50
void SetPipelineID(RpAtomic * pAtomic, RwUInt32 uPipelineID) {
	assert(pAtomic);
	plugin::Call<0x0072FC50>(pAtomic, uPipelineID);
}
