/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

class CStreaming {
public:
    static char RequestModel(int modelIndex, int flags);
    static int LoadAllRequestedModels(int a1, char a2);
    static char SetModelIsDeletable(int modelIndex);

};