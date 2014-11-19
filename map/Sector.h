#include <vector>
#include "Tile.h"

using std::vector;

namespace Ares
{
	class Sector
	{
	public:
		Sector();
		~Sector();
	private:
		vector<vector<Tile*>*>* map;
	};
}
