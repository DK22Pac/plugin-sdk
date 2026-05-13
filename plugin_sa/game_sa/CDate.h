/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CDate {
public:
    int seconds;
    int minutes;
    int hours;
    int day;
    int month;
    int year;

    SUPPORTED_10US CDate();

    SUPPORTED_10US bool operator<(CDate const &rhs);
    SUPPORTED_10US bool operator==(CDate const &rhs);
    SUPPORTED_10US bool operator>(CDate const &rhs);

    SUPPORTED_10US void PopulateDateFields(char const &seconds, char const &minutes, char const &hours, char const &day, char const &month, short year);
};
VALIDATE_OFFSET(CDate, seconds, 0x0);
VALIDATE_OFFSET(CDate, minutes, 0x4);
VALIDATE_OFFSET(CDate, hours, 0x8);
VALIDATE_OFFSET(CDate, day, 0xC);
VALIDATE_OFFSET(CDate, month, 0x10);
VALIDATE_OFFSET(CDate, year, 0x14);
VALIDATE_SIZE(CDate, 0x18);

#include "meta/meta.CDate.h"
