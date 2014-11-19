#include "Sector.h"

using namespace Ares;

Sector::Sector()
{
	this->map = new vector<vector<Tile*>*>();
}

Sector::~Sector()
{
	delete this->map;
}
