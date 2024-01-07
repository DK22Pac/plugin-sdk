/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "sysArray.h"
#include "Vector3.h"
#include "Vector4.h"

namespace rage {
    enum scrThreadId : int32_t {
        THREAD_INVALID = 0x0,
    };

    enum scrProgramId : uint32_t {
        srcpidNONE = 0x0,
    };

    union scrValue {
        int Int;
        float Float;
        bool Bool;
        void* Reference;
        const char* String;
    };

    class scrThread {
    public:
        enum State {
            RUNNING,
            BLOCKED,
            ABORTED,
            HALTED
        };

        struct Serialized {
            scrThreadId m_ThreadId;
            scrProgramId m_Prog;
            State m_State;
            int m_PC;
            int m_FP;
            int m_SP;
            float m_TimerA;
            float m_TimerB;
            float m_Wait;
            int m_MinPC;
            int m_MaxPC;
            uint8_t pad[42];
        };

        struct Info {
            scrValue* ResultPtr;
            int32_t ParamCount;
            scrValue* Params;
            int32_t BufferCount;
            Vector3* Orig[4];
            Vector4 Buffer[4];

            Info() = default;
            Info(scrValue* resultPtr, int32_t parameterCount, scrValue* params) :
                ResultPtr(resultPtr), ParamCount(parameterCount), Params(params),
                BufferCount(0) {
            }
        };

        struct InfoWithBuf : Info {
            uint8_t Buf[64] = {};

            inline InfoWithBuf() {
                Params = (rage::scrValue*)&Buf;
                ResultPtr = (rage::scrValue*)&Buf;
                ParamCount = 0;
                BufferCount = 0;
            }

            template <typename T>
            void Fill(T value) {
                *reinterpret_cast<T*>(Buf + 4 * ParamCount) = value;
                ParamCount++;
            }
        };

        Serialized m_Serialized;
        int32_t* m_Stack;
        int32_t* m_iInstructionCount;
        int32_t* m_argStructSize;
        int32_t* m_argStructOffset;
        const char* m_AbortReason;
        uint8_t field_150[37];
        bool m_bSafeForNetworkGame;
        uint8_t field_151[3];
        bool m_bMiniGameScript;

    public:
        static sysArray<scrThread*>& sm_Threads;

    public:
        virtual ~scrThread() { plugin::CallVirtualMethod<0>(this, 0); }
        void Reset(scrProgramId program, const void* argStruct, int argStructSize) { plugin::CallVirtualMethod<1>(this, program, argStruct, argStructSize); }
        State Run(int insnCount) { return plugin::CallVirtualMethodAndReturn<State, 2>(this, insnCount); }
        State Update(int insnCount) { return plugin::CallVirtualMethodAndReturn<State, 3>(this, insnCount); }
        void Kill() { plugin::CallVirtualMethod<4>(this); }

    public:
        static scrThread* GetActiveThread();
        static scrThread* GetThread(scrThreadId id);
        static void RegisterCommand(uint32_t hashCode, void (*handler)());
    };

    typedef void (*scrCmd)(scrThread::Info*);

    extern scrCmd scr_resolver(uint32_t hash);

    extern scrThread*& s_CurrentThread;
}
