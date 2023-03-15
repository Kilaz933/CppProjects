#ifndef BITMAPINFOHEADER_H_INCLUDED
#define BITMAPINFOHEADER_H_INCLUDED

#include <cstdint>

#pragma pack(push, 2)  // it makes C++ a line all of these on two byte boundaries, no extra padding into align all these in what it considers the most efficient
// way possible

namespace caveofprogramming
{

struct BitmapInfoHeader
{
    int32_t headerSize{40};
    int32_t width;
    int32_t height;
    int16_t planes{1};
    int16_t bitsPerPixel{24};
    int32_t compression{0};
    int32_t dataSize{0};
    int32_t horizontalResolution{2400};
    int32_t verticalResolution{2400};
    int32_t colors{0};
    int32_t importantColors{0};

};

#pragma pack(pop)
}

#endif // BITMAPINFOHEADER_H_INCLUDED
