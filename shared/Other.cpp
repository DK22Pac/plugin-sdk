/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "Other.h"
#include <fstream>
#include <ctime>

#if _HAS_CXX17
#include <filesystem>
#endif

#define STB_IMAGE_IMPLEMENTATION
#include "..\stb\stb_image.h"

#include "Image.h"

unsigned int plugin::FormattingUtils::currentBuf = 0;
char plugin::FormattingUtils::buf[plugin::FormattingUtils::BUF_SIZE][4096];
unsigned int plugin::FormattingUtils::currentBufW = 0;
wchar_t plugin::FormattingUtils::bufW[plugin::FormattingUtils::BUF_SIZE][4096];

bool plugin::KeyPressed(unsigned int keyCode) {
    return (GetKeyState(keyCode) & 0x8000) != 0;
}

bool plugin::IsPluginInstalled(const TCHAR *pluginName) {
    return GetModuleHandle(pluginName) ? true : false;
}

std::wstring plugin::AtoW(std::string const &str) {
	std::wstring result;
	result.resize(str.size());
	for (unsigned int i = 0; i < str.size(); i++)
		result[i] = static_cast<wchar_t>(static_cast<unsigned char>(str[i]));
	return result;
}

std::string plugin::WtoA(std::wstring const &str) {
	std::string result;
	result.resize(str.size());
	for (unsigned int i = 0; i < str.size(); i++)
		result[i] = static_cast<char>(static_cast<unsigned char>(str[i]));
	return result;
}

char *plugin::FormattingUtils::GetBuf() {
    char *result = buf[currentBuf];
    currentBuf += 1;
    if (currentBuf >= BUF_SIZE)
        currentBuf = 0;
    return result;
}

wchar_t *plugin::FormattingUtils::GetBufW() {
    wchar_t *result = bufW[currentBufW];
    currentBufW += 1;
    if (currentBufW >= BUF_SIZE)
        currentBufW = 0;
    return result;
}

bool plugin::CreateImageFromFile(std::string const& path, plugin::Image*& img) {
    int32_t w, h, c;
    uint8_t* p = stbi_load(path.c_str(), &w, &h, &c, 4);

    if (p) {
        if (!img)
            img = new plugin::Image();

        img->width = w;
        img->height = h;
        img->channels = c;
        img->pixels = p;

        return true;
    }

    return false;
}

#if _HAS_CXX17
std::vector<std::string> plugin::GetAllFilesInFolder(std::string const& path, std::string const& ext) {
    std::vector<std::string> files = {};
    try {
        for (auto& it : std::filesystem::directory_iterator(path)) {
            if (it.path().extension() == ext) {
                files.push_back(it.path().filename().string());
            }
        }
    }
    catch (const std::exception& ex) {
        std::cerr << "Error: " << ex.what() << std::endl;
    }

    return files;
}
#endif
