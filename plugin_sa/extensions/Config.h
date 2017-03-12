/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include "game_sa\CVector.h"
#include "game_sa\CVector2D.h"
#include "game_sa\CRect.h"
#include "game_sa\CRGBA.h"

namespace plugin {

    class config_helper {
        friend class config_parameter;
    protected:
        template <typename T> static bool config_extract_one_value(std::istringstream &iss, T &value) {
            iss >> value;
            return !iss.fail();
        }

        template <typename T> static bool config_extract_one_value(std::string const &strinput, T &value) {
            std::istringstream iss(strinput);
            return config_extract_one_value(iss, value);
        }

        static bool config_extract_one_value(std::string const &strinput, bool &value) {
            if (!strinput.empty()) {
                if (!strinput.compare("0") || !strinput.compare("false") || !strinput.compare("FALSE") || !strinput.compare("no") || !strinput.compare("NO"))
                    value = false;
                else
                    value = true;
                return true;
            }
            return false;
        }

        template <typename T> static int config_extract_values_array(std::string const &strinput, std::vector<T> &arr) {
            std::istringstream iss(strinput);
            T val;
            while (config_extract_one_value(iss, val))
                arr.push_back(val);
            return arr.size();
        }

        static int config_extract_values_array(std::string const &strinput, std::vector<bool> &arr) {
            std::istringstream iss(strinput);
            std::string strval;
            while (config_extract_one_value(iss, strval)) {
                bool bval;
                if (!config_extract_one_value(strval, bval))
                    break;
                arr.push_back(bval);
            }
            return arr.size();
        }
    };

    class config_parameter {
    public:
        std::string _value;
        bool _quotes;
        bool _notInitialised;

        config_parameter() {
            _notInitialised = true;
            _quotes = true;
        }

        config_parameter(std::string value, bool quotes = true) {
            _value = value;
            _notInitialised = false;
            _quotes = quotes;
        }

        bool isEmpty() {
            return _notInitialised;
        }

        float asFloat(float defaultVal) {
            float fval;
            if (_notInitialised || !config_helper::config_extract_one_value(_value, fval))
                return defaultVal;
            return fval;
        }

        float asFloat() { return asFloat(0.0f); }

        unsigned int asInt(int defaultVal) {
            int ival;
            if (_notInitialised || !config_helper::config_extract_one_value(_value, ival))
                return defaultVal;
            return ival;
        }

        unsigned int asInt() { return asInt(0); }

        std::string asString(std::string defaultVal) {
            if (_notInitialised)
                return defaultVal;
            if (_quotes)
                return _value.substr(1, _value.size() - 2);
            return _value;
        }

        std::string asString() { return asString(std::string()); }

        bool asBool(bool defaultVal) {
            bool bval;
            if (_notInitialised || !config_helper::config_extract_one_value(_value, bval))
                return defaultVal;
            return bval;
        }

        bool asBool() { return asBool(false); }

        std::vector<int> asIntArray() {
            std::vector<int> result;
            config_helper::config_extract_values_array(_value, result);
            return result;
        }

        std::vector<float> asFloatArray() {
            std::vector<float> result;
            config_helper::config_extract_values_array(_value, result);
            return result;
        }

        std::vector<bool> asBoolArray() {
            std::vector<bool> result;
            config_helper::config_extract_values_array(_value, result);
            return result;
        }

        CRect asRect(CRect defaultVal) {
            std::vector<float> valArr = asFloatArray();
            CRect rect = defaultVal;
            unsigned int arrSize = valArr.size();
            if (arrSize > 0) {
                rect.m_fLeft = valArr[0];
                if (arrSize > 1) {
                    rect.m_fTop = valArr[1];
                    if (arrSize > 2) {
                        rect.m_fRight = valArr[2];
                        if (arrSize > 3)
                            rect.m_fBottom = valArr[3];
                    }
                }
            }
            return rect;
        }

        CRect asRect() { return asRect(CRect(0.0f, 0.0f, 0.0f, 0.0f)); }

        CVector2D asVec2d(CVector2D defaultVal) {
            std::vector<float> valArr = asFloatArray();
            CVector2D vec = defaultVal;
            unsigned int arrSize = valArr.size();
            if (arrSize > 0) {
                vec.x = valArr[0];
                if (arrSize > 1)
                    vec.y = valArr[1];
            }
            return vec;
        }

