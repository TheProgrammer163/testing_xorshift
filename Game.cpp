#include "Game.h"
#include "xorshift.h"

Game::Game(const char* title, int width = 480, int height = 270)
{
	this->title = title;
	this->width = width;
	this->height = height;
}

Game::~Game()
{
}

void Game::init() {

	Uint32 flags = 0;
	if (fullscreen){
		flags = SDL_WINDOW_FULLSCREEN;
	}
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		std::cout << "Subsystems initialized!..." << std::endl;
		window = SDL_CreateWindow(this->title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, this->width, this->height, flags);
		if (window) {
			std::cout << "Window created!" << std::endl;
		}

		renderer = SDL_CreateRenderer(window, -1, 0);
		if (renderer) {
			SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
			std::cout << "Renderer created!" << std::endl;
		}

		isRunning = true;
	}
	else {
		isRunning = false;
	}
}

void Game::handleEvents() {
	SDL_Event event;
	SDL_PollEvent(&event);
	switch (event.type) {
	case SDL_QUIT:
		isRunning = false;
		break;
	default:
		break;
	}
}
void Game::update() {
	this->lfsr.setSeed(count);
	std::cout << lfsr.random() << std::endl;
	this->count++;
}
void Game::render() {
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);
}
void Game::clean() {
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
	std::cout << "Game cleaned" << std::endl;
}
bool Game::getIsRunning() {
	return isRunning;
}

SDL_Renderer* Game::getRenderer()
{
	return this->renderer;
}

SDL_Surface* Game::getSurface()
{
	return this->surface;
}
