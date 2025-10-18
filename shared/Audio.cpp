/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#if defined(GTA2) || defined(GTA3) || defined(GTAVC) || defined(GTASA) || defined(GTAIV)
#include "plugin.h"
#include "Audio.h"

#ifdef GBH
#include "GBH.h"
#elif RW
#include "RenderWare.h"
#elif RAGE
#include "Rage.h"
#endif

#include "CVector.h"

#include "CCamera.h"
#pragma comment(lib, "bass.lib")
//#pragma comment(lib, "bass_fx.lib")

namespace plugin {
    void BassSampleManager::FeedSample(std::string const& name, void* buffer, uint32_t length) {
        BASS_StreamPutData(GetSample(name)->handle, buffer, length);
    }

    uint32_t BassSampleManager::CreateSample(std::string const& name, uint32_t channels, uint32_t freq) {
        BassSample s;

        s.name = name;
        s.sample = samples.size();
        s.handle = BASS_StreamCreate(
            freq,
            channels,
            0,
            STREAMPROC_PUSH,
            0
        );

        s.loopStart = 0;
        s.loopEnd = -1;
        s.isStream = true;
        s.streamFreq = freq;
        samples.push_back(s);

        return s.sample;
    }

    uint32_t BassSampleManager::LoadSample(std::string const& file, uint32_t loopStart, int32_t loopEnd) {
        BassSample s;

        s.name = plugin::RemoveExtension(plugin::RemovePath(file));
        s.sample = samples.size();
        s.handle = BASS_SampleLoad(FALSE, file.c_str(), 0, 0, 32, BASS_SAMPLE_MONO | BASS_SAMPLE_3D);
        s.loopStart = loopStart;
        s.loopEnd = loopEnd;
        samples.push_back(s);
        return s.sample;
    }

    void BassSampleManager::LoadAllSamplesFromFolder(std::string const& path) {
        auto files = plugin::GetAllFilesInFolder(path, ".wav");
        for (auto& file : files) {
            LoadSample(path + "\\" + file);
        }
    }

    BassSampleManager::BassSample* BassSampleManager::GetSample(std::string const& name) {
        auto it = std::find_if(samples.begin(), samples.end(),
                  [name](const BassSample& s) {
            return s.name == name;
        });

        if (it != samples.end())
            return it._Ptr;

        return nullptr;
    }

    void BassSampleManager::ClearSamples() {
        for (auto& it : samples) {
            BASS_SampleFree(it.handle);
        }
        samples = {};
    }

    void BassSampleManager::SetChannelFrequency(uint32_t channel, int32_t freq) {
        if (channel == 0)
            return;

        if (freq == 0)
            freq = GetSampleBaseFrequency(streams[channel].sampleId);

        BASS_ChannelSetAttribute(streams[channel].handle, BASS_ATTRIB_FREQ, (float)freq);

        streams[channel].freq = freq;
    }

    void BassSampleManager::SetChannel3DDistances(uint32_t channel, float min, float max) {
        if (channel == 0)
            return;

        if (streams[channel].is3d)
            BASS_ChannelSet3DAttributes(streams[channel].handle, BASS_3DMODE_NORMAL, min, max, 360, 0, 0.0f);
        else
            BASS_ChannelSet3DAttributes(streams[channel].handle, BASS_3DMODE_OFF, min, max, 360, -1, -1);

        BASS_Apply3D();
    }

    void BassSampleManager::SetChannel3DPosition(uint32_t channel, float x, float y, float z) {
        if (channel == 0)
            return;

        BASS_3DVECTOR pos = { x, y, z };
        BASS_ChannelSet3DPosition(streams[channel].handle, &pos, NULL, NULL);
        BASS_Set3DFactors(1.0f, 1.0f, 1.0f);

        BASS_Set3DPosition(&listener.pos, nullptr, &listener.forward, &listener.up);
        BASS_Apply3D();
    }

