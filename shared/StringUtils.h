/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

namespace StringUtils {

template<size_t S>
void atow_static(wchar_t (&wt)[S], char const *at) {
    if (S > 0) {
        size_t len = strlen(at);
        size_t i = 0;
        for (; i < len; i++) {
            if (i >= (S - 1))
                break;
            wt[i] = static_cast<wchar_t>(at[i]);
        }
        wt[i] = L'\0';
    }
}

}
