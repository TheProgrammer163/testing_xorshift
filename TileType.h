#pragma once
#include <cstdint>

namespace Tile
{
    bool isSolid(int16_t tileID);
    bool isSwimmable(int16_t tileID);
    bool isIce(int16_t tileID);
}
