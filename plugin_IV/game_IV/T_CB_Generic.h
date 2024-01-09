/*
    Plugin-SDK (Grand Theft Auto IV) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once
#include "PluginBase.h"
#include "Rage.h"
#include "CBaseDC.h"

class T_CB_Generic_NoArgs : public CBaseDC {
public:
    void (*cb)();

public:
    T_CB_Generic_NoArgs(void (*c)());

    virtual void Execute() override;
};

template<typename T>
class T_CB_Generic_1Arg : public CBaseDC {
public:
    void (*cb)(T);
    T arg;

public:
    T_CB_Generic_1Arg(void (*c)(T), T a) : CBaseDC() {
        this->cb = c;
        this->arg = a;
    }

    void Execute() override {
        this->cb(this->arg);
    }

    int32_t GetSize() override {
        return sizeof(T_CB_Generic_1Arg);
    }
};

template<typename T1, typename T2>
class T_CB_Generic_2Args : public CBaseDC {
public:
    void (*cb)(T1, T2);
    T1 arg1;
    T2 arg2;

public:
    T_CB_Generic_2Args(void (*c)(T1, T2), T1 a1, T2 a2) : CBaseDC() {
        this->cb = c;
        this->arg1 = a1;
        this->arg2 = a2;
    }

    void Execute() override {
        this->cb(this->arg1, this->arg2);
    }

    int32_t GetSize() override {
        return sizeof(T_CB_Generic_2Args);
    }
};

template<typename T1, typename T2, typename T3>
class T_CB_Generic_3Args : public CBaseDC {
public:
    void (*cb)(T1, T2, T3);
    T1 arg1;
    T2 arg2;
    T3 arg3;

public:
    T_CB_Generic_3Args(void (*c)(T1, T2, T3), T1 a1, T2 a2, T3 a3) : CBaseDC() {
        this->cb = c;
        this->arg1 = a1;
        this->arg2 = a2;
        this->arg3 = a3;
    }

    void Execute() override {
        this->cb(this->arg1, this->arg2, this->arg3);
    }

    int32_t GetSize() override {
        return sizeof(T_CB_Generic_3Args);
    }
};

template<typename T1, typename T2, typename T3, typename T4>
class T_CB_Generic_4Args : public CBaseDC {
public:
    void (*cb)(T1, T2, T3, T4);
    T1 arg1;
    T2 arg2;
    T3 arg3;
    T4 arg4;

public:
    T_CB_Generic_4Args(void (*c)(T1, T2, T3, T4), T1 a1, T2 a2, T3 a3, T4 a4) : CBaseDC() {
        this->cb = c;
        this->arg1 = a1;
        this->arg2 = a2;
        this->arg3 = a3;
        this->arg4 = a4;
    }

    void Execute() override {
        this->cb(this->arg1, this->arg2, this->arg3, this->arg4);
    }

    int32_t GetSize() override {
        return sizeof(T_CB_Generic_4Args);
    }
};

template<typename T1, typename T2, typename T3, typename T4, typename T5>
class T_CB_Generic_5Args : public CBaseDC {
public:
    void (*cb)(T1, T2, T3, T4, T5);
    T1 arg1;
    T2 arg2;
    T3 arg3;
    T4 arg4;
    T5 arg5;

public:
    T_CB_Generic_5Args(void (*c)(T1, T2, T3, T4, T5), T1 a1, T2 a2, T3 a3, T4 a4, T5 a5) : CBaseDC() {
        this->cb = c;
        this->arg1 = a1;
        this->arg2 = a2;
        this->arg3 = a3;
        this->arg4 = a4;
        this->arg5 = a5;
    }

    void Execute() override {
        this->cb(this->arg1, this->arg2, this->arg3, this->arg4, this->arg5);
    }

    int32_t GetSize() override {
        return sizeof(T_CB_Generic_5Args);
    }
};

template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
class T_CB_Generic_6Args : public CBaseDC {
public:
    void (*cb)(T1, T2, T3, T4, T5, T6);
    T1 arg1;
    T2 arg2;
    T3 arg3;
    T4 arg4;
    T5 arg5;
    T6 arg6;

public:
    T_CB_Generic_6Args(void (*c)(T1, T2, T3, T4, T5, T6), T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6) : CBaseDC() {
        this->cb = c;
        this->arg1 = a1;
        this->arg2 = a2;
        this->arg3 = a3;
        this->arg4 = a4;
        this->arg5 = a5;
        this->arg6 = a6;
    }

    void Execute() override {
        this->cb(this->arg1, this->arg2, this->arg3, this->arg4, this->arg5, this->arg6);
    }

    int32_t GetSize() override {
        return sizeof(T_CB_Generic_6Args);
    }
};
