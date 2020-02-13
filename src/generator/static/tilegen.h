#ifndef TILEGEN_H
#define TILEGEN_H

#include "factorio/location.h"
#include "factorio/tile.h"
#include "factorio/blueprint.h"

namespace generator
{
	namespace static_
	{
		void generateRectangle(factorio::Blueprint& blueprint,
				factorio::Tile::Level level, const int x_size, const int y_size,
				const int x_offset, const int y_offset);
		inline void generateRectangle(factorio::Blueprint& blueprint,
				factorio::Tile::Level level, const factorio::Position size, const factorio::Position offset)
		{
			generateRectangle(blueprint, level, size.getX(), size.getY(), offset.getX(), offset.getY());
		}

		void generateBorder(factorio::Blueprint& blueprint,
				factorio::Tile::Level level, const int x_size, const int y_size,
				const int x_offset, const int y_offset);
		inline void generateBorder(factorio::Blueprint& blueprint,
				factorio::Tile::Level level, const factorio::Position size, const factorio::Position offset)
		{
			generateBorder(blueprint, level, size.getX(), size.getY(), offset.getX(), offset.getY());
		}
	}
}

#endif // TILEGEN_H
