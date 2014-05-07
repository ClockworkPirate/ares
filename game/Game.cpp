#include "Game.h"

using namespace Ares;
using std::this_thread::sleep_until;
using std::chrono::milliseconds;
using std::chrono::system_clock;

system_clock::duration FRAME_LENGTH = milliseconds(16);

Game::Game()
{
	this->world = new World();
	this->player = new Player();
}

Game::~Game()
{
	delete this->world;
	delete this->player;
}

int Game::start()
{
	while (!this->loopFinished)
	{
		system_clock::time_point tp = system_clock::now();

		this->input();
		this->update();
		this->draw();

		sleep_until(tp + FRAME_LENGTH);
	}

	return 0;
}

void Game::input()
{

}

void Game::update()
{
	
}

void Game::draw()
{

}
