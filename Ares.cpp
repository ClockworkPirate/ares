#include <stdlib.h>
#include <iostream>

#include <SDL2/SDL.h>

#include "game/Game.h"

using std::cout;
using std::endl;

using namespace Ares;

int main(int argc, char* argv[]) {
	cout << "The Ares Initiative" << endl << "Copyright 2014 Igneus" << endl;
	if (argc > 1) {
		cout << "Started with arguments ";
		for (int i = 1; i < argc; i ++) {
			cout << argv[i];
		}
		cout << endl;
	}

	return (new Game())->start();
}
