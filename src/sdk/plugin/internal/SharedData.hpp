#pragma once
#include <cstdint>
#include "SharedList.hpp"

#pragma pack(push, 1)

// This structure stores the important data shared between plugins
// It's basically the data block from the controller block (shared.hpp)
// This structure should be backward compatible
// This is a POD structure, no construction, no destruction!
struct SharedData
{
    intptr_t test;
    ListHead<HMODULE> list;

    // TODO
};

#pragma pack(pop)

// Make sure SharedData is on the bounds
static_assert(sizeof(SharedData) < CBM_DATA_SIZE, "SharedData is too big for the current CBM_DATA_SIZE");

