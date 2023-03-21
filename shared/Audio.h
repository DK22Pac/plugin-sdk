/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"

namespace plugin {
    struct BassChunk {
        unsigned long chunk;
        float volume;
    };

    class BassAudioObject {
    public:
        std::vector<BassChunk> chunks;

        struct {
            std::function<bool()> mute;
            std::function<float()> masterVolume;
            std::function<bool()> playPause;
            std::function<bool()> stop;
            std::function<bool()> loop;
        } settings;

    public:
        BassAudioObject();
        ~BassAudioObject();

        void LoadChunk(const char* file);
        void LoadChunks(std::vector<const char*> files);
        void PlayChunk(int id, float volume);
        void StopChunk(int id);
        void StopAllChunks();
    };

    class BassAudio {
    private:
        static bool bassInit;
        static std::vector<BassAudioObject*> objects;

    public:
        static void BassSetEvents();
        static void BassInit();
        static void BassUpdate();
        static void BassShutdown();
        static void BassAddObject(BassAudioObject* obj);
        static void BassRemoveObject(BassAudioObject* obj);
    };
}
