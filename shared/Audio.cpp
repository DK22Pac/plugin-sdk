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
    void BassSampleManager::LoadSample(std::string const& file, uint32_t loopStart, int32_t loopEnd) {
        BassSample s;
        s.sample = BASS_SampleLoad(FALSE, file.c_str(), 0, 0, 3, 0);
        s.loopStart = loopStart;
        s.loopEnd = loopEnd;
        samples.push_back(s);
    }

    void BassSampleManager::ClearSamples() {
        for (auto& it : samples) {
            BASS_SampleFree(it.sample);
        }
        samples = {};
    }

    void BassSampleManager::SetChannelFrequency(uint32_t channel, int32_t freq) {
        if (channel == 0)
            return;

        BASS_ChannelSetAttribute(streams[channel].stream, BASS_ATTRIB_FREQ, (float)freq);
    }

    void BassSampleManager::SetChannel3DDistances(uint32_t channel, float min, float max) {
        if (channel == 0)
            return;

        BASS_ChannelSet3DAttributes(streams[channel].stream, BASS_3DMODE_NORMAL, min, max, 360, 360, 0.0f);
        BASS_Apply3D();
    }

    void BassSampleManager::SetChannel3DPosition(uint32_t channel, float x, float y, float z) {
        if (channel == 0)
            return;

        BASS_3DVECTOR pos = { x, y, z };
        BASS_ChannelSet3DPosition(streams[channel].stream, &pos, NULL, NULL);
        BASS_Set3DFactors(1.0f, 1.0f, 1.0f);
        BASS_Apply3D();
    }

    void BassSampleManager::SetChannel2DPositions(uint32_t channel) {
        SetChannel3DDistances(channel, 10.0f, 1000.0f);
        SetChannel3DPosition(channel, listener.pos.x, listener.pos.y, listener.pos.z);
    }

    void BassSampleManager::SetChannelEmittingVolume(uint32_t channel, int32_t value) {
        if (channel == 0)
            return;

        if (value > 127)
            value = 127;

        BASS_ChannelSetAttribute(streams[channel].stream, BASS_ATTRIB_VOL, (value / 127.0f) * (settings.masterVolume() / 127.0f));
        streams[channel].volume = value;
    }

    bool BassSampleManager::GetChannelUsedFlag(uint32_t channel) {
        if (channel == 0)
            return false;

        return BASS_ChannelIsActive(streams[channel].stream) == BASS_ACTIVE_PLAYING;
    }

    void BassSampleManager::SetChannelLoopCount(uint32_t channel, uint32_t count) {
        if (channel == 0)
            return;

        if (count == 0) {
            BASS_ChannelFlags(streams[channel].stream, BASS_SAMPLE_LOOP, BASS_SAMPLE_LOOP);
        }
        else {
            BASS_ChannelFlags(streams[channel].stream, 0, BASS_SAMPLE_LOOP);
        }
    }

    uint32_t BassSampleManager::GetChannelPosition(uint32_t channel) {
        QWORD posBytes = BASS_ChannelGetPosition(streams[channel].stream, BASS_POS_BYTE);
        double posSeconds = BASS_ChannelBytes2Seconds(streams[channel].stream, posBytes);
        return static_cast<uint32_t>(posSeconds * GetSampleBaseFrequency(streams[channel].sampleId));
    }

    void BassSampleManager::SetChannelPosition(uint32_t channel, uint32_t pos) {
        double posSeconds = (double)pos / GetSampleBaseFrequency(streams[channel].sampleId);
        QWORD posBytes = BASS_ChannelSeconds2Bytes(streams[channel].stream, posSeconds);
        if (!BASS_ChannelSetPosition(streams[channel].stream, posBytes, BASS_POS_BYTE)) {
        }
    }

    void BassSampleManager::SetChannelLoopPoints(uint32_t channel, uint32_t loopStart, int32_t loopEnd) {
        if (channel == 0)
            return;

        double loopStartSeconds = (double)loopStart / GetSampleBaseFrequency(streams[channel].sampleId);
        QWORD loopStartBytes = BASS_ChannelSeconds2Bytes(streams[channel].stream, loopStartSeconds);
        double loopEndSeconds = (double)loopEnd / GetSampleBaseFrequency(streams[channel].sampleId);
        QWORD loopEndBytes = BASS_ChannelSeconds2Bytes(streams[channel].stream, loopEndSeconds);
        BASS_ChannelSetSync(streams[channel].stream, BASS_SYNC_POS | BASS_SYNC_MIXTIME, loopEndBytes, [](HSYNC handle, DWORD channel, DWORD data, void* user) {
            BASS_ChannelSetPosition(channel, *(QWORD*)user, BASS_POS_BYTE);
        }, &loopStartBytes);
    }

    uint32_t BassSampleManager::GetSampleLength(uint32_t sample) {
        auto lengthBytes = BASS_ChannelGetLength(samples[sample].sample, BASS_POS_BYTE);
        double lengthSeconds = BASS_ChannelBytes2Seconds(samples[sample].sample, lengthBytes);
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

    void BassSampleManager::SetChannelEntityIndex(uint32_t channel, uint32_t entityIndex) {
        streams[channel].entityIndex = entityIndex;
    }

    uint32_t BassSampleManager::GetSampleBaseFrequency(uint32_t sample) {
        BASS_SAMPLE info;
        BASS_SampleGetInfo(samples[sample].sample, &info);
        return static_cast<uint32_t>(info.freq);
    }

    void BassSampleManager::AddSampleToQueue(uint32_t entityIndex, uint8_t vol, uint32_t freq, uint32_t sample, bool loop, CVector const& pos, uint32_t framesToPlay, bool is3d) {
        if (vol > 127)
            vol = 127;

        BassQueue q;
        q.entityIndex = entityIndex;
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
    }

    void BassSampleManager::AddSampleToQueue(BassQueue const& queue) {
        this->queue.push_back(queue);
    }

    bool BassSampleManager::InitialiseChannel(uint32_t channel, uint32_t sample) {
        if (channel == 0)
            return false;

        if (GetChannelUsedFlag(channel) && streams[channel].sampleId == sample)
            return true;

        BASS_SAMPLE sampleInfo = {};
        BASS_SampleGetInfo(samples[sample].sample, &sampleInfo);

        void* buffer = malloc(sampleInfo.length);
        if (!BASS_SampleGetData(samples[sample].sample, buffer)) {
            free(buffer);
            return false;
        }

        //BASS_ChannelRemoveFX(streams[channel].fx.reverb, BASS_FX_DX8_REVERB);
        BASS_StreamFree(streams[channel].stream);
        DWORD flags = sampleInfo.flags;
        if (sampleInfo.chans == 1)
            flags |= BASS_SAMPLE_3D;

        streams[channel].stream = BASS_StreamCreate(sampleInfo.freq, sampleInfo.chans, flags, STREAMPROC_PUSH, nullptr);
        streams[channel].channelId = channel;
        streams[channel].sampleId = sample;

        BASS_StreamPutData(streams[channel].stream, buffer, sampleInfo.length);
        free(buffer);

        return true;
    }

    void BassSampleManager::StartChannel(uint32_t channel) {
        if (settings.stop() || !settings.playPause())
            return;

        if (!GetChannelUsedFlag(channel))
            BASS_ChannelPlay(streams[channel].stream, FALSE);
    }

    void BassSampleManager::PauseChannel(uint32_t channel) {
        if (channel == 0)
            return;

        BASS_ChannelPause(streams[channel].stream);
    }

    void BassSampleManager::StopChannel(uint32_t channel) {
        if (channel == 0)
            return;

        //BASS_SampleStop(streams[channel].sample);
        BASS_ChannelStop(streams[channel].stream);
    }

    void BassSampleManager::ResetChannel(uint32_t channel) {
        if (channel == 0)
            return;

        BASS_ChannelSetPosition(streams[channel].stream, 0, BASS_POS_BYTE);
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
        BASS_3DVECTOR* position = (BASS_3DVECTOR*)&TheCamera.GetPosition();
        BASS_3DVECTOR* front = (BASS_3DVECTOR*)&TheCamera.GetForward();
        BASS_3DVECTOR* up = (BASS_3DVECTOR*)&TheCamera.GetUp();
        BASS_Set3DPosition(position, nullptr, front, up);
        listener.pos = *position;
        listener.forward = *front;
        listener.up = *up;
#endif

        for (auto& it : streams) {
#ifdef GTA2
            void* wnd = GetHWnd();
#elif RW
            void* wnd = RsGlobal.ps->window;
#elif RAGE
            void* wnd = GetHWnd<void*>();
#endif

            if (!IsIconic((HWND)wnd) && !settings.mute())
                BASS_ChannelSetAttribute(it.stream, BASS_ATTRIB_VOL, (it.volume / 127.0f) * (settings.masterVolume() / 127.0f));
            else
                BASS_ChannelSetAttribute(it.stream, BASS_ATTRIB_VOL, 0.0f);

            auto a = BASS_ChannelIsActive(it.stream);
            if (settings.playPause() && a == BASS_ACTIVE_PAUSED) {
                StartChannel(it.channelId);
            }
            else if (!settings.playPause() && a == BASS_ACTIVE_PLAYING) {
                PauseChannel(it.channelId);
            }

            if (settings.stop()) {
                StopChannel(it.channelId);
            }

            if (!GetChannelUsedFlag(it.channelId)) {
                it = BassStream();
                continue;
            }

            if (BASS_ChannelFlags(it.stream, 0, 0) & BASS_SAMPLE_LOOP) {
                uint32_t currentPos = GetChannelPosition(it.channelId);
                uint32_t sampleStartOffset = GetSampleLoopStartOffset(it.sampleId);
                int32_t sampleEndOffset = GetSampleLoopEndOffset(it.sampleId);

                float frequency;
                BASS_ChannelGetAttribute(it.stream, BASS_ATTRIB_FREQ, &frequency);
                uint32_t endPos = GetSampleLength(it.sampleId);

                if (sampleEndOffset != -1)
                    endPos = sampleEndOffset;

                auto m = static_cast<uint32_t>(0.10f * frequency);
                endPos -= m;

                if (endPos < currentPos)
                    endPos = currentPos;

                if (currentPos >= endPos) {
                    SetChannelPosition(it.channelId, sampleStartOffset);
                }
            }
        }

        if (settings.stop() || !settings.playPause())
            return;

        for (auto&& it = queue.begin(); it != queue.end(); it++) {
            if (!it->played) {
                auto a = std::find_if(streams.begin(), streams.end(), [&](const BassStream& item) {
                    return item.entityIndex != -1 && item.entityIndex == it->entityIndex;
                });

                if (it->loopCount != 0) {
                    uint32_t freq = it->freq;
                    if (freq == 0)
                        freq = GetSampleBaseFrequency(it->sample);
                    it->framesToPlay = (it->loopCount * GetSampleLength(it->sample)) / (freq / 50.0f) + 1;
                }

                it->framesToPlay -= plugin::GetTimeStepFix();
                if (it->framesToPlay < 0.0f) {
                    it->played = true;
                    continue;
                }

                uint32_t channel = 0;
                if (a != streams.end()) { 
                    channel = a->channelId;
                }
                else
                    channel = FindAvailableChannel();

                if (InitialiseChannel(channel, it->sample)) {
                    SetChannelEntityIndex(channel, it->entityIndex);
                    SetChannelEmittingVolume(channel, it->volume);
                    SetChannelFrequency(channel, it->freq);
                    SetChannelLoopCount(channel, it->loopCount);
                    SetChannelLoopPoints(channel, it->loopStart, it->loopEnd);

                    SetChannelFramesToPlay(channel, it->framesToPlay);

                    SetChannel3D(channel, it->is3d);
                    if (it->is3d) {
                        SetChannelReverbFlag(channel, it->reverb);
                        SetChannel3DPosition(channel, it->pos.x, it->pos.y, it->pos.z);
                        SetChannel3DDistances(channel, 10.0f, 1000.0f);
                    }
                    else {
                        SetChannel2DPositions(channel);
                    }

                    StartChannel(channel);
                    it->played = true;
                }
            }
        }

        queue.erase(std::remove_if(queue.begin(), queue.end(), [](const BassQueue& item) {
            return item.played;
        }), queue.end());
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
       //if (reverb) {
       //    streams[channel].fx.reverb = BASS_ChannelSetFX(streams[channel].stream, BASS_FX_DX8_REVERB, 1);
       //
       //    BASS_DX8_REVERB reverbParams;
       //    reverbParams.fInGain = -1.0f;
       //    reverbParams.fReverbMix = -6.0f;
       //    reverbParams.fReverbTime = 1000.0f;
       //    reverbParams.fHighFreqRTRatio = 0.001f;
       //    BASS_FXSetParameters(streams[channel].fx.reverb, &reverbParams);
       //}
       //else
       //    BASS_ChannelRemoveFX(streams[channel].fx.reverb, BASS_FX_DX8_REVERB);
    }

    void BassSampleManager::StopAllChannels() {
        for (uint32_t i = 0; i < numChannels; i++)
            StopChannel(i);
    }
}
#endif
