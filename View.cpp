
#include "View.h"
#include "Tilemap.h"


void View::resizeSurface(int newWidth, int newHeight)
{
	//Resize SDL2 surface
}

void View::drawTilemap(Tilemap& tilemap, SDL_Surface& surface)
{
	tilemap.drawSelf(*this, surface);
}

void View::setRendererAndSurface(SDL_Renderer* renderer, SDL_Surface* surface)
{
	this->renderer = renderer;
	this->surface = surface;
}

void View::setPosition(int16_t newXpos, int16_t newYpos)
{
	this->x = newXpos;
	this->y = newYpos;
}

int View::getWidth()
{
	return this->width;
}

int View::getHeight()
{
	return this->height;
}

int View::getX()
{
	return this->x;
}

int View::getY()
{
	return this->y;
}