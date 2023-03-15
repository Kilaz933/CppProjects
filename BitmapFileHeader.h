#ifndef BITMAPFILEHEADER_H_INCLUDED
#define BITMAPFILEHEADER_H_INCLUDED

#include <cstdint>

using namespace std;

#pragma pack(2) // it makes C++ a line all of these on two byte boundaries, no extra padding into align all these in what it considers the most efficient
// way possible

namespace caveofprogramming
{



struct BitmapFileHeader
{
    char header [2]{'B', 'M'}; // two bites containing a letter, which tell the application to open this file and its bitmap file
    int32_t fileSize; // we must be sure its 32 bites because it will be written directly to the file and a file has a fixed format, thats why we
    // include cstdint and std namespace
    int32_t reserved{0}; //
    int32_t dataOffset; // we will set it later and it says how long into the file the actual data actually begins as I recall

};

}
#endif // BITMAPFILEHEADER_H_INCLUDED
