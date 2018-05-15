/*
    Plugin-SDK (Grand Theft Auto San Andreas) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CDate.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CDate) = ADDRESS_BY_VERSION(0x618D10, 0, 0, 0, 0, 0);
int ctor_gaddr(CDate) = GLOBAL_ADDRESS_BY_VERSION(0x618D10, 0, 0, 0, 0, 0);

CDate::CDate() {
    plugin::CallMethodDynGlobal<CDate *>(ctor_gaddr(CDate), this);
}

int addrof(CDate::operator<) = ADDRESS_BY_VERSION(0x618D90, 0, 0, 0, 0, 0);
int gaddrof(CDate::operator<) = GLOBAL_ADDRESS_BY_VERSION(0x618D90, 0, 0, 0, 0, 0);

bool CDate::operator<(CDate const &rhs) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CDate *, CDate const &>(gaddrof(CDate::operator<), this, rhs);
}

int addrof(CDate::operator==) = ADDRESS_BY_VERSION(0x618DF0, 0, 0, 0, 0, 0);
int gaddrof(CDate::operator==) = GLOBAL_ADDRESS_BY_VERSION(0x618DF0, 0, 0, 0, 0, 0);

bool CDate::operator==(CDate const &rhs) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CDate *, CDate const &>(gaddrof(CDate::operator==), this, rhs);
}

int addrof(CDate::operator>) = ADDRESS_BY_VERSION(0x618D30, 0, 0, 0, 0, 0);
int gaddrof(CDate::operator>) = GLOBAL_ADDRESS_BY_VERSION(0x618D30, 0, 0, 0, 0, 0);

bool CDate::operator>(CDate const &rhs) {
    return plugin::CallMethodAndReturnDynGlobal<bool, CDate *, CDate const &>(gaddrof(CDate::operator>), this, rhs);
}

int addrof(CDate::PopulateDateFields) = ADDRESS_BY_VERSION(0x618E30, 0, 0, 0, 0, 0);
int gaddrof(CDate::PopulateDateFields) = GLOBAL_ADDRESS_BY_VERSION(0x618E30, 0, 0, 0, 0, 0);

void CDate::PopulateDateFields(char const &seconds, char const &minutes, char const &hours, char const &day, char const &month, short year) {
    plugin::CallMethodDynGlobal<CDate *, char const &, char const &, char const &, char const &, char const &, short>(gaddrof(CDate::PopulateDateFields), this, seconds, minutes, hours, day, month, year);
}
