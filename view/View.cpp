using namespace Ares;

#include "View.h"

View::View() {

}

View::~View() {

}

int init() {
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
	{
		logSDLError(std::cout, "SDL_Init");
		return 1;
	}

	if ((IMG_Init(IMG_INIT_PNG) & IMG_INIT_PNG) != IMG_INIT_PNG)
	{
		logSDLError(std::cout, "IMG_Init");
		return 1;
	}

	window = SDL_CreateWindow(
	WINDOW_TITLE.c_str(), WINDOW_X, WINDOW_Y, WINDOW_WIDTH,
	WINDOW_HEIGHT, SDL_WINDOW_SHOWN);
	if (window == nullptr)
	{
		logSDLError(std::cout, "SDL_CreateWindow");
		return 1;
	}

	renderer = SDL_CreateRenderer(window, -1,
	SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if (renderer == nullptr)
	{
		logSDLError(std::cout, "SDL_CreateRenderer");
		return 1;
	}

	background = loadTexture("background.png", renderer);
	image = loadTexture("image.png", renderer);
	if (background == nullptr || image == nullptr)
	{
		return 4;
	}
	setClip(0);

	return 0;
}
