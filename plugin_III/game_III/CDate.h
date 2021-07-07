/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CDate {
    PLUGIN_NO_DEFAULT_CONSTRUCTION(CDate)

public:
    unsigned int m_nSecond;
    unsigned int m_nMinute;
    unsigned int m_nHour;
    unsigned int m_nDay;
    unsigned int m_nMonth;
    unsigned int m_nYear;

    inline bool operator>(const CDate &right) {
        if (this->m_nYear > right.m_nYear)
            return true;
        if (this->m_nYear != right.m_nYear)
            return false;

        if (this->m_nMonth > right.m_nMonth)
            return true;
        if (this->m_nMonth != right.m_nMonth)
            return false;

        if (this->m_nDay > right.m_nDay)
            return true;
        if (this->m_nDay != right.m_nDay)
            return false;

        if (this->m_nHour > right.m_nHour)
            return true;
        if (this->m_nHour != right.m_nHour)
            return false;

        if (this->m_nMinute > right.m_nMinute)
            return true;
        if (this->m_nMinute != right.m_nMinute)
            return false;
        return this->m_nSecond > right.m_nSecond;
    }

    inline bool operator<(const CDate &right) {
        if (this->m_nYear < right.m_nYear)
            return true;
        if (this->m_nYear != right.m_nYear)
            return false;

        if (this->m_nMonth < right.m_nMonth)
            return true;
        if (this->m_nMonth != right.m_nMonth)
            return false;

        if (this->m_nDay < right.m_nDay)
            return true;
        if (this->m_nDay != right.m_nDay)
            return false;

        if (this->m_nHour < right.m_nHour)
            return true;
        if (this->m_nHour != right.m_nHour)
            return false;

        if (this->m_nMinute < right.m_nMinute)
            return true;
        if (this->m_nMinute != right.m_nMinute)
            return false;
        return this->m_nSecond < right.m_nSecond;
    }

    inline bool  operator==(const CDate &right) {
        if (this->m_nYear != right.m_nYear || this->m_nMonth != right.m_nMonth || this->m_nDay != right.m_nDay || this->m_nHour != right.m_nHour || this->m_nMinute != right.m_nMinute)
            return false;
        return this->m_nSecond == right.m_nSecond;
    }

    inline void PopulateDateFields(char &second, char &minute, char &hour, char &day, char &month, short year) {
        this->m_nSecond = second;
        this->m_nMinute = minute;
        this->m_nHour = hour;
        this->m_nDay = day;
        this->m_nMonth = month;
        this->m_nYear = year;
    }
};

VALIDATE_SIZE(CDate, 0x18);

#include "meta/meta.CDate.h"
