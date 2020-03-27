#pragma once
#include <SDL_surface.h>
class Renderer
{
private:
	SDL_Surface* surface = nullptr;
	int width = (480 * 2);
	int height = (270 * 2);
public:
	void resize(int newWidth, int newHeight);
	void drawSelf();
};

