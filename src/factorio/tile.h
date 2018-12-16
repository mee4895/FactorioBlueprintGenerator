#ifndef TILE_H
#define TILE_H

#include <string>
#include <sstream>
#include "position.h"

namespace factorio
{
	class Tile
	{
	public:
		enum Level
		{
			NONE,
			STONE_BRICK,
			CONCRETE,
			HAZARD_CONCRETE,
			REFINED_CONCRETE,
			REFINED_HAZARD_CONCRETE,

			NUM_LEVELS
		};

		Tile(Level level, Position position)
		{
			this->level = level;
			this->position = position;
		}

		inline bool getJsonString(std::stringstream& stream)
		{
			if (this->level == Level::NONE || !stream.good()) return false;

			stream << "{\"name\":\"" << getLevelName(this->level) << "\",\"position\":";
			this->position.getJsonString(stream);
			stream << "}";
			return true;
		}

	protected:
		inline std::string getLevelName(Level level) {
			switch (level)
			{
				case STONE_BRICK:
					return "stone-brick";
				case CONCRETE:
					return "concrete";
				case HAZARD_CONCRETE:
					return "hazard-concrete";
				case REFINED_CONCRETE:
					return "refined-concrete";
				case REFINED_HAZARD_CONCRETE:
					return "refined-hazard-concrete";
				default:
					return "";
			}
		}

	private:
		Level level;
		Position position;
	};
}

#endif // TILE_H
