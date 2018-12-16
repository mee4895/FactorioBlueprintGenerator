#include <string>
#include <iostream>
#include <sstream>
#include "position.h"
#include "factorio/tile.h"
#include "factorio/blueprint.h"

int main()
{
	factorio::Blueprint blueprint;
	factorio::Tile tile(factorio::Tile::Level::STONE_BRICK, Position(10, 2));

	blueprint.addTile(tile);

	std::stringstream stream;
	blueprint.getJsonString(stream);
	std::cout << stream.str() << std::endl;

	return 0;
}
