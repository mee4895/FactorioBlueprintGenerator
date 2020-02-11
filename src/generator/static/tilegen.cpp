#include "generator/static/tilegen.h"

void generator::static_::generateRectangle(factorio::Blueprint& blueprint,
		factorio::Tile::Level level, const int x_size, const int y_size,
		const int x_offset, const int y_offset)
{
	for (int i = 0; i < x_size; ++i)
	{
		for (int j = 0; j < y_size; ++j)
		{
			blueprint.addTile(factorio::Tile(Position(i + x_offset, j + y_offset), level));
		}
	}
}

void generator::static_::generateBorder(factorio::Blueprint& blueprint,
		factorio::Tile::Level level, const int x_size, const int y_size,
		const int x_offset, const int y_offset)
{
	blueprint.addTile(factorio::Tile(Position(-1 + x_offset, -1 + y_offset), level));
	blueprint.addTile(factorio::Tile(Position(-1 + x_offset, y_size + y_offset), level));
	blueprint.addTile(factorio::Tile(Position(x_size + x_offset, -1 + y_offset), level));
	blueprint.addTile(factorio::Tile(Position(x_size + x_offset, y_size + y_offset), level));

	for (int i = 0; i < x_size; ++i)
	{
		blueprint.addTile(factorio::Tile(Position(i + x_offset, -1 + y_offset), level));
		blueprint.addTile(factorio::Tile(Position(i + x_offset, y_size + y_offset), level));
	}
	for (int j = 0; j < y_size; ++j)
	{
		blueprint.addTile(factorio::Tile(Position(-1 + x_offset, j + y_offset), level));
		blueprint.addTile(factorio::Tile(Position(x_size + x_offset, j + y_offset), level));
	}
}
