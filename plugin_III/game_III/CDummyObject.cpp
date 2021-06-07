/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CDummyObject.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CDummyObject) = ADDRESS_BY_VERSION(0x4BAAF0, 0x4BABE0, 0x4BAB70);
int ctor_gaddr(CDummyObject) = GLOBAL_ADDRESS_BY_VERSION(0x4BAAF0, 0x4BABE0, 0x4BAB70);

int ctor_addr_o(CDummyObject, void(CObject *)) = ADDRESS_BY_VERSION(0x4BAB10, 0x4BAC00, 0x4BAB90);
int ctor_gaddr_o(CDummyObject, void(CObject *)) = GLOBAL_ADDRESS_BY_VERSION(0x4BAB10, 0x4BAC00, 0x4BAB90);

int dtor_addr(CDummyObject) = ADDRESS_BY_VERSION(0x4BAB70, 0x4BAC60, 0x4BABF0);
int dtor_gaddr(CDummyObject) = GLOBAL_ADDRESS_BY_VERSION(0x4BAB70, 0x4BAC60, 0x4BABF0);

int del_dtor_addr(CDummyObject) = ADDRESS_BY_VERSION(0x4BAB90, 0x4BAC80, 0x4BAC10);
int del_dtor_gaddr(CDummyObject) = GLOBAL_ADDRESS_BY_VERSION(0x4BAB90, 0x4BAC80, 0x4BAC10);