        CVector2D asVec2d() { return asVec2d(CVector2D(0.0f, 0.0f)); }

        CVector asVec3d(CVector defaultVal) {
            std::vector<float> valArr = asFloatArray();
            CVector vec = defaultVal;
            unsigned int arrSize = valArr.size();
            if (arrSize > 0) {
                vec.x = valArr[0];
                if (arrSize > 1) {
                    vec.y = valArr[1];
                    if (arrSize > 2)
                        vec.z = valArr[2];
                }
            }
            return vec;
        }

        CVector asVec3d() { return asVec3d(CVector(0.0f, 0.0f, 0.0f)); }

        CRGBA asRGBA(CRGBA defaultVal) {
            std::vector<int> valArr = asIntArray();
            CRGBA rgba = defaultVal;
            unsigned int arrSize = valArr.size();
            if (arrSize > 0) {
                rgba.red = valArr[0];
                if (arrSize > 1) {
                    rgba.green = valArr[1];
                    if (arrSize > 2) {
                        rgba.blue = valArr[2];
                        if (arrSize > 3)
                            rgba.alpha = valArr[3];
                    }
                }
            }
            return rgba;
        }

        CRGBA asRGBA() { return asRGBA(CRGBA(0, 0, 0, 255)); }

        config_parameter &operator=(float n) {
            _value = std::to_string(n);
            _quotes = false;
            _notInitialised = false;
            return *this;
        }

        config_parameter &operator=(int n) {
            _value = std::to_string(n);
            _quotes = false;
            _notInitialised = false;
            return *this;
        }

        config_parameter &operator=(std::string s) {
            _value = s;
            _quotes = true;
            _notInitialised = false;
            return *this;
        }

        config_parameter &operator=(const char *s) {
            _value = '"';
            _value.append(s);
            _value.push_back('"');
            _quotes = true;
            _notInitialised = false;
            return *this;
        }

        config_parameter &operator=(bool v) {
            if (v)
                _value = "TRUE";
            else
                _value = "FALSE";
            _quotes = false;
            _notInitialised = false;
            return *this;
        }
    };

    class config_param_line : public config_parameter {
    public:
        std::string name;
        std::string comment;
        unsigned int commentOffset;

        config_param_line(std::string paramName) {
            name = paramName;
            commentOffset = 0;
        }

        config_param_line(std::string paramName, std::string value, bool useQuotes) {
            _value = value;
            _notInitialised = false;
            _quotes = useQuotes;
            name = paramName;
            commentOffset = 0;
        }
    };

    class config_file {
    public:
        std::string _path;
        std::wstring _widePath;
        bool _bWidePath;
        bool _useEqualitySign;
        bool _useAlignment;
        bool _dataRead;

        config_parameter _emptyParameter;

        std::vector<config_param_line> paramLines;
        std::vector<std::pair<unsigned int, std::string>> comments;
        std::vector<unsigned int> emptyLines;

        bool pathEmpty() {
            if (_bWidePath)
                return _widePath.empty();
            else
                return _path.empty();
        }

