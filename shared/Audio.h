/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#if defined(GTA2) || defined(GTA3) || defined(GTAVC) || defined(GTASA) || defined(GTAIV)
#include "PluginBase.h"
#include "bass/bass.h"
#include <string>

#ifndef GTA2
#include "CMatrix.h"
#endif

namespace plugin {
    class BassSampleManager {
    public:
        static constexpr int32_t numChannels = 128;

        struct BassQueue {
            int32_t entityIndex;
            uint8_t volume;
            uint32_t freq;
            int32_t sample;
            uint32_t loopCount;
            uint32_t loopStart;
            int32_t loopEnd;
            float framesToPlay;
            bool reverb;
            CVector pos;
            bool is3d;
            bool played;

            BassQueue() {
                entityIndex = -1;
                volume = 0;
                freq = 0;
                sample = -1;
                loopCount = 0;
                loopStart = 0;
                loopEnd = -1;
                framesToPlay = 0;
                reverb = false;
                pos = { 0.0f, 0.0f, 0.0f };
                is3d = false;
                played = false;
            }
        };
    private:
        struct BassStream {
            int32_t entityIndex;

            int32_t channelId;
            HSTREAM stream;
            int32_t sampleId;
            struct {
                HFX reverb;
            } fx;

            float framesToPlay;
            uint8_t volume;
            bool is3d;

            BassStream() {
                entityIndex = -1;
                channelId = 0;
                sampleId = 0;
                fx.reverb = 0;
                framesToPlay = 0;
                volume = 0;
                is3d = false;
            }
        };
        
        struct BassSample {
            HSAMPLE sample;
            uint32_t loopStart;
            int32_t loopEnd;

            BassSample() {
                sample = 0;
                loopStart = 0;
                loopEnd = -1;
            }
        };

        struct BassListener {
            BASS_3DVECTOR forward;
            BASS_3DVECTOR up;
            BASS_3DVECTOR pos;

            BassListener() {
                forward = { 0.0f, 0.0f, 0.0f };
                up = { 0.0f, 0.0f, 0.0f };
                pos = { 0.0f, 0.0f, 0.0f };
            }
        };

        std::array<BassStream, numChannels> streams;
        std::vector<BassSample> samples;
        std::vector<BassQueue> queue;
        BassListener listener;

    public:
        struct {
            std::function<bool()> mute;
            std::function<uint8_t()> masterVolume;
            std::function<bool()> playPause;
            std::function<bool()> stop;
        } settings;

    private:
        void PauseChannel(uint32_t channel);

    public:
        inline BassSampleManager() {
            BASS_Init(-1, 44100, 0, NULL, NULL);

            streams = {};
            samples = {};
            queue = {};
            listener = {};

            settings.mute = [] { return false; };
            settings.masterVolume = [] { return 127; };
            settings.playPause = [] { return true; };
            settings.stop = [] { return false; };
        }

        inline ~BassSampleManager() {
            for (auto& it : samples)
                BASS_SampleFree(it.sample);

            for (auto& it : streams) {
                BASS_StreamFree(it.stream);
            }
            BASS_Free();
        }

        void LoadSample(std::string const& file, uint32_t loopStart = 0, int32_t loopEnd = -1);
        void ClearSamples();
        void SetChannelFrequency(uint32_t channel, int32_t freq);
        void SetChannel3DDistances(uint32_t channel, float min, float max);
        void SetChannel3DPosition(uint32_t channel, float x, float y, float z);
        void SetChannelEmittingVolume(uint32_t channel, int32_t value);
        bool GetChannelUsedFlag(uint32_t channel);
        void SetChannelLoopCount(uint32_t channel, uint32_t count);
        uint32_t GetChannelPosition(uint32_t channel);
        void SetChannelPosition(uint32_t channel, uint32_t pos);
        void SetChannelLoopPoints(uint32_t channel, uint32_t loopStart, int32_t loopEnd);
        uint32_t GetSampleLength(uint32_t sample);
        void SetChannelFramesToPlay(uint32_t channel, float frames);
        void SetChannel3D(uint32_t channel, bool on);
        void SetChannelEntityIndex(uint32_t channel, uint32_t entityIndex);
        uint32_t GetSampleBaseFrequency(uint32_t sample);
        void AddSampleToQueue(uint32_t entityIndex, uint8_t vol, uint32_t freq, uint32_t sample, bool loop, CVector const& pos, uint32_t framesToPlay = 8, bool is3d = true);
        void AddSampleToQueue(BassQueue const& queue);     
        bool InitialiseChannel(uint32_t channel, uint32_t sample);
        void StartChannel(uint32_t channel);
        void StopChannel(uint32_t channel);
        void ResetChannel(uint32_t channel);
        uint32_t GetSampleLoopStartOffset(uint32_t sample);
        int32_t GetSampleLoopEndOffset(uint32_t sample);
        void SetChannel2DPositions(uint32_t channel);

        void Process();

        void ClearQueue();

        uint32_t FindAvailableChannel();
        void SetChannelReverbFlag(uint32_t channel, bool reverb);
        void StopAllChannels();
    };
}
#endif
