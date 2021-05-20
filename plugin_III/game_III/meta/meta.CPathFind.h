/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "PluginBase.h"

namespace plugin {

META_BEGIN(CPathFind::Init)
static int address;
static int global_address;
static const int id = 0x4294A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x4294A0, 0x4294A0, 0x4294A0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x48BFBA,100,0,0x48BED0,1, 0x48C62F,100,0,0x48C620,1, 0x48C0AA,110,0,0x48BFC0,1, 0x48C72F,110,0,0x48C720,1, 0x48C03A,120,0,0x48BF50,1, 0x48C6BF,120,0,0x48C6B0,1>;
using def_t = void(CPathFind *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *>, 0>;
META_END

META_BEGIN(CPathFind::RegisterMapObject)
static int address;
static int global_address;
static const int id = 0x429540;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x429540, 0x429540, 0x429540>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x478902,100,0,0x4786B0,1, 0x478902,110,0,0x4786B0,1, 0x478902,120,0,0x4786B0,1>;
using def_t = void(CPathFind *, CTreadable *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,CTreadable *>, 0,1>;
META_END

META_BEGIN(CPathFind::CalcNodeCoors)
static int address;
static int global_address;
static const int id = 0x429560;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x429560, 0x429560, 0x429560>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x429D94,100,0,0x429C20,1, 0x429ED7,100,0,0x429C20,2, 0x429D94,110,0,0x429C20,1, 0x429ED7,110,0,0x429C20,2, 0x429D94,120,0,0x429C20,1, 0x429ED7,120,0,0x429C20,2>;
using def_t = void(CPathFind *, short, short, short, int, CVector *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,short,short,short,int,CVector *>, 0,1,2,3,4,5>;
META_END

META_BEGIN(CPathFind::PreparePathData)
static int address;
static int global_address;
static const int id = 0x429610;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x429610, 0x429610, 0x429610>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x48C076,100,0,0x48BED0,1, 0x48C675,100,0,0x48C620,1, 0x48C166,110,0,0x48BFC0,1, 0x48C775,110,0,0x48C720,1, 0x48C0F6,120,0,0x48BF50,1, 0x48C705,120,0,0x48C6B0,1>;
using def_t = void(CPathFind *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *>, 0>;
META_END

META_BEGIN(CPathFind::LoadPathFindData)
static int address;
static int global_address;
static const int id = 0x429C00;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x429C00, 0x429C00, 0x429C00>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x42962A,100,0,0x429610,1, 0x42962A,110,0,0x429610,1, 0x42962A,120,0,0x429610,1>;
using def_t = bool();
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Cdecl;
using args_t = ArgPick<ArgTypes<>>;
META_END

META_BEGIN(CPathFind::PreparePathDataForType)
static int address;
static int global_address;
static const int id = 0x429C20;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x429C20, 0x429C20, 0x429C20>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4298F7,100,0,0x429610,1, 0x42992A,100,0,0x429610,2, 0x4298F7,110,0,0x429610,1, 0x42992A,110,0,0x429610,2, 0x4298F7,120,0,0x429610,1, 0x42992A,120,0,0x429610,2>;
using def_t = void(CPathFind *, unsigned char, CTempNode *, CPathInfoForObject *, float, CTempDetachedNode *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,unsigned char,CTempNode *,CPathInfoForObject *,float,CTempDetachedNode *,int>, 0,1,2,3,4,5,6>;
META_END

META_BEGIN(CPathFind::DoPathSearch)
static int address;
static int global_address;
static const int id = 0x42B040;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42B040, 0x42B040, 0x42B040>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x41C670,100,0,0x41C480,1, 0x41CDAD,100,0,0x41CD50,1, 0x41FA5F,100,0,0x41FA00,1, 0x42C93B,100,0,0x42C8C0,1, 0x41C670,110,0,0x41C480,1, 0x41CDAD,110,0,0x41CD50,1, 0x41FA5F,110,0,0x41FA00,1, 0x42C93B,110,0,0x42C8C0,1, 0x41C670,120,0,0x41C480,1, 0x41CDAD,120,0,0x41CD50,1, 0x41FA5F,120,0,0x41FA00,1, 0x42C93B,120,0,0x42C8C0,1>;
using def_t = void(CPathFind *, unsigned char, CVector, int, CVector, CPathNode **, short *, short, CVehicle *, float *, float, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,unsigned char,CVector,int,CVector,CPathNode **,short *,short,CVehicle *,float *,float,int>, 0,1,2,3,4,5,6,7,8,9,10,11>;
META_END

META_BEGIN(CPathFind::RemoveBadStartNode)
static int address;
static int global_address;
static const int id = 0x42B790;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42B790, 0x42B790, 0x42B790>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x41FA7F,100,0,0x41FA00,1, 0x41FA7F,110,0,0x41FA00,1, 0x41FA7F,120,0,0x41FA00,1>;
using def_t = void(CPathFind *, CVector, CPathNode **, short *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,CVector,CPathNode **,short *>, 0,1,2,3>;
META_END

META_BEGIN(CPathFind::CountFloodFillGroups)
static int address;
static int global_address;
static const int id = 0x42B810;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42B810, 0x42B810, 0x42B810>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x429B6B,100,0,0x429610,1, 0x429B76,100,0,0x429610,2, 0x429B6B,110,0,0x429610,1, 0x429B76,110,0,0x429610,2, 0x429B6B,120,0,0x429610,1, 0x429B76,120,0,0x429610,2>;
using def_t = void(CPathFind *, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,unsigned char>, 0,1>;
META_END

META_BEGIN(CPathFind::FindNextNodeWandering)
static int address;
static int global_address;
static const int id = 0x42B9F0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42B9F0, 0x42B9F0, 0x42B9F0>;
// total references count: 10en (6), 11en (6), steam (6)
using refs_t = RefList<0x4C9B72,100,0,0x4C8910,1, 0x4D2163,100,0,0x4D1ED0,1, 0x4D2819,100,0,0x4D2750,1, 0x4D2883,100,0,0x4D2750,2, 0x4D2A30,100,0,0x4D28D0,1, 0x4D2AC9,100,0,0x4D28D0,2, 0x4C9C12,110,0,0x4C89B0,1, 0x4D2203,110,0,0x4D1F70,1, 0x4D28B9,110,0,0x4D27F0,1, 0x4D2923,110,0,0x4D27F0,2, 0x4D2AD0,110,0,0x4D2970,1, 0x4D2B69,110,0,0x4D2970,2, 0x4C9BA2,120,0,0x4C8940,1, 0x4D2193,120,0,0x4D1F00,1, 0x4D2849,120,0,0x4D2780,1, 0x4D28B3,120,0,0x4D2780,2, 0x4D2A60,120,0,0x4D2900,1, 0x4D2AF9,120,0,0x4D2900,2>;
using def_t = void(CPathFind *, unsigned char, CVector, CPathNode **, CPathNode **, unsigned char, unsigned char *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,unsigned char,CVector,CPathNode **,CPathNode **,unsigned char,unsigned char *>, 0,1,2,3,4,5,6>;
META_END

META_BEGIN(CPathFind::NewGenerateCarCreationCoors)
static int address;
static int global_address;
static const int id = 0x42BF10;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42BF10, 0x42BF10, 0x42BF10>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x416B4E,100,0,0x4165F0,1, 0x41FED1,100,0,0x41FE50,1, 0x416B4E,110,0,0x4165F0,1, 0x41FED1,110,0,0x41FE50,1, 0x416B4E,120,0,0x4165F0,1, 0x41FED1,120,0,0x41FE50,1>;
using def_t = bool(CPathFind *, float, float, float, float, float, float, bool, CVector *, int *, int *, float *, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,float,float,float,float,float,float,bool,CVector *,int *,int *,float *,bool>, 0,1,2,3,4,5,6,7,8,9,10,11,12>;
META_END

META_BEGIN(CPathFind::GeneratePedCreationCoors)
static int address;
static int global_address;
static const int id = 0x42C1E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42C1E0, 0x42C1E0, 0x42C1E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4F4E3C,100,0,0x4F4A00,1, 0x4F4EEC,110,0,0x4F4AB0,1, 0x4F4E7C,120,0,0x4F4A40,1>;
using def_t = bool(CPathFind *, float, float, float, float, float, float, CVector *, int *, int *, float *, CMatrix *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,float,float,float,float,float,float,CVector *,int *,int *,float *,CMatrix *>, 0,1,2,3,4,5,6,7,8,9,10,11>;
META_END

META_BEGIN(CPathFind::TestCoorsCloseness)
static int address;
static int global_address;
static const int id = 0x42C8C0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42C8C0, 0x42C8C0, 0x42C8C0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x416BC9,100,0,0x4165F0,1, 0x416BC9,110,0,0x4165F0,1, 0x416BC9,120,0,0x4165F0,1>;
using def_t = bool(CPathFind *, CVector, unsigned char, CVector);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,CVector,unsigned char,CVector>, 0,1,2,3>;
META_END

META_BEGIN(CPathFind::CalcRoadDensity)
static int address;
static int global_address;
static const int id = 0x42C990;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42C990, 0x42C990, 0x42C990>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x49FE6F,100,0,0x49FD30,1, 0x49FF5F,110,0,0x49FE20,1, 0x49FEEF,120,0,0x49FDB0,1>;
using def_t = float(CPathFind *, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,float,float>, 0,1,2>;
META_END

META_BEGIN(CPathFind::RemoveNodeFromList)
static int address;
static int global_address;
static const int id = 0x42CBB0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42CBB0, 0x42CBB0, 0x42CBB0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x42B3F3,100,0,0x42B040,1, 0x42B435,100,0,0x42B040,2, 0x42B3F3,110,0,0x42B040,1, 0x42B435,110,0,0x42B040,2, 0x42B3F3,120,0,0x42B040,1, 0x42B435,120,0,0x42B040,2>;
using def_t = void(CPathFind *, CPathNode *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,CPathNode *>, 0,1>;
META_END

META_BEGIN(CPathFind::AddNodeToList)
static int address;
static int global_address;
static const int id = 0x42CBE0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42CBE0, 0x42CBE0, 0x42CBE0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x42B305,100,0,0x42B040,1, 0x42B41C,100,0,0x42B040,2, 0x42B305,110,0,0x42B040,1, 0x42B41C,110,0,0x42B040,2, 0x42B305,120,0,0x42B040,1, 0x42B41C,120,0,0x42B040,2>;
using def_t = void(CPathFind *, CPathNode *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,CPathNode *,int>, 0,1,2>;
META_END

META_BEGIN(CPathFind::FindNodeClosestToCoors)
static int address;
static int global_address;
static const int id = 0x42CC30;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42CC30, 0x42CC30, 0x42CC30>;
// total references count: 10en (14), 11en (14), steam (14)
using refs_t = RefList<0x42B08D,100,0,0x42B040,1, 0x43635E,100,0,0x4361A0,1, 0x436615,100,0,0x436450,1, 0x4459F4,100,0,0x4458A0,1, 0x445AEA,100,0,0x4458A0,2, 0x44F39E,100,0,0x44CB80,1, 0x490F60,100,0,0x490EE0,1, 0x4B40FF,100,0,0x4B4060,1, 0x4B4217,100,0,0x4B4170,1, 0x4C9C2C,100,0,0x4C8910,1, 0x4DAF34,100,0,0x4D94E0,1, 0x4E3AE2,100,0,0x4E3A90,1, 0x58A989,100,0,0x589D00,1, 0x58AAAF,100,0,0x589D00,2, 0x42B08D,110,0,0x42B040,1, 0x43635E,110,0,0x4361A0,1, 0x436615,110,0,0x436450,1, 0x4459F4,110,0,0x4458A0,1, 0x445AEA,110,0,0x4458A0,2, 0x44F39E,110,0,0x44CB80,1, 0x491020,110,0,0x490FA0,1, 0x4B41EF,110,0,0x4B4150,1, 0x4B4307,110,0,0x4B4260,1, 0x4C9CCC,110,0,0x4C89B0,1, 0x4DAFD4,110,0,0x4D9580,1, 0x4E3B92,110,0,0x4E3B40,1, 0x58ACC9,110,0,0x58A040,1, 0x58ADEF,110,0,0x58A040,2, 0x42B08D,120,0,0x42B040,1, 0x43635E,120,0,0x4361A0,1, 0x436615,120,0,0x436450,1, 0x4459F4,120,0,0x4458A0,1, 0x445AEA,120,0,0x4458A0,2, 0x44F39E,120,0,0x44CB80,1, 0x490FB0,120,0,0x490F30,1, 0x4B417F,120,0,0x4B40E0,1, 0x4B4297,120,0,0x4B41F0,1, 0x4C9C5C,120,0,0x4C8940,1, 0x4DAF64,120,0,0x4D9510,1, 0x4E3B22,120,0,0x4E3AD0,1, 0x58ABB9,120,0,0x589F30,1, 0x58ACDF,120,0,0x589F30,2>;
using def_t = int(CPathFind *, CVector, unsigned char, float, bool, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,CVector,unsigned char,float,bool,bool>, 0,1,2,3,4,5>;
META_END

META_BEGIN(CPathFind::FindNodeClosestToCoorsFavourDirection)
static int address;
static int global_address;
static const int id = 0x42CDC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42CDC0, 0x42CDC0, 0x42CDC0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x41F889,100,0,0x41F820,1, 0x41F889,110,0,0x41F820,1, 0x41F889,120,0,0x41F820,1>;
using def_t = int(CPathFind *, CVector, unsigned char, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,CVector,unsigned char,float,float>, 0,1,2,3,4>;
META_END

META_BEGIN(CPathFind::FindNodeOrientationForCarPlacement)
static int address;
static int global_address;
static const int id = 0x42CFC0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42CFC0, 0x42CFC0, 0x42CFC0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x44F3D2,100,0,0x44CB80,1, 0x44F3D2,110,0,0x44CB80,1, 0x44F3D2,120,0,0x44CB80,1>;
using def_t = float(CPathFind *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,unsigned int>, 0,1>;
META_END

META_BEGIN(CPathFind::FindNodeOrientationForCarPlacementFacingDestination)
static int address;
static int global_address;
static const int id = 0x42D060;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42D060, 0x42D060, 0x42D060>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x58A9C7,100,0,0x589D00,1, 0x58AAF3,100,0,0x589D00,2, 0x58AD07,110,0,0x58A040,1, 0x58AE33,110,0,0x58A040,2, 0x58ABF7,120,0,0x589F30,1, 0x58AD23,120,0,0x589F30,2>;
using def_t = float(CPathFind *, unsigned int, float, float, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,unsigned int,float,float,bool>, 0,1,2,3,4>;
META_END

META_BEGIN(CPathFind::FindRoadObjectClosestToCoors)
static int address;
static int global_address;
static const int id = 0x42D2A0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42D2A0, 0x42D2A0, 0x42D2A0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x42B11B,100,0,0x42B040,1, 0x42BA71,100,0,0x42B9F0,1, 0x42B11B,110,0,0x42B040,1, 0x42BA71,110,0,0x42B9F0,1, 0x42B11B,120,0,0x42B040,1, 0x42BA71,120,0,0x42B9F0,1>;
using def_t = CTreadable *(CPathFind *, CVector, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,CVector,unsigned char>, 0,1,2>;
META_END

META_BEGIN(CPathFind::AllocatePathFindInfoMem)
static int address;
static int global_address;
static const int id = 0x42D580;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42D580, 0x42D580, 0x42D580>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x476E3D,100,0,0x476DB0,1, 0x48BFC9,100,0,0x48BED0,1, 0x476E3D,110,0,0x476DB0,1, 0x48C0B9,110,0,0x48BFC0,1, 0x476E3D,120,0,0x476DB0,1, 0x48C049,120,0,0x48BF50,1>;
using def_t = void(CPathFind *, short);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,short>, 0,1>;
META_END

META_BEGIN(CPathFind::StoreNodeInfoCar)
static int address;
static int global_address;
static const int id = 0x42D690;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42D690, 0x42D690, 0x42D690>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4780C9,100,0,0x477FF0,1, 0x4780C9,110,0,0x477FF0,1, 0x4780C9,120,0,0x477FF0,1>;
using def_t = void(CPathFind *, short, short, char, char, short, short, short, short, char, char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,short,short,char,char,short,short,short,short,char,char>, 0,1,2,3,4,5,6,7,8,9,10>;
META_END

META_BEGIN(CPathFind::StoreNodeInfoPed)
static int address;
static int global_address;
static const int id = 0x42D7E0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42D7E0, 0x42D7E0, 0x42D7E0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x477FDB,100,0,0x477F00,1, 0x477FDB,110,0,0x477F00,1, 0x477FDB,120,0,0x477F00,1>;
using def_t = void(CPathFind *, short, short, char, char, short, short, short, short, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,short,short,char,char,short,short,short,short,bool>, 0,1,2,3,4,5,6,7,8,9>;
META_END

META_BEGIN(CPathFind::SwitchRoadsOffInArea)
static int address;
static int global_address;
static const int id = 0x42D960;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42D960, 0x42D960, 0x42D960>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x44257D,100,0,0x440CB0,1, 0x44265A,100,0,0x440CB0,2, 0x44257D,110,0,0x440CB0,1, 0x44265A,110,0,0x440CB0,2, 0x44257D,120,0,0x440CB0,1, 0x44265A,120,0,0x440CB0,2>;
using def_t = void(CPathFind *, float, float, float, float, float, float, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,float,float,float,float,float,float,bool>, 0,1,2,3,4,5,6,7>;
META_END

META_BEGIN(CPathFind::SwitchPedRoadsOffInArea)
static int address;
static int global_address;
static const int id = 0x42DA50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42DA50, 0x42DA50, 0x42DA50>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x443C3D,100,0,0x4429C0,1, 0x443D01,100,0,0x4429C0,2, 0x443C3D,110,0,0x4429C0,1, 0x443D01,110,0,0x4429C0,2, 0x443C3D,120,0,0x4429C0,1, 0x443D01,120,0,0x4429C0,2>;
using def_t = void(CPathFind *, float, float, float, float, float, float, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,float,float,float,float,float,float,bool>, 0,1,2,3,4,5,6,7>;
META_END

META_BEGIN(CPathFind::SwitchRoadsInAngledArea)
static int address;
static int global_address;
static const int id = 0x42DB50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42DB50, 0x42DB50, 0x42DB50>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x44D9CC,100,0,0x44CB80,1, 0x44DA26,100,0,0x44CB80,2, 0x44DA80,100,0,0x44CB80,3, 0x44DADA,100,0,0x44CB80,4, 0x44D9CC,110,0,0x44CB80,1, 0x44DA26,110,0,0x44CB80,2, 0x44DA80,110,0,0x44CB80,3, 0x44DADA,110,0,0x44CB80,4, 0x44D9CC,120,0,0x44CB80,1, 0x44DA26,120,0,0x44CB80,2, 0x44DA80,120,0,0x44CB80,3, 0x44DADA,120,0,0x44CB80,4>;
using def_t = void(CPathFind *, float, float, float, float, float, float, float, unsigned char, unsigned char);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,float,float,float,float,float,float,float,unsigned char,unsigned char>, 0,1,2,3,4,5,6,7,8,9>;
META_END

META_BEGIN(CPathFind::SwitchOffNodeAndNeighbours)
static int address;
static int global_address;
static const int id = 0x42DED0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42DED0, 0x42DED0, 0x42DED0>;
// total references count: 10en (4), 11en (4), steam (4)
using refs_t = RefList<0x42DA05,100,0,0x42D960,1, 0x42DB01,100,0,0x42DA50,1, 0x42DE64,100,0,0x42DB50,1, 0x42DF32,100,0,0x42DED0,1, 0x42DA05,110,0,0x42D960,1, 0x42DB01,110,0,0x42DA50,1, 0x42DE64,110,0,0x42DB50,1, 0x42DF32,110,0,0x42DED0,1, 0x42DA05,120,0,0x42D960,1, 0x42DB01,120,0,0x42DA50,1, 0x42DE64,120,0,0x42DB50,1, 0x42DF32,120,0,0x42DED0,1>;
using def_t = void(CPathFind *, int, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,int,bool>, 0,1,2>;
META_END

META_BEGIN(CPathFind::MarkRoadsBetweenLevelsInArea)
static int address;
static int global_address;
static const int id = 0x42DF50;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42DF50, 0x42DF50, 0x42DF50>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x589293,100,0,0x588490,1, 0x5895D3,110,0,0x5887D0,1, 0x5894C3,120,0,0x5886C0,1>;
using def_t = void(CPathFind *, float, float, float, float, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,float,float,float,float,float,float>, 0,1,2,3,4,5,6>;
META_END

META_BEGIN(CPathFind::PedMarkRoadsBetweenLevelsInArea)
static int address;
static int global_address;
static const int id = 0x42E040;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42E040, 0x42E040, 0x42E040>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x589352,100,0,0x588490,1, 0x589692,110,0,0x5887D0,1, 0x589582,120,0,0x5886C0,1>;
using def_t = void(CPathFind *, float, float, float, float, float, float);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,float,float,float,float,float,float>, 0,1,2,3,4,5,6>;
META_END

META_BEGIN(CPathFind::MarkRoadsBetweenLevelsNodeAndNeighbours)
static int address;
static int global_address;
static const int id = 0x42E140;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42E140, 0x42E140, 0x42E140>;
// total references count: 10en (3), 11en (3), steam (3)
using refs_t = RefList<0x42DFEC,100,0,0x42DF50,1, 0x42E0E8,100,0,0x42E040,1, 0x42E18C,100,0,0x42E140,1, 0x42DFEC,110,0,0x42DF50,1, 0x42E0E8,110,0,0x42E040,1, 0x42E18C,110,0,0x42E140,1, 0x42DFEC,120,0,0x42DF50,1, 0x42E0E8,120,0,0x42E040,1, 0x42E18C,120,0,0x42E140,1>;
using def_t = void(CPathFind *, int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,int>, 0,1>;
META_END

META_BEGIN(CPathFind::TestForPedTrafficLight)
static int address;
static int global_address;
static const int id = 0x42E1B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42E1B0, 0x42E1B0, 0x42E1B0>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x4D2B23,100,0,0x4D28D0,1, 0x4D2BC3,110,0,0x4D2970,1, 0x4D2B53,120,0,0x4D2900,1>;
using def_t = bool(CPathFind *, CPathNode *, CPathNode *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,CPathNode *,CPathNode *>, 0,1,2>;
META_END

META_BEGIN(CPathFind::TestCrossesRoad)
static int address;
static int global_address;
static const int id = 0x42E340;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42E340, 0x42E340, 0x42E340>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x4C7367,100,0,0x4C7340,1, 0x4D2B53,100,0,0x4D28D0,1, 0x4C7407,110,0,0x4C73E0,1, 0x4D2BF3,110,0,0x4D2970,1, 0x4C7397,120,0,0x4C7370,1, 0x4D2B83,120,0,0x4D2900,1>;
using def_t = bool(CPathFind *, CPathNode *, CPathNode *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,CPathNode *,CPathNode *>, 0,1,2>;
META_END

META_BEGIN(CPathFind::SetLinksBridgeLights)
static int address;
static int global_address;
static const int id = 0x42E3B0;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42E3B0, 0x42E3B0, 0x42E3B0>;
// total references count: 10en (2), 11en (2), steam (2)
using refs_t = RefList<0x413AAC,100,0,0x413A30,1, 0x413D07,100,0,0x413AC0,1, 0x413AAC,110,0,0x413A30,1, 0x413D07,110,0,0x413AC0,1, 0x413AAC,120,0,0x413A30,1, 0x413D07,120,0,0x413AC0,1>;
using def_t = void(CPathFind *, float, float, float, float, bool);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,float,float,float,float,bool>, 0,1,2,3,4,5>;
META_END

META_BEGIN(CPathFind::Save)
static int address;
static int global_address;
static const int id = 0x42E450;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42E450, 0x42E450, 0x42E450>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x58FF27,100,0,0x58F8D0,1, 0x590217,110,0,0x58FBC0,1, 0x590107,120,0,0x58FAB0,1>;
using def_t = void(CPathFind *, unsigned char *, unsigned int *);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,unsigned char *,unsigned int *>, 0,1,2>;
META_END

META_BEGIN(CPathFind::Load)
static int address;
static int global_address;
static const int id = 0x42E550;
static const bool is_virtual = false;
static const int vtable_index = -1;
using mv_addresses_t = MvAddresses<0x42E550, 0x42E550, 0x42E550>;
// total references count: 10en (1), 11en (1), steam (1)
using refs_t = RefList<0x59109A,100,0,0x590A00,1, 0x59135A,110,0,0x590CC0,1, 0x59124A,120,0,0x590BB0,1>;
using def_t = void(CPathFind *, unsigned char *, unsigned int);
static const int cb_priority = PRIORITY_BEFORE; 
using calling_convention_t = CallingConventions::Thiscall;
using args_t = ArgPick<ArgTypes<CPathFind *,unsigned char *,unsigned int>, 0,1,2>;
META_END

}
