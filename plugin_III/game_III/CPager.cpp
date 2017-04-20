/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CPager.h"

// Converted from thiscall void CPager::Init(void) 0x52B6F0
void CPager::Init() {
    plugin::CallMethod<0x52B6F0, CPager *>(this);
}

// Converted from thiscall void CPager::Process(void) 0x52B740
void CPager::Process() {
    plugin::CallMethod<0x52B740, CPager *>(this);
}

// Converted from thiscall void CPager::Display(void) 0x52B890
void CPager::Display() {
    plugin::CallMethod<0x52B890, CPager *>(this);
}

// Converted from thiscall void CPager::AddMessage(ushort *text,ushort,ushort,ushort) 0x52B940
void CPager::AddMessage(wchar_t* text, unsigned short arg1, unsigned short arg2, unsigned short arg3) {
    plugin::CallMethod<0x52B940, CPager *, wchar_t*, unsigned short, unsigned short, unsigned short>(this, text, arg1, arg2, arg3);
}

// Converted from thiscall void CPager::AddMessageWithNumber(ushort *text,int n1,int n2,int n3,int n4,int n5,int n6,ushort,ushort,ushort) 0x52BB50
void CPager::AddMessageWithNumber(wchar_t* text, int n1, int n2, int n3, int n4, int n5, int n6, unsigned short arg7, unsigned short arg8, unsigned short arg9) {
    plugin::CallMethod<0x52BB50, CPager *, wchar_t*, int, int, int, int, int, int, unsigned short, unsigned short, unsigned short>(this, text, n1, n2, n3, n4, n5, n6, arg7, arg8, arg9);
}

// Converted from thiscall void CPager::ClearMessages(void) 0x52BE00
void CPager::ClearMessages() {
    plugin::CallMethod<0x52BE00, CPager *>(this);
}

// Converted from thiscall void CPager::RestartCurrentMessage(void) 0x52BE50 
void CPager::RestartCurrentMessage() {
    plugin::CallMethod<0x52BE50, CPager *>(this);
}