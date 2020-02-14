#include "generator/static.h"

void generator::static_::generateRectangle(factorio::Blueprint& blueprint,
		factorio::Tile::Level level, const int x_size, const int y_size,
		const int x_offset, const int y_offset)
{
	for (int i = 0; i < x_size; ++i)
	{
		for (int j = 0; j < y_size; ++j)
		{
			blueprint.tiles.push_back(factorio::Tile(factorio::Position(i + x_offset, j + y_offset), level));
		}
	}
}

void generator::static_::generateBorder(factorio::Blueprint& blueprint,
		factorio::Tile::Level level, const int x_size, const int y_size,
		const int x_offset, const int y_offset)
{
	blueprint.tiles.push_back(factorio::Tile(factorio::Position(-1 + x_offset, -1 + y_offset), level));
	blueprint.tiles.push_back(factorio::Tile(factorio::Position(-1 + x_offset, y_size + y_offset), level));
	blueprint.tiles.push_back(factorio::Tile(factorio::Position(x_size + x_offset, -1 + y_offset), level));
	blueprint.tiles.push_back(factorio::Tile(factorio::Position(x_size + x_offset, y_size + y_offset), level));

	for (int i = 0; i < x_size; ++i)
	{
		blueprint.tiles.push_back(factorio::Tile(factorio::Position(i + x_offset, -1 + y_offset), level));
		blueprint.tiles.push_back(factorio::Tile(factorio::Position(i + x_offset, y_size + y_offset), level));
	}
	for (int j = 0; j < y_size; ++j)
	{
		blueprint.tiles.push_back(factorio::Tile(factorio::Position(-1 + x_offset, j + y_offset), level));
		blueprint.tiles.push_back(factorio::Tile(factorio::Position(x_size + x_offset, j + y_offset), level));
	}
}

void generator::static_::generateBeltPath(factorio::Blueprint& blueprint, factorio::TransportTier tier, const int x_start, const int y_start, const int x_end, const int y_end)
{
	if (x_start == x_end)
	{
		factorio::Direction direction = (y_start >= y_end) ? factorio::Direction::NORTH : factorio::Direction::SOUTH;

		for (int i = y_start; i <= y_end; ++i)
		{
			factorio::Position pos = factorio::Position(x_start, i);
			blueprint.entities.emplace_back(new factorio::Belt(pos, tier, direction));
		}
	}
	else if (y_start == y_end)
	{
		factorio::Direction direction = (x_start >= x_end) ? factorio::Direction::EAST : factorio::Direction::WEST;

		for (int i = y_start; i <= y_end; ++i)
		{
			factorio::Position pos = factorio::Position(y_start, i);
			blueprint.entities.emplace_back(new factorio::Belt(pos, tier, direction));
		}
	}
	else
	{
		throw std::runtime_error("Can only create of belt lines!");
	}
}
