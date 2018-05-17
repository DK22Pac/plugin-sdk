/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CGeneral {
public:
    //! Returns the arctangent for specified X and Y coords
    //! @param x X coord
    //! @param y Y coord
    //! @return arctangent value
    SUPPORTED_10EN_11EN_STEAM static float GetATanOfXY(float x, float y);
    //! Returns the angle between two vectors (in degrees)
    //! @param x1 first vector - X
    //! @param y1 first vector - Y
    //! @param x2 second vector - X
    //! @param y2 second vector - Y
    //! @return angle in degrees
    SUPPORTED_10EN_11EN_STEAM static float GetAngleBetweenPoints(float x1, float y1, float x2, float y2);
    //! Gets vector direction
    //! @param x vector X coord
    //! @param y vector Y coord
    //! @return an integer representing vector direction (1-9)
    SUPPORTED_10EN_11EN_STEAM static int GetNodeHeadingFromVector(float x, float y);
    //! Returns the angle between two vectors (in radians)
    //! @param x1 first vector - X
    //! @param y1 first vector - Y
    //! @param x2 second vector - X
    //! @param y2 second vector - Y
    //! @return angle in radians
    SUPPORTED_10EN_11EN_STEAM static float GetRadianAngleBetweenPoints(float x1, float y1, float x2, float y2);
    //! Normalises angle in degrees
    //! @param angle angle in degrees
    //! @return normalised angle (in degrees)
    SUPPORTED_10EN_11EN_STEAM static float LimitAngle(float angle);
    //! Normalises angle in radians
    //! @param angle angle in radians
    //! @return normalised angle (in radians)
    SUPPORTED_10EN_11EN_STEAM static float LimitRadianAngle(float angle);
};

#include "meta/meta.CGeneral.h"
