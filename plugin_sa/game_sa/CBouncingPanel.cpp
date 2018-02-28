/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBouncingPanel.h"

float &CBouncingPanel::BOUNCE_SPRING_DAMP_MULT = *(float *)0x8D3954;
float &CBouncingPanel::BOUNCE_SPRING_RETURN_MULT = *(float *)0x8D3958;
float &CBouncingPanel::BOUNCE_VEL_CHANGE_LIMIT = *(float *)0x8D395C;
float &CBouncingPanel::BOUNCE_HANGING_DAMP_MULT = *(float *)0x8D3960;
float &CBouncingPanel::BOUNCE_HANGING_RETURN_MULT = *(float *)0x8D3964;

// Converted from thiscall void CBouncingPanel::ResetPanel(void) 0x6F4910
void CBouncingPanel::ResetPanel() {
    plugin::CallMethod<0x6F4910, CBouncingPanel *>(this);
}

// Converted from thiscall void CBouncingPanel::SetPanel(short frameId,short axis,float angleLimit) 0x6F4920
void CBouncingPanel::SetPanel(short frameId, short axis, float angleLimit) {
    plugin::CallMethod<0x6F4920, CBouncingPanel *, short, short, float>(this, frameId, axis, angleLimit);
}

// Converted from thiscall void CBouncingPanel::ProcessPanel(CVehicle *vehicle,RwFrame *frame,CVector,CVector,float,float) 0x6F49A0
void CBouncingPanel::ProcessPanel(CVehicle* vehicle, RwFrame* frame, CVector arg2, CVector arg3, float arg4, float arg5) {
    plugin::CallMethod<0x6F49A0, CBouncingPanel *, CVehicle*, RwFrame*, CVector, CVector, float, float>(this, vehicle, frame, arg2, arg3, arg4, arg5);
}