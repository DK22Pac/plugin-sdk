/*
    Plugin-SDK (Grand Theft Auto Vice City) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "RenderWare.h"

class PLUGIN_API CFileLoader {
public:
    // load txd from file
    static inline RwTexDictionary *LoadTexDictionary(char const* filename) { // @0x48DA38
        RwStream *stream = RwStreamOpen(rwSTREAMFILENAME, rwSTREAMREAD, filename);
        // debug("Loading texture dictionary file %s\n", filename); // TODO: call 0x401000
        if (stream) {
            if (RwStreamFindChunk(stream, rwID_TEXDICTIONARY, NULL, NULL)) {
                RwTexDictionary *dict = RwTexDictionaryStreamRead(stream);
                if (dict) {
                    RwStreamClose(stream, NULL);
                    return dict;
                }
            }
            RwStreamClose(stream, NULL);
        }
        return RwTexDictionaryCreate();
    }
};