    void BassSampleManager::SetChannel2DPositions(uint32_t channel) {
        if (channel == 0)
            return;

        BASS_3DVECTOR pos = { 0.0f, 0.0f, 0.0f };
        BASS_ChannelSet3DPosition(streams[channel].handle, &listener.pos, NULL, NULL);
        BASS_Set3DFactors(1.0f, 1.0f, 1.0f);

        BASS_Set3DPosition(&listener.pos, nullptr, &listener.forward, &listener.up);
        BASS_Apply3D();
    }

    void BassSampleManager::SetChannelEmittingVolume(uint32_t channel, int32_t value) {
        if (channel == 0)
            return;

        if (value > 127)
            value = 127;

        BASS_ChannelSetAttribute(streams[channel].handle, BASS_ATTRIB_VOL, (value / 127.0f) * (settings.masterVolume() / 127.0f));
        streams[channel].volume = value;
    }

    bool BassSampleManager::GetChannelUsedFlag(uint32_t channel) {
        if (channel == 0)
            return true;

        auto res = BASS_ChannelIsActive(streams[channel].handle);
        return res == BASS_ACTIVE_PLAYING;
    }

    void BassSampleManager::SetChannelLoopCount(uint32_t channel, uint32_t count) {
        if (channel == 0)
            return;

        DWORD flags = 0;
        if (count == 0) {
            flags = BASS_ChannelFlags(streams[channel].handle, BASS_SAMPLE_LOOP, BASS_SAMPLE_LOOP);
        }
        else if (BASS_ChannelFlags(channel, 0, 0) & BASS_SAMPLE_LOOP) {
            flags = BASS_ChannelFlags(streams[channel].handle, 0, BASS_SAMPLE_LOOP);
        }

        streams[channel].loopCount = count;
    }

    uint32_t BassSampleManager::GetChannelPosition(uint32_t channel) {
        QWORD posBytes = BASS_ChannelGetPosition(streams[channel].handle, BASS_POS_BYTE);

        double posSeconds = BASS_ChannelBytes2Seconds(streams[channel].handle, posBytes);

        return static_cast<uint32_t>(posSeconds * GetSampleBaseFrequency(streams[channel].sampleId));
    }

    void BassSampleManager::SetChannelPosition(uint32_t channel, uint32_t pos, uint32_t mode) {
        QWORD posBytes = BASS_ChannelSeconds2Bytes(streams[channel].handle, (double)(pos / GetSampleBaseFrequency(streams[channel].sampleId)));
        DWORD flags = BASS_POS_BYTE;

        if (mode == 1)
            flags = BASS_POS_LOOP;
        else if (mode == 2)
            flags = BASS_POS_END;

        if (!BASS_ChannelSetPosition(streams[channel].handle, posBytes, flags)) {
        }
    }

    void BassSampleManager::SetChannelLoopPoints(uint32_t channel, uint32_t loopStart, int32_t loopEnd) {
        if (channel == 0)
            return;

        if (samples[streams[channel].sampleId].isStream)
            return;

        if (loopEnd == -1)
            loopEnd = GetSampleLength(streams[channel].sampleId);

        streams[channel].loopStart = loopStart;
        streams[channel].loopEnd = loopEnd;

        SetChannelPosition(channel, loopStart, 1);
        SetChannelPosition(channel, loopEnd, 2);
    }

    uint32_t BassSampleManager::GetChannelLength(uint32_t channel) {
        QWORD lengthBytes = BASS_ChannelGetLength(streams[channel].handle, BASS_POS_BYTE);
        double lengthSeconds = BASS_ChannelBytes2Seconds(streams[channel].handle, lengthBytes);
        return static_cast<uint32_t>(lengthSeconds * GetChannelFrequency(channel));
    }

    uint32_t BassSampleManager::GetSampleLength(uint32_t sample) {
        QWORD lengthBytes = BASS_ChannelGetLength(samples[sample].handle, BASS_POS_BYTE);
        double lengthSeconds = BASS_ChannelBytes2Seconds(samples[sample].handle, lengthBytes);
        return static_cast<uint32_t>(lengthSeconds * GetSampleBaseFrequency(sample));
    }

    void BassSampleManager::SetChannelFramesToPlay(uint32_t channel, float frames) {
        if (channel == 0)
            return;

        streams[channel].framesToPlay = frames;
    }

