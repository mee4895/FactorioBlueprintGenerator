#ifndef TILEGEN_H
#define TILEGEN_H

#include "position.h"
#include "factorio/tile.h"
#include "factorio/blueprint.h"

namespace generator
{
	namespace static_
	{
		class TileGen
		{
		public:
			static inline void generateRectangle(factorio::Blueprint& blueprint,
					factorio::Tile::Level level, const Position size, const Position offset)
			{
				generateRectangle(blueprint, level, size.getX(), size.getY(), offset.getX(), offset.getY());
			}
			static void generateRectangle(factorio::Blueprint& blueprint,
					factorio::Tile::Level level, const int x_size, const int y_size,
					const int x_offset, const int y_offset);

			static inline void generateBorder(factorio::Blueprint& blueprint,
					factorio::Tile::Level level, const Position size, const Position offset)
			{
				generateRectangle(blueprint, level, size.getX(), size.getY(), offset.getX(), offset.getY());
			}
			static void generateBorder(factorio::Blueprint& blueprint,
					factorio::Tile::Level level, const int x_size, const int y_size,
					const int x_offset, const int y_offset);

		protected:

		private:
		};
	}
}

#endif // TILEGEN_H
