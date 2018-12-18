#include <string>
#include <iostream>
#include <sstream>
#include "position.h"
#include "factorio/tile.h"
#include "factorio/blueprint.h"
#include "factorio/item.h"
#include "factorio/fluid.h"

int main()
{
	factorio::Blueprint blueprint;
	factorio::Tile tile(factorio::Tile::Level::STONE_BRICK, Position(10, 2));

	factorio::Item i = factorio::Item::CHEMICAL_PLANT;
	factorio::Signal s = factorio::Signal::SIGNAL_1;
	factorio::Fluid f = factorio::Fluid::LUBRICANT;

	blueprint.addTile(tile);

	std::stringstream stream;
	blueprint.getJsonString(stream);
	std::cout << stream.str() << std::endl;

	return 0;
}
