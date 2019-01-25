/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CCarPathLink::OneWayLaneOffset)
static int address;
static int global_address;
static const int id = 0x44DB00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x44DB00, 0, 0, 0, 0, 0>;
// total references count: 10us (24), 10ushl (0), 10eu (0), 11us (0), 11eu (0), sr2 (0), sr2lv (0)
using refs_t = RefList<0x41BAC1,1001,0,0x41B980,1, 0x41BAF7,1001,0,0x41B980,2, 0x427704,1001,0,0x426EF0,1, 0x427727,1001,0,0x426EF0,2, 0x427D0F,1001,0,0x427740,1, 0x427D4B,1001,0,0x427740,2, 0x428482,1001,0,0x428040,1, 0x4284B4,1001,0,0x428040,2, 0x4284E5,1001,0,0x428040,3, 0x42851A,1001,0,0x428040,4, 0x428611,1001,0,0x428040,5, 0x428642,1001,0,0x428040,6, 0x428674,1001,0,0x428040,7, 0x4286A9,1001,0,0x428040,8, 0x42EA0D,1001,0,0x42DE80,1, 0x42EA49,1001,0,0x42DE80,2, 0x43110C,1001,0,0x430050,1, 0x431148,1001,0,0x430050,2, 0x434A9D,1001,0,0x434900,1, 0x434AD9,1001,0,0x434900,2, 0x434EB0,1001,0,0x434900,3, 0x43539B,1001,0,0x434900,4, 0x4366F2,1001,0,0x436540,1, 0x43672C,1001,0,0x436540,2>;
using def_t = float(CCarPathLink *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CCarPathLink *>, 0>;
META_END

}
