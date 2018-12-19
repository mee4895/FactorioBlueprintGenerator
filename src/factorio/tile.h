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
			HAZARD_CONCRETE_LEFT,
			HAZARD_CONCRETE_RIGHT,
			REFINED_CONCRETE,
			REFINED_HAZARD_CONCRETE_LEFT,
			REFINED_HAZARD_CONCRETE_RIGHT,

			NUM_LEVELS
		};

		Tile(Level n_level, Position n_position) : level(n_level), position(n_position) {}

		inline const bool getJsonString(std::stringstream& stream) const
		{
			if (this->level == Level::NONE || !stream.good()) return false;

			stream << "{\"name\":\"" << getLevelName(this->level) << "\",\"position\":";
			this->position.getJsonString(stream);
			stream << "}";
			return true;
		}

	protected:
		inline static std::string getLevelName(Level level)
		{
			switch (level)
			{
				case STONE_BRICK:
					return "stone-path";
				case CONCRETE:
					return "concrete";
				case HAZARD_CONCRETE_LEFT:
					return "hazard-concrete-left";
				case HAZARD_CONCRETE_RIGHT:
					return "hazard-concrete-right";
				case REFINED_CONCRETE:
					return "refined-concrete";
				case REFINED_HAZARD_CONCRETE_LEFT:
					return "refined-hazard-concrete-left";
				case REFINED_HAZARD_CONCRETE_RIGHT:
					return "refined-hazard-concrete-right";
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
