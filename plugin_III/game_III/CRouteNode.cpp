/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRouteNode.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CRouteNode(&gaRoutes)[200] = *reinterpret_cast<CRouteNode(*)[200]>(GLOBAL_ADDRESS_BY_VERSION(0x62E090, 0x62E090, 0x63E090));

int ctor_addr(CRouteNode) = ADDRESS_BY_VERSION(0x4EE7D0, 0x4EE880, 0x4EE810);
int ctor_gaddr(CRouteNode) = GLOBAL_ADDRESS_BY_VERSION(0x4EE7D0, 0x4EE880, 0x4EE810);

int addrof(CRouteNode::AddRoutePoint) = ADDRESS_BY_VERSION(0x4EE710, 0x4EE7C0, 0x4EE750);
int gaddrof(CRouteNode::AddRoutePoint) = GLOBAL_ADDRESS_BY_VERSION(0x4EE710, 0x4EE7C0, 0x4EE750);

void CRouteNode::AddRoutePoint(short route, CVector pos) {
    plugin::CallDynGlobal<short, CVector>(gaddrof(CRouteNode::AddRoutePoint), route, pos);
}

int addrof(CRouteNode::GetPointPosition) = ADDRESS_BY_VERSION(0x4EE780, 0x4EE830, 0x4EE7C0);
int gaddrof(CRouteNode::GetPointPosition) = GLOBAL_ADDRESS_BY_VERSION(0x4EE780, 0x4EE830, 0x4EE7C0);

CVector CRouteNode::GetPointPosition(short point) {
    CVector ret_pos;
    plugin::CallDynGlobal<CVector *, short>(gaddrof(CRouteNode::GetPointPosition), &ret_pos, point);
    return ret_pos;
}

int addrof(CRouteNode::GetRouteStart) = ADDRESS_BY_VERSION(0x4EE760, 0x4EE810, 0x4EE7A0);
int gaddrof(CRouteNode::GetRouteStart) = GLOBAL_ADDRESS_BY_VERSION(0x4EE760, 0x4EE810, 0x4EE7A0);

short CRouteNode::GetRouteStart(short route) {
    return plugin::CallAndReturnDynGlobal<short, short>(gaddrof(CRouteNode::GetRouteStart), route);
}

int addrof(CRouteNode::GetRouteThisPointIsOn) = ADDRESS_BY_VERSION(0x4EE7A0, 0x4EE850, 0x4EE7E0);
int gaddrof(CRouteNode::GetRouteThisPointIsOn) = GLOBAL_ADDRESS_BY_VERSION(0x4EE7A0, 0x4EE850, 0x4EE7E0);

short CRouteNode::GetRouteThisPointIsOn(short point) {
    return plugin::CallAndReturnDynGlobal<short, short>(gaddrof(CRouteNode::GetRouteThisPointIsOn), point);
}

int addrof(CRouteNode::Initialise) = ADDRESS_BY_VERSION(0x4EE470, 0x4EE520, 0x4EE4B0);
int gaddrof(CRouteNode::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x4EE470, 0x4EE520, 0x4EE4B0);

void CRouteNode::Initialise() {
    plugin::CallDynGlobal(gaddrof(CRouteNode::Initialise));
}

int addrof(CRouteNode::RemoveRoute) = ADDRESS_BY_VERSION(0x4EE5C0, 0x4EE670, 0x4EE600);
int gaddrof(CRouteNode::RemoveRoute) = GLOBAL_ADDRESS_BY_VERSION(0x4EE5C0, 0x4EE670, 0x4EE600);

void CRouteNode::RemoveRoute(short route) {
    plugin::CallDynGlobal<short>(gaddrof(CRouteNode::RemoveRoute), route);
}