    void BassSampleManager::SetChannel3D(uint32_t channel, bool on) {
        if (channel == 0)
            return;
        streams[channel].is3d = on;
    }

    uint32_t BassSampleManager::GetChannelFrequency(uint32_t channel) {
        float freq;
        BASS_ChannelGetAttribute(streams[channel].handle, BASS_ATTRIB_FREQ, &freq);
        return static_cast<uint32_t>(freq);
    }

    uint32_t BassSampleManager::GetSampleBaseFrequency(uint32_t sample) {
        if (samples[sample].isStream) {
            return samples[sample].streamFreq;
        }

        BASS_SAMPLE info;
        BASS_SampleGetInfo(samples[sample].handle, &info);
        return static_cast<uint32_t>(info.freq);
    }

    uint32_t BassSampleManager::AddSampleToQueue(uint8_t vol, uint32_t freq, std::string const& sample, bool loop, CVector const& pos, uint32_t framesToPlay, bool is3d) {
		auto s = GetSample(sample);
        if (!s)
            return 0;

        return AddSampleToQueue(vol, freq, s->sample, loop, pos, framesToPlay, is3d);
    }

    uint32_t BassSampleManager::AddSampleToQueue(uint8_t vol, uint32_t freq, uint32_t sample, bool loop, CVector const& pos, uint32_t framesToPlay, bool is3d) {
        if (vol > 127)
            vol = 127;

        BassQueue q;
        q.pos = pos;
        q.freq = freq;
        q.volume = vol;
        q.sample = sample;
        q.reverb = true;
        q.loopStart = GetSampleLoopStartOffset(sample);
        q.loopEnd = GetSampleLoopEndOffset(sample);

        if (loop) {
            q.loopCount = 0;
            q.framesToPlay = (float)framesToPlay;
        }
        else {
            q.framesToPlay = 0.0f;
            q.loopCount = 1;
        }

        q.played = false;
        q.is3d = is3d;

        queue.push_back(q);

        return 0;
    }

    void BassSampleManager::AddSampleToQueue(BassQueue const& queue) {
        this->queue.push_back(queue);
    }

    bool BassSampleManager::InitialiseChannel(uint32_t channel, uint32_t sample) {
        if (channel == 0)
            return false;

        if (GetChannelUsedFlag(channel) && streams[channel].sampleId == sample)
            return true;

        if (samples[sample].isStream) {
            streams[channel].handle = samples[sample].handle;
        }
        else {

            BASS_SAMPLE sampleInfo = {};
            BASS_SampleGetInfo(samples[sample].handle, &sampleInfo);

            streams[channel].handle = BASS_SampleGetChannel(samples[sample].handle, false);

            if (streams[channel].handle == 0) {
                DWORD err = BASS_ErrorGetCode();
                std::cout << "BassSampleManager error code " << err << std::endl;
            }
        }
        
        streams[channel].channelId = channel;
        streams[channel].sampleId = sample;

        streams[channel].owner = this;
        return true;
    }

    void BassSampleManager::StartChannel(uint32_t channel) {
        if (settings.stop() || !settings.playPause())
            return;

        BASS_ChannelPlay(streams[channel].handle, FALSE);
    }

    void BassSampleManager::PauseChannel(uint32_t channel) {
        if (channel == 0)
            return;

        BASS_ChannelPause(streams[channel].handle);
    }

    void BassSampleManager::StopChannel(uint32_t channel) {
        if (channel == 0)
            return;

        BASS_ChannelStop(streams[channel].handle);
    }

    void BassSampleManager::ResetChannel(uint32_t channel) {
        if (channel == 0)
            return;

        BASS_ChannelSetPosition(streams[channel].handle, 0, BASS_POS_BYTE);
    }

    uint32_t BassSampleManager::GetSampleLoopStartOffset(uint32_t sample) {
        return samples[sample].loopStart;
    }

    int32_t BassSampleManager::GetSampleLoopEndOffset(uint32_t sample) {
        return samples[sample].loopEnd;
    }

