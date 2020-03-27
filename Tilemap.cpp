#include "Tilemap.h"

int16_t Tilemap::getTileAtTile(int16_t xpos, int16_t ypos)
{
	// find the tile ID of the tile at this position on the tilemap
	return 0;
}

void Tilemap::drawSelf(View& view, SDL_Surface& surface)
{
	int16_t xStart = view.getX() / this->getTileSize();
	int16_t yStart = view.getY() / this->getTileSize();
	int16_t drawOffsetX = view.getX();
	int16_t drawOffsetY = view.getY();

	for (int16_t tileY = yStart; tileY <= (view.getHeight() / this->getTileSize()); tileY++)
	{
		for (int16_t tileX = xStart; tileX <= (view.getWidth() / this->getTileSize()); tileX++)
		{
			int16_t tileID = this->getTileAtTile(tileX, tileY);
			this->drawTile(tileX, tileY, tileID);
		}
	}
}

int16_t Tilemap::getTileSize()
{
	return this->tileSize;
}

void Tilemap::drawTile(int16_t xpos, int16_t ypos, int16_t tileType)
{
	// draw tile using SDL2 drawing function
}

