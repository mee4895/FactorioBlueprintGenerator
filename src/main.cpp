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
	factorio::BlueprintBook book;
	factorio::Blueprint blueprint;

	factorio::Tile tile(Position(10, 2), factorio::Tile::Level::STONE_BRICK);

	factorio::Item i = factorio::Item::CHEMICAL_PLANT;
	factorio::Signal s = factorio::Signal::SIGNAL_1;
	factorio::Fluid f = factorio::Fluid::LUBRICANT;

	blueprint.addTile(tile);

	blueprint.addIcon(i);
	blueprint.addIcon(s);
	blueprint.addIcon(f);

	book.addBlueprint(blueprint);

	std::stringstream stream;
	book.getJsonString(stream);
	std::cout << stream.str() << std::endl;

	return 0;
}