        void prepareData() {
            if (_dataRead || pathEmpty())
                return;
            std::ifstream in;
            if (_bWidePath)
                in.open(_widePath);
            else
                in.open(_path);
            if (in.is_open()) {
                unsigned int lineId = 0;
                for (std::string line; getline(in, line); ) {
                    if (line.empty()) {
                        emptyLines.push_back(lineId++);
                        continue;
                    }
                    bool usesQuotes = false;
                    std::string name;
                    std::string value;
                    std::string comment;
                    unsigned int commentOffset = 0;

                    bool scanBeforeName = true;
                    bool scanName = false;
                    bool scanAfterName = false;
                    bool scanValue = false;
                    bool scanAfterValue = false;
                    bool isCommentLine = false;

                    for (unsigned int i = 0; i < line.size(); i++) {
                        if (scanBeforeName) {
                            if (line[i] == '#' || line[i] == ';') {
                                isCommentLine = true;
                                break;
                            }
                            if (line[i] == '=') {
                                // incorrect line
                                continue;
                            }
                            if (line[i] != ' ' && line[i] != '\t') {
                                name.push_back(line[i]);
                                scanBeforeName = false;
                                scanName = true;
                            }
                        }
                        else if (scanName) {
                            if (line[i] == '#' || line[i] == ';') {
                                commentOffset = i;
                                comment = line.substr(i);
                                break;
                            }
                            if (line[i] == ' ' || line[i] == '\t' || line[i] == '=') {
                                scanName = false;
                                scanAfterName = true;
                            }
                            else
                                name.push_back(line[i]);
                        }
                        else if (scanAfterName) {
                            if (line[i] == '#' || line[i] == ';') {
                                commentOffset = i;
                                comment = line.substr(i);
                                break;
                            }
                            if (line[i] == '=') {
                                _useEqualitySign = true;
                                continue;
                            }
                            else if (line[i] != ' ' && line[i] != '\t') {
                                scanAfterName = false;
                                scanValue = true;
                                value.push_back(line[i]);
                            }
                        }
                        else if (scanValue) {
                            if (line[i] == '#' || line[i] == ';') {
                                commentOffset = i;
                                comment = line.substr(i);
                                break;
                            }
                            value.push_back(line[i]);
                        }
                    }

                    if (isCommentLine) {
                        comments.push_back(std::make_pair(lineId, line));
                        continue;
                    }

                    if (value.size() > 0) {
                        size_t l = value.find_last_not_of(" \t");
                        if (l != std::string::npos) {
                            value = value.substr(0, l + 1);
                            size_t valSize = value.size();
                            if (valSize > 1 && value[0] == '"' && value[valSize - 1] == '"')
                                usesQuotes = true;
                        }
                        else
                            value.clear();
                    }

                    paramLines.emplace_back(name, value, usesQuotes);
                    config_param_line &param = paramLines.back();
                    param.comment = comment;
                    param.commentOffset = commentOffset;

                    //printf("%s \"%s\"\n", param.name.c_str(), param._value.c_str());

                    lineId++;
                }
            }
            _dataRead = true;
        }

        void writeData() {
            if (pathEmpty())
                return;
            std::ofstream out;
            if (_bWidePath)
                out.open(_widePath);
            else
                out.open(_path);
            if (out.is_open()) {
                unsigned int maxStrLen = 0;
                for (config_param_line &param : paramLines) {
                    if (!param.isEmpty() && !param.name.empty()) {
                        unsigned int strSz = param.name.size();
                        if (strSz > maxStrLen)
                            maxStrLen = strSz;
                    }
                }
                unsigned int numCommentsLeft = comments.size();
                for (config_param_line &param : paramLines) {
                    if (!param.isEmpty() && !param.name.empty()) {
                        out << param.name;
                        unsigned int numSpaces = maxStrLen - param.name.size() + 1;
                        for (unsigned int i = 0; i < numSpaces; i++)
                            out << ' ';
                        if (_useEqualitySign)
                            out << "= ";
                        out << param._value;
                        out << '\n';
                    }
                }
            }
        }
    public:
        config_file() {
            _bWidePath = false;
            _dataRead = false;
            _useAlignment = true;
            _useEqualitySign = false;
        }

        void open(std::string fileName) {
            _path = fileName;
            _bWidePath = false;
            prepareData();
        }

        void open(std::wstring fileName) {
            _widePath = fileName;
            _bWidePath = true;
            prepareData();
        }

        void open(std::string fileName, bool readOnly, bool equalitySign, bool alignment) {
            _path = fileName;
            _bWidePath = false;
            prepareData();
        }

        void open(std::wstring fileName, bool readOnly, bool equalitySign, bool alignment) {
            _widePath = fileName;
            _bWidePath = true;
            prepareData();
        }

        config_file(std::string fileName) {
            _dataRead = false;
            _useAlignment = true;
            _useEqualitySign = false;
            open(fileName);
        }

        config_file(std::wstring fileName) {
            _dataRead = false;
            _useAlignment = true;
            _useEqualitySign = false;
            open(fileName);
        }

        void save() {
            if (_dataRead)
                writeData();
        }

        config_parameter &operator[](std::string name) {
            for (config_param_line &param : paramLines) {
                if (!param.name.compare(name))
                    return param;
            }
            paramLines.emplace_back(name);
            return paramLines.back();
        }

        void setUseEqualitySign(bool enable) {
            _useEqualitySign = enable;
        }

        void setUseAlignment(bool enable) {
            _useAlignment = enable;
        }
    };
}