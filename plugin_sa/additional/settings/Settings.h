#pragma once
#include <Windows.h>
#include <string>
#include <vector>

struct param_str_ptr {
    wchar_t *pData;

    param_str_ptr() {
        pData = NULL;
    }

    void set_data(const wchar_t *String) {
        if (pData) {
            delete[] pData;
            pData = NULL;
        }
        if (String) {
            pData = new wchar_t[wcslen(String) + 1];
            wcscpy(pData, String);
        }
    }

    param_str_ptr(const wchar_t *String) {
        set_data(String);
    }

    ~param_str_ptr() {
        if(pData)
            delete[] pData;
    }
};

#define SECTION(a)
#define VERSION(a)

#define DELETED_PARAMETER(a) UINT : 32
#define PARAMETER_FLOAT(a) FLOAT
#define PARAMETER_INT(a) INT
#define PARAMETER_UINT(a) UINT
#define PARAMETER_BOOL(a) UINT
#define PARAMETER_STRING(a) param_str_ptr

struct settings {
    bool initialised = false;

    bool read(wchar_t *filepath) {
        
        initialised = true;
        return true;
    }

    bool write(wchar_t *filepath) {
        if (!initialised)
            return false;
    }
protected:
    settings(){}

private:
    bool read_one_param() {
        unsigned int paramIndex = 0;
        param_str_ptr* pMember = (param_str_ptr *)((unsigned int)this + paramIndex * 4);
        FLOAT* pMember = (FLOAT *)((unsigned int)this + paramIndex * 4);
    }
};

struct mySettings : public settings {
    VERSION("3.0.0")

    PARAMETER_FLOAT(0)  fDistance = 1.0f;
    PARAMETER_INT(1)    iCounter = 99;
    PARAMETER_STRING(2) sName = L"Text example";
};