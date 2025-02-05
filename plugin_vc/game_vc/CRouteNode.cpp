/*
    Plugin-SDK (Grand Theft Auto Vice City) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRouteNode.h"

PLUGIN_SOURCE_FILE

PLUGIN_VARIABLE CRouteNode(&gaRoutes)[200] = *reinterpret_cast<CRouteNode(*)[200]>(GLOBAL_ADDRESS_BY_VERSION(0x708018, 0x708018, 0x707018));

int ctor_addr(CRouteNode) = ADDRESS_BY_VERSION(0x52FFB0, 0x52FFD0, 0x52FEA0);
int ctor_gaddr(CRouteNode) = GLOBAL_ADDRESS_BY_VERSION(0x52FFB0, 0x52FFD0, 0x52FEA0);

int addrof(CRouteNode::AddRoutePoint) = ADDRESS_BY_VERSION(0x52FCA0, 0x52FCC0, 0x52FB90);
int gaddrof(CRouteNode::AddRoutePoint) = GLOBAL_ADDRESS_BY_VERSION(0x52FCA0, 0x52FCC0, 0x52FB90);

void CRouteNode::AddRoutePoint(short route, CVector pos) {
    plugin::CallDynGlobal<short, CVector>(gaddrof(CRouteNode::AddRoutePoint), route, pos);
}

int addrof(CRouteNode::GetPointPosition) = ADDRESS_BY_VERSION(0x52FC60, 0x52FC80, 0x52FB50);
int gaddrof(CRouteNode::GetPointPosition) = GLOBAL_ADDRESS_BY_VERSION(0x52FC60, 0x52FC80, 0x52FB50);

CVector CRouteNode::GetPointPosition(short point) {
    CVector ret_pos;
    plugin::CallDynGlobal<CVector *, short>(gaddrof(CRouteNode::GetPointPosition), &ret_pos, point);
    return ret_pos;
}

int addrof(CRouteNode::GetRouteStart) = ADDRESS_BY_VERSION(0x52FC80, 0x52FCA0, 0x52FB70);
int gaddrof(CRouteNode::GetRouteStart) = GLOBAL_ADDRESS_BY_VERSION(0x52FC80, 0x52FCA0, 0x52FB70);

short CRouteNode::GetRouteStart(short route) {
    return plugin::CallAndReturnDynGlobal<short, short>(gaddrof(CRouteNode::GetRouteStart), route);
}

int addrof(CRouteNode::GetRouteThisPointIsOn) = ADDRESS_BY_VERSION(0x52FC50, 0x52FC70, 0x52FB40);
int gaddrof(CRouteNode::GetRouteThisPointIsOn) = GLOBAL_ADDRESS_BY_VERSION(0x52FC50, 0x52FC70, 0x52FB40);

short CRouteNode::GetRouteThisPointIsOn(short point) {
    return plugin::CallAndReturnDynGlobal<short, short>(gaddrof(CRouteNode::GetRouteThisPointIsOn), point);
}

int addrof(CRouteNode::Initialise) = ADDRESS_BY_VERSION(0x52FE40, 0x52FE60, 0x52FD30);
int gaddrof(CRouteNode::Initialise) = GLOBAL_ADDRESS_BY_VERSION(0x52FE40, 0x52FE60, 0x52FD30);

void CRouteNode::Initialise() {
    plugin::CallDynGlobal(gaddrof(CRouteNode::Initialise));
}

int addrof(CRouteNode::RemoveRoute) = ADDRESS_BY_VERSION(0x52FCF0, 0x52FD10, 0x52FBE0);
int gaddrof(CRouteNode::RemoveRoute) = GLOBAL_ADDRESS_BY_VERSION(0x52FCF0, 0x52FD10, 0x52FBE0);

void CRouteNode::RemoveRoute(short route) {
    plugin::CallDynGlobal<short>(gaddrof(CRouteNode::RemoveRoute), route);
}
