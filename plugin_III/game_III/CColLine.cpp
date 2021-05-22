/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CColLine.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CColLine) = ADDRESS_BY_VERSION(0x411510, 0x411510, 0x411510);
int ctor_gaddr(CColLine) = GLOBAL_ADDRESS_BY_VERSION(0x411510, 0x411510, 0x411510);

int ctor_addr_o(CColLine, void(CVector const &, CVector const &)) = ADDRESS_BY_VERSION(0x40B320, 0x40B320, 0x40B320);
int ctor_gaddr_o(CColLine, void(CVector const &, CVector const &)) = GLOBAL_ADDRESS_BY_VERSION(0x40B320, 0x40B320, 0x40B320);

int addrof(CColLine::Set) = ADDRESS_BY_VERSION(0x40B350, 0x40B350, 0x40B350);
int gaddrof(CColLine::Set) = GLOBAL_ADDRESS_BY_VERSION(0x40B350, 0x40B350, 0x40B350);

void CColLine::Set(CVector const &start, CVector const &end) {
    plugin::CallMethodDynGlobal<CColLine *, CVector const &, CVector const &>(gaddrof(CColLine::Set), this, start, end);
}
