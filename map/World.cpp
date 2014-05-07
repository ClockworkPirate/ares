#include "World.h"

using namespace Ares;

World::World()
{
    this->planetFall = new Sector();
}

World::~World()
{
    delete this->planetFall;
}
