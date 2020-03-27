#pragma once
#include <SDL.h>
#include <cstdint>
#include "Renderer.h"
#include "Game.h"

class Tilemap;

class View
{
private:
	int x = 0;
	int y = 0;
	int width = 480;
	int height = 270;
	SDL_Renderer* renderer = nullptr;
	SDL_Surface* surface = nullptr;
public:
	void setRendererAndSurface(SDL_Renderer* renderer, SDL_Surface* surface);
	void setPosition(int16_t newXpos, int16_t newYpos);
	int getWidth();
	int getHeight();
	int getX();
	int getY();
	SDL_Surface* getSurface();
	void resizeSurface(int newWidth, int newHeight);
	void drawTilemap(Tilemap& tilemap, SDL_Surface& surface);
};