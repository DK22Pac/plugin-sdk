/*
    Plugin-SDK (Grand Theft Auto) SHARED header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "CVector.h"
#include "CVector2D.h"
#include "CRect.h"
#include "CRGBA.h"

namespace plugin {

    class config_helper {
        friend class config_parameter;
    protected:
        static bool config_extract_one_value(std::string const &strinput, bool &value);
        static int config_extract_values_array(std::string const &strinput, std::vector<bool> &arr);

        template <typename T> static bool config_extract_one_value(std::istringstream &iss, T &value) {
            iss >> value;
            return !iss.fail();
        }

        template <typename T> static bool config_extract_one_value(std::string const &strinput, T &value) {
            std::istringstream iss(strinput);
            return config_extract_one_value(iss, value);
        }

        template <typename T> static int config_extract_values_array(std::string const &strinput, std::vector<T> &arr) {
            std::istringstream iss(strinput);
            T val;
            while (config_extract_one_value(iss, val))
                arr.push_back(val);
            return arr.size();
        }
    };

    class config_parameter {
    public:
        std::string _value;
        bool _quotes;
        bool _notInitialised;

        config_parameter();
        config_parameter(std::string value, bool quotes = true);
        bool isEmpty();
        float asFloat(float defaultVal);
        float asFloat();
        unsigned int asInt(int defaultVal);
        unsigned int asInt();
        std::string asString(std::string defaultVal);
        std::string asString();
        bool asBool(bool defaultVal);
        bool asBool();
        std::vector<int> asIntArray();
        std::vector<float> asFloatArray();
        std::vector<bool> asBoolArray();
        CRect asRect(CRect defaultVal);
        CRect asRect();
        CVector2D asVec2d(CVector2D defaultVal);
        CVector2D asVec2d();
        CVector asVec3d(CVector defaultVal);
        CVector asVec3d();
        CRGBA asRGBA(CRGBA defaultVal);
        CRGBA asRGBA();
        config_parameter &operator=(float n);
        config_parameter &operator=(int n);
        config_parameter &operator=(std::string s);
        config_parameter &operator=(const char *s);
        config_parameter &operator=(bool v);
    };

    class config_param_line : public config_parameter {
    public:
        std::string name;
        std::string comment;
        unsigned int commentOffset;

        config_param_line(std::string paramName);
        config_param_line(std::string paramName, std::string value, bool useQuotes);
    };

    class config_file {
    public:
        std::string _path;
#ifdef _MSC_VER
        std::wstring _widePath;
        bool _bWidePath;
#endif
        bool _useEqualitySign;
        bool _useAlignment;
        bool _dataRead;

        config_parameter _emptyParameter;

        std::vector<config_param_line> paramLines;
        std::vector<std::pair<unsigned int, std::string>> comments;
        std::vector<unsigned int> emptyLines;

        bool pathEmpty();
        void prepareData();
        void writeData();
    public:
        config_file();
        void open(std::string fileName);
        void open(std::string fileName, bool readOnly, bool equalitySign, bool alignment);
        config_file(std::string fileName);
#ifdef _MSC_VER
        void open(std::wstring fileName);
        void open(std::wstring fileName, bool readOnly, bool equalitySign, bool alignment);
        config_file(std::wstring fileName);
#endif
        void save();
        config_parameter &operator[](std::string name);
        void setUseEqualitySign(bool enable);
        void setUseAlignment(bool enable);
    };
}
