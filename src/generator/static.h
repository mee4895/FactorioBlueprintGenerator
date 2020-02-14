#ifndef STATIC_H
#define STATIC_H

#include "factorio/location.h"
#include "factorio/tile.h"
#include "factorio/blueprint.h"
#include "factorio/transport.h"

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

		void generateBeltPath(factorio::Blueprint& blueprint, factorio::TransportTier tier, const int x_start, const int y_start, const int x_end, const int y_end);
		inline void generateBeltPath(factorio::Blueprint& blueprint, factorio::TransportTier tier, const factorio::Position start, const factorio::Position end)
		{
			generateBeltPath(blueprint, tier, start.getX(), start.getY(), end.getX(), end.getY());
		}
	}
}

#endif // STATIC_H
