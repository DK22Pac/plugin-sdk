/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CEntity.h"
#include "CEntryInfoList.h"

class PLUGIN_API CDummy : public CEntity {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CDummy)

public:
    CEntryInfoList m_collisionList;

    // virtual function #0 (destructor)

    SUPPORTED_10EN_11EN_STEAM void Add();
    SUPPORTED_10EN_11EN_STEAM void Remove();

    // virtual function #3 (not overriden)


    // virtual function #4 (not overriden)


    // virtual function #5 (not overriden)


    // virtual function #6 (not overriden)


    // virtual function #7 (not overriden)


    // virtual function #8 (not overriden)


    // virtual function #9 (not overriden)


    // virtual function #10 (not overriden)


    // virtual function #11 (not overriden)


    // virtual function #12 (not overriden)


    // virtual function #13 (not overriden)


    // virtual function #14 (not overriden)


    // virtual function #15 (not overriden)


    // virtual function #16 (not overriden)

};

VTABLE_DESC(CDummy, 0x5F0F40, 17);
VALIDATE_SIZE(CDummy, 0x68);

#include "meta/meta.CDummy.h"
