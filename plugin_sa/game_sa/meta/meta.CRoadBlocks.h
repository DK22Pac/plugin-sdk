/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {
	META_BEGIN(CRoadBlocks::ClearScriptRoadBlocks)
		static int address;
		static int global_address;
		static const int id = 0x460EC0;
		static const bool is_virtual = false;
		static const int vtable_index = -1;
		using mv_addresses_t = MvAddresses<0x460EC0, 0x460F40, 0, 0, 0, 0>;
		using def_t = void();
		static const int cb_priority = PRIORITY_BEFORE;
		using calling_convention_t = CallingConventions::Cdecl;
		using args_t = ArgPick<ArgTypes<>>;
	META_END

	META_BEGIN(CRoadBlocks::RegisterScriptRoadBlock)
		static int address;
		static int global_address;
		static const int id = 0x460DF0;
		static const bool is_virtual = false;
		static const int vtable_index = -1;
		using mv_addresses_t = MvAddresses<0x460DF0, 0x45ADCF, 0, 0, 0, 0>;
		using def_t = void();
		static const int cb_priority = PRIORITY_BEFORE;
		using calling_convention_t = CallingConventions::Cdecl;
		using args_t = ArgPick<ArgTypes<CVector, CVector, byte>>;
	META_END

	META_BEGIN(CRoadBlocks::Init)
		static int address;
		static int global_address;
		static const int id = 0x461100;
		static const bool is_virtual = false;
		static const int vtable_index = -1;
		using mv_addresses_t = MvAddresses<0x461100, 0, 0, 0, 0, 0>;
		using def_t = void();
		static const int cb_priority = PRIORITY_BEFORE;
		using calling_convention_t = CallingConventions::Cdecl;
		using args_t = ArgPick<ArgTypes<>>;
	META_END

	META_BEGIN(CRoadBlocks::GenerateRoadBlockCopsForCar)
		static int address;
		static int global_address;
		static const int id = 0x461170;
		static const bool is_virtual = false;
		static const int vtable_index = -1;
		using mv_addresses_t = MvAddresses<0x461170, 0x4611F0, 0, 0, 0, 0>;
		using def_t = void();
		static const int cb_priority = PRIORITY_BEFORE;
		using calling_convention_t = CallingConventions::Cdecl;
		using args_t = ArgPick<ArgTypes<CVehicle, int, byte>>;
	META_END

	META_BEGIN(CRoadBlocks::CreateRoadBlockBetween2Points)
		static int address;
		static int global_address;
		static const int id = 0x4619C0;
		static const bool is_virtual = false;
		static const int vtable_index = -1;
		using mv_addresses_t = MvAddresses<0x4619C0, 0x461A40, 0, 0, 0, 0>;
		using def_t = void();
		static const int cb_priority = PRIORITY_BEFORE;
		using calling_convention_t = CallingConventions::Cdecl;
		using args_t = ArgPick<ArgTypes<CVector, CVector, byte>>;
	META_END

	META_BEGIN(CRoadBlocks::GenerateRoadBlocks)
		static int address;
		static int global_address;
		static const int id = 0x4629E0;
		static const bool is_virtual = false;
		static const int vtable_index = -1;
		using mv_addresses_t = MvAddresses<0x4629E0, 0x462A60, 0, 0, 0, 0>;
		using def_t = void();
		static const int cb_priority = PRIORITY_BEFORE;
		using calling_convention_t = CallingConventions::Cdecl;
		using args_t = ArgPick<ArgTypes<>>;
	META_END
}