    void BassSampleManager::ClearQueue() {
        queue = {};
    }


    void BassSampleManager::Process() {
#ifndef GTA2
        auto pos = TheCamera.GetPosition();
        auto forward = TheCamera.GetForward();
        auto up = TheCamera.GetUp();

        listener.pos = { pos.x, pos.y, pos.z };
        listener.forward = { forward.x, forward.y, forward.z };
        listener.up = { up.x, up.y, up.z };
#endif

        for (auto& it : streams) {
            if (it.channelId == 0)
                continue;
#ifdef GTA2
            void* wnd = GetHWnd();
#elif RW
            void* wnd = RsGlobal.ps->window;
#elif RAGE
            void* wnd = GetHWnd<void*>();
#endif

            if (!IsIconic((HWND)wnd) && !settings.mute())
                BASS_ChannelSetAttribute(it.handle, BASS_ATTRIB_VOL, (it.volume / 127.0f) * (settings.masterVolume() / 127.0f));
            else
                BASS_ChannelSetAttribute(it.handle, BASS_ATTRIB_VOL, 0.0f);

            auto a = BASS_ChannelIsActive(it.handle);
            if (settings.playPause() && a == BASS_ACTIVE_PAUSED) {
                StartChannel(it.channelId);
            }
            else if (!settings.playPause() && a == BASS_ACTIVE_PLAYING) {
                PauseChannel(it.channelId);
            }

            if (settings.stop()) {
                StopChannel(it.channelId);
            }

            if (!GetChannelUsedFlag(it.channelId) && settings.playPause()) {
                it = BassStream();
                continue;
            }

            if (it.framesToPlay <= 0.0f) {
                StopChannel(it.channelId);
                it = BassStream();
            }
            else
                it.framesToPlay -= plugin::GetTimeStepFix();
        }

        if (settings.stop() || !settings.playPause())
            return;

        for (auto&& it = queue.begin(); it != queue.end(); it++) {
            if (!it->played) {
                if (it->loopCount != 0) {
                    uint32_t freq = it->freq;
                    if (freq == 0)
                        freq = GetSampleBaseFrequency(it->sample);

                    uint32_t samplesPerFrame = freq / 50;
                    if (samplesPerFrame == 0)
                        continue;

                    it->framesToPlay = (it->loopCount * GetSampleLength(it->sample)) / samplesPerFrame + 1.0f;
                }

                auto a = std::find_if(streams.begin(), streams.end(), [&](const BassStream& item) {
                    return item.channelId != 0 && item.sampleId == it->sample;
                });
                
                uint32_t channel = 0;

                if (a != streams.end()) {
                    channel = a->channelId;
                    it->played = true;
                }
                else
                    channel = FindAvailableChannel();

                if (InitialiseChannel(channel, it->sample)) {
                    SetChannelEmittingVolume(channel, it->volume);
                    SetChannelFrequency(channel, it->freq);
                    SetChannelLoopCount(channel, it->loopCount);
                    SetChannelLoopPoints(channel, it->loopStart, it->loopEnd);
                    SetChannelFramesToPlay(channel, it->framesToPlay);

                    SetChannel3D(channel, it->is3d);
                    SetChannel3DDistances(channel, 10.0f, 100.0f);
                    if (it->is3d) {
                        SetChannelReverbFlag(channel, it->reverb);
                        SetChannel3DPosition(channel, it->pos.x, it->pos.y, it->pos.z);
                    }
                    else {
                        SetChannel2DPositions(channel);
                    }

                    StartChannel(channel);

                    it->played = true;
                }
            }
        }
        queue.clear();
    }

    uint32_t BassSampleManager::FindAvailableChannel() {
        for (uint32_t i = 1; i < numChannels; i++) {
            if (!GetChannelUsedFlag(i)) {
                return i;
            }
        }
        return 0;
    }

    void BassSampleManager::SetChannelReverbFlag(uint32_t channel, bool reverb) {
        ;;
    }

    void BassSampleManager::StopAllChannels() {
        for (uint32_t i = 0; i < numChannels; i++)
            StopChannel(i);
    }
}
#endif
