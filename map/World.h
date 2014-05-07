#include <stdlib.h>
#include "Sector.h"

namespace Ares
{
    class World
    {
    public:
        World();
        ~World();
    private:
        Sector* planetFall;
    };
}
