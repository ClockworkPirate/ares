#include "Game.h"

using namespace Ares;

using std::this_thread::sleep_until;
using std::chrono::milliseconds;
using std::chrono::system_clock;

using std::cin;
using std::cout;
using std::endl;

system_clock::duration FRAME_LENGTH = milliseconds(16);

Game::Game() {
	this->world = new World();
	this->player = new Player();

	this->i = new string("");
}

Game::~Game() {
	delete this->world;
	delete this->player;

	delete this->i;
}

int Game::start() {
	this->init();

	while (!this->loopFinished) {
		system_clock::time_point tp = system_clock::now();

		this->input();
		this->update();
		this->draw();

		sleep_until(tp + FRAME_LENGTH);
	}

	this->deinit();

	return 0;
}

int Game::init() {
	return this->view->init();
}

void Game::input() {
	cin >> *(this->i);
}

void Game::update() {
	if (*(this->i) == string("q")) {
		this->loopFinished = true;
	}
}

void Game::draw() {
	if (*(this->i) != string("q")) {
		cout << *(this->i) << endl;
	}
}

void Game::deinit() {
	
}
