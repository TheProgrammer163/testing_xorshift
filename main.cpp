#include <SDL.h>
#include <iostream>
#include <sstream>
#include <string>

#include "Game.h"

Game* game = nullptr;

int main(int argc, char* argv[]) {

	game = new Game("TestEngine", 480, 270);

	game->init();

	while (game->getIsRunning()) {
		game->handleEvents();
		game->update();
		game->render();
	}

	game->clean();
	delete game;

	return 0;
}


/*

HEY YOU! YES YOU, THEPROGRAMMER163!
Here's what you did yesterday:
You learned a bunch about C++, like forward declerations, circular inclusion, and some weird
error message which usually simply means linkage error/function isn't defined yet, only declared

Now here's what you got to do: read all your code again once or twice, change what needs to be changed.
Then, refactor the main.cpp file and Game.cpp so that it makes sense according to the classes you made.
Then, finish writing the Tilemap stuff so that it's ready.
You may need a Sprites class for drawing tile sprites and entity sprites,and to load bitmaps of sprites as well.
*/