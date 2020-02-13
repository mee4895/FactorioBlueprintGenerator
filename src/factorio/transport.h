#ifndef BELT_H
#define BELT_H

#include <string>
#include <sstream>
#include "factorio/location.h"

namespace factorio
{
	enum Tier
	{
		NONE,
		YELLOW,
		RED,
		BLUE,

		NUM_TIERS
	};

	class Belt
	{
	public:
		/**
		 * Constructor
		 *
		 * @param n_position The position of the new belt entity
		 * @param n_tier The tier of the new belt entity
		 * @param n_direction The direction of the new belt entity
		 */
		Belt(Position n_position, Tier n_tier = Tier::NONE, Direction n_direction = Direction::NORTH) :
				position(n_position), tier(n_tier), direction(n_direction) {}

		inline bool getJsonString(std::stringstream& stream, int entity_number = 0) const
		{
			if (this->tier == Tier::NONE || !stream.good()) return false;

			stream << "{";
			if (entity_number == 0)
			{
				stream << "\"entity_number\":" << entity_number << ",";
			}
			stream << "\"name\":\"" << getTierName(tier) << "\"," << "\"position\":";
			if (!this->position.getJsonString(stream)) return false;
			if (this->direction == 2 || this->direction == 4 || this->direction == 6)
			{
				stream << "," << "\"direction\":" << this->direction;
			}
			stream << "}";
			return true;
		}

	protected:
		inline static std::string getTierName(Tier tier)
		{
			switch (tier)
			{
				case YELLOW:
					return "transport-belt";
				case RED:
					return "fast-transport-belt";
				case BLUE:
					return "express-transport-belt";
				default:
					return "";
			}
		}

	private:
		Position position;
		Direction direction;
		Tier tier;
	};
}

#endif // BELT_H
