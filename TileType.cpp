#include "TileType.h"

bool Tile::isSolid(int16_t tileID)
{
	switch (tileID)
	{
	case 0:
	case 1:
	case 2:
		return true;
	default:
		return false;
	}
}