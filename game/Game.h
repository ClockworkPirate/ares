#include <iostream>
#include <chrono>
#include <thread>
#include <string>

#include "Player.h"
#include "../map/World.h"
#include "../view/View.h"

using std::string;

namespace Ares
{
	class Game
	{
	public:
		Game();
		~Game();
		int start();
	private:
		World* world;
		Player* player;
		View* view;

		string* i;

		bool loopFinished;

		int init();
		void input();
		void update();
		void draw();
		void deinit();
	};
}
