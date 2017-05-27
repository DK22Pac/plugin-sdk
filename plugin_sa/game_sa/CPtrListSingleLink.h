/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "plbase/PluginBase_SA.h"
#include "CPtrList.h"
#include "CPtrNodeSingleLink.h"

class PLUGIN_API CPtrListSingleLink : public CPtrList {
public:
    inline CPtrNodeSingleLink *GetNode() {
        return reinterpret_cast<CPtrNodeSingleLink *>(pNode);
    }

    void Flush();

    inline ~CPtrListSingleLink() {
        Flush();
    }

    void AddItem(void* item);

    /*
    void AddItem(void *item) {
        CPtrNodeSingleLink *newNode = new CPtrNodeSingleLink;
        newNode->pItem = item;
        newNode->pNext = GetNode();
        pNode = reinterpret_cast<CPtrNode *>(newNode);
    }
    */

    void DeleteItem(void* item);
};

VALIDATE_SIZE(CPtrListSingleLink, 4);