/*
    Plugin-SDK (Grand Theft Auto) SHARED source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "Other.h"
#include <Windows.h>
#include <fstream>

unsigned int plugin::FormattingUtils::currentBuf = 0;
char plugin::FormattingUtils::buf[plugin::FormattingUtils::BUF_SIZE][4096];
unsigned int plugin::FormattingUtils::currentBufW = 0;
wchar_t plugin::FormattingUtils::bufW[plugin::FormattingUtils::BUF_SIZE][4096];

void plugin::InitRandom() {
    srand(time(NULL));
}

unsigned int plugin::Random(unsigned int min, unsigned int max) {
    return min + (rand() % (max - min + 1));
}

float plugin::Random(float min, float max) {
    return min + (max - min) * (rand() / float(RAND_MAX + 1));
}

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

bool plugin::LoadTGAFromFile(const char* path, unsigned short* width, unsigned short* height, unsigned char** pixels) {
    std::ifstream f;

    f.open(path, std::ios::in | std::ios::binary);

    if (!f.is_open()) {
        printf("Texture can't be found");
        return false;
    }

    int i = 0;
    f.read(reinterpret_cast<char*>(&i), sizeof(unsigned char));
    f.read(reinterpret_cast<char*>(&i), sizeof(unsigned char));
    f.read(reinterpret_cast<char*>(&i), sizeof(unsigned char));
    f.read(reinterpret_cast<char*>(&i), sizeof(short));
    f.read(reinterpret_cast<char*>(&i), sizeof(short));
    f.read(reinterpret_cast<char*>(&i), sizeof(unsigned char));
    f.read(reinterpret_cast<char*>(&i), sizeof(short));
    f.read(reinterpret_cast<char*>(&i), sizeof(short));

    short imageWidth;
    f.read(reinterpret_cast<char*>(&imageWidth), sizeof(short));

    short imageHeight;
    f.read(reinterpret_cast<char*>(&imageHeight), sizeof(short));

    unsigned char imageBitCount;
    f.read(reinterpret_cast<char*>(&imageBitCount), sizeof(unsigned char));

    f.read(reinterpret_cast<char*>(&i), sizeof(unsigned char));

    int colorMode = 4;
    int realColorMode = imageBitCount / 8;
    int imageSize = imageWidth * imageHeight * colorMode;

    unsigned char* imageData = new unsigned char[imageSize];
    unsigned char* buff = new unsigned char[imageSize];
    f.read(reinterpret_cast<char*>(imageData), imageSize);

    f.close();
    int j = 0;
    for (unsigned int i = 0; i < imageSize; i += colorMode) {
        unsigned char r;
        unsigned char g;
        unsigned char b;

        switch (imageBitCount) {
        case 16:
            r = (imageData[j + 1] >> 2) & 0x1F;
            g = ((imageData[j + 1] << 3) & 0x1C) | ((imageData[j] >> 5) & 0x07);
            b = (imageData[j] & 0x1F);

            r = (r << 3) | (r >> 2);
            g = (g << 3) | (g >> 2);
            b = (b << 3) | (b >> 2);

            buff[i] = b;
            buff[i + 1] = g;
            buff[i + 2] = r;
            buff[i + 3] = 255;
            break;
        default:
            r = imageData[i + 2];
            g = imageData[i + 1];
            b = imageData[i];

            buff[i] = b;
            buff[i + 1] = g;
            buff[i + 2] = r;

            if (realColorMode < 4)
                buff[i + 3] = 255;
            break;
        }
        j += realColorMode;
    }
    imageData = buff;


    // Flip
    size_t bytesPerRow = (size_t)imageWidth * (colorMode * sizeof(unsigned char));
    unsigned char temp[2048];
    unsigned char* bytes = imageData;

    for (int i = 0; i < (imageHeight >> 1); i++) {
        unsigned char* row0 = bytes + i * bytesPerRow;
        unsigned char* row1 = bytes + (imageHeight - i - 1) * bytesPerRow;

        size_t bytesLeft = bytesPerRow;
        while (bytesLeft) {
            size_t bytes_copy = (bytesLeft < sizeof(temp)) ? bytesLeft : sizeof(temp);
            memcpy(temp, row0, bytes_copy);
            memcpy(row0, row1, bytes_copy);
            memcpy(row1, temp, bytes_copy);
            row0 += bytes_copy;
            row1 += bytes_copy;
            bytesLeft -= bytes_copy;
        }
    }


    *width = imageWidth;
    *height = imageHeight;
    *pixels = imageData;

    return true;
}
