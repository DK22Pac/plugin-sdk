#pragma once

#include "plbase/PluginBase_SA.h"

class CKeyGen {
public:
    static unsigned int *keyTable;

    static unsigned int GetKey(char const* str, int size);
    static unsigned int GetKey(char const* str);
    static unsigned int GetUppercaseKey(char const* str);
    static unsigned int AppendStringToKey(unsigned int key, char const* str);
};