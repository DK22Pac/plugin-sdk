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

    // save txd to file
    static inline void SaveTexDictionary(const RwTexDictionary* dict, char const* filename) {
        RwStream* stream = RwStreamOpen(rwSTREAMFILENAME, rwSTREAMWRITE, filename);
        if (stream) {
            RwTexDictionaryStreamWrite(dict, stream);
            RwStreamClose(stream, NULL);
        }
    }

    static RwTexture* MoveTextureCB(RwTexture* texture, void* data) {
        RwTexDictionaryAddTexture((RwTexDictionary*)data, texture);
        return texture;
    }
    
    static inline void AddTexDictionaries(RwTexDictionary* dst, RwTexDictionary* src) {
        RwTexDictionaryForAllTextures(src, MoveTextureCB, dst);
    }

    static RpClump* LoadAtomicFile2Return(const char* file);

    static RpAtomic* FindRelatedModelInfoCB(RpAtomic* atomic, void* data);

    static void LoadLevel(const char* filename);

    static void LoadCollisionFile(const char* filename, unsigned char colId);

    static void LoadClumpFile(const char* filename);

    static void LoadObjectTypes(const char* filename);

    static void LoadScene(const char* filename);

};
