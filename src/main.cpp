#include <string>
#include <iostream>
#include <sstream>
#include "factorio/tile.h"
#include "position.h"

int main()
{
	factorio::Tile tile(factorio::Tile::Level::STONE_BRICK, Position(10, 2));

	std::stringstream stream;
	tile.getJsonString(stream);
	std::cout << stream.str() << std::endl;

	return 0;
}
