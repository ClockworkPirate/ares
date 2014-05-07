#include <iostream>
#include <chrono>
#include <thread>

#include "Player.h"
#include "../map/World.h"

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

		bool loopFinished;

		void input();
		void update();
		void draw();
	};
}
