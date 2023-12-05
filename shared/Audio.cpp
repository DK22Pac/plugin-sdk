/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "plugin.h"
#include "Audio.h"
#ifdef GBH
#include "GBH.h"
#elif RW
#include "RenderWare.h"
#elif RAGE
#include "Rage.h"
#endif
#include "bass/bass.h"

#if defined(GTA2) || defined(GTA3) || defined(GTAVC) || defined(GTASA) || defined(GTAIV)
#pragma comment(lib, "bass.lib")

namespace plugin {

    bool BassAudio::bassInit = false;
    std::vector<BassAudioObject*> BassAudio::objects = {};

    void BassAudio::BassSetEvents() {
        if (!bassInit) {
            BassInit();

            plugin::Events::gameProcessEvent += [&] {
                BassUpdate();
            };

#if defined(GBH) || defined(RAGE)
            plugin::Events::shutdownEngineEvent += [&] {
#elif RW
            plugin::Events::shutdownRwEvent += [&] {
#endif
                BassShutdown();
            };

            bassInit = true;
        }
    }

    void BassAudio::BassInit() {
        BASS_Init(-1, 44100, 0, NULL, NULL);
    }

    void BassAudio::BassShutdown() {
        BASS_Free();
    }

    void BassAudio::BassUpdate() {
        for (auto& obj : objects) {
            for (auto& chu : obj->chunks) {
                BASS_SAMPLE info;
                BASS_SampleGetInfo(chu.chunk, &info);

                DWORD* channels = new DWORD[info.max * sizeof(HCHANNEL)];
                DWORD count = BASS_SampleGetChannels(chu.chunk, channels);

                for (DWORD i = 0; i < count; i++) {
#ifdef GTA2
                    void* wnd = GetHWnd();
#elif RW
                    void* wnd = RsGlobal.ps->window;
#elif RAGE
                    void* wnd = GetHWnd<void*>();
#endif

                    if (!IsIconic((HWND)wnd) && !obj->settings.mute()) {
                        BASS_ChannelSetAttribute(channels[i], BASS_ATTRIB_VOL, chu.volume * obj->settings.masterVolume());
                    }
                    else
                        BASS_ChannelSetAttribute(channels[i], BASS_ATTRIB_VOL, 0.0f);

                    int a = BASS_ChannelIsActive(channels[i]);
                    if (obj->settings.playPause() && a == BASS_ACTIVE_PAUSED) {
                        BASS_ChannelPlay(channels[i], FALSE);
                    }
                    else if (!obj->settings.playPause() && a == BASS_ACTIVE_PLAYING) {
                        BASS_ChannelPause(channels[i]);
                    }

                    if (obj->settings.stop()) {
                        BASS_ChannelStop(channels[i]);
                    }

                    if (obj->settings.loop()) {
                        BASS_ChannelFlags(channels[i], BASS_SAMPLE_LOOP, BASS_SAMPLE_LOOP);
                    }
                    else {
                        BASS_ChannelFlags(channels[i], NULL, BASS_SAMPLE_LOOP);
                    }
                }
                delete[] channels;
            }
        }
    }

    void BassAudio::BassAddObject(BassAudioObject * obj) {
        BassAudio::objects.push_back(obj);
    }

    void BassAudio::BassRemoveObject(BassAudioObject * obj) {
        if (BassAudio::objects.size() > 0)
            BassAudio::objects.erase(std::remove(BassAudio::objects.begin(), BassAudio::objects.end(), obj), BassAudio::objects.end());
    }

    // BASS Audio Object

    BassAudioObject::BassAudioObject() {
        chunks.reserve(16);

        settings.mute = [] { return false; };
        settings.masterVolume = [] { return 1.0f; };
        settings.playPause = [] { return true; };
        settings.stop = [] { return false; };
        settings.loop = [] { return false; };

        BassAudio::BassSetEvents();
        BassAudio::BassAddObject(this);
    }

    BassAudioObject::~BassAudioObject() {
        for (auto& it : chunks)
            BASS_SampleFree(it.chunk);

        BassAudio::BassRemoveObject(this);
    }

    void BassAudioObject::LoadChunk(const char* file) {
        unsigned long chunk = BASS_SampleLoad(FALSE, file, 0, 0, 3, 0);
        chunks.push_back({ chunk, 1.0f });
    }

    void BassAudioObject::LoadChunks(std::vector<const char*> files) {
        for (auto& it : files) {
            LoadChunk(it);
        }
    }

    void BassAudioObject::PlayChunk(int id, float volume) {
        auto c = BASS_SampleGetChannel(chunks[id].chunk, NULL);
        volume = CLAMP(volume, 0.0f, 1.0f);
        chunks[id].volume = volume;
        BASS_ChannelSetAttribute(c, BASS_ATTRIB_VOL, chunks[id].volume * settings.masterVolume());
        BASS_ChannelPlay(c, TRUE);
    }

    void BassAudioObject::StopChunk(int id) {
        BASS_SAMPLE info;
        BASS_SampleGetInfo(chunks[id].chunk, &info);

        DWORD* channels = new DWORD[info.max * sizeof(HCHANNEL)];
        DWORD count = BASS_SampleGetChannels(chunks[id].chunk, channels);

        for (DWORD i = 0; i < count; i++) {
            BASS_ChannelSetPosition(channels[i], 0, BASS_POS_BYTE);
            BASS_SampleStop(channels[i]);
            BASS_ChannelStop(channels[i]);
        }
        delete[] channels;
    }

    void BassAudioObject::StopAllChunks() {
        for (auto& chu : chunks) {
            BASS_SAMPLE info;
            BASS_SampleGetInfo(chu.chunk, &info);

            DWORD* channels = new DWORD[info.max * sizeof(HCHANNEL)];
            DWORD count = BASS_SampleGetChannels(chu.chunk, channels);

            for (DWORD i = 0; i < count; i++) {
                BASS_ChannelSetPosition(channels[i], 0, BASS_POS_BYTE);
                BASS_SampleStop(channels[i]);
                BASS_ChannelStop(channels[i]);
            }
            delete[] channels;
        }
    }
#endif
}
