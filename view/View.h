
#include <SDL2/sdl.h>
#include <SDL2_image/sdl_image.h>

namespace Ares {
	const int BACKGROUND_TILE_SIZE = 64;

	const std::string &WINDOW_TITLE = "This is a window";
	const int WINDOW_X = 100;
	const int WINDOW_Y = 100;
	const int WINDOW_WIDTH  = 640;
	const int WINDOW_HEIGHT = 480;
	const int SPRITE_CLIP_SIZE = 100;

	class View {
	public:
		View();
		~View();
		int init();
	private:
		SDL_Window* window;
		SDL_Renderer* renderer;

		SDL_Texture* background;
	};
}
