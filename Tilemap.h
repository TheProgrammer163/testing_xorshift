#pragma once
#include <cstdint>
#include "View.h"

class View;
class Tile;

class Tilemap
{
private:
	int16_t tileSize = 16;
	int16_t tilemapData[64];
public:
	Tilemap(int16_t width, int16_t height);
	int16_t getTileAtPixel(int16_t xpos, int16_t ypos);
	int16_t getTileAtTile(int16_t xpos, int16_t ypos);
	void drawSelf(View& view, SDL_Surface& surface);
	int16_t getTileSize();
	void drawTile(int16_t xpos, int16_t ypos, int16_t tileType);
};

