#pragma once

#include <SDL.h>
#include <iostream>
#include <sstream>
#include <string>
#include "xorshift.h"

class Game
{
private:
	uint32_t count = 0;
	bool isRunning = true;
	SDL_Window* window = nullptr;
	SDL_Surface* surface = nullptr;
	SDL_Renderer* renderer = nullptr;

	const char* title;
	int width = 480;
	int height = 480;
	bool fullscreen = false;
	xorshift32 lfsr = xorshift32();
public:
	Game(const char* title, int width, int height);
	~Game();

	void init();

	void handleEvents();
	void update();
	void render();
	void clean();

	bool getIsRunning();

	SDL_Renderer* getRenderer();
	SDL_Surface* getSurface();
};

