#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <string>
#include <sstream>

#include "factorio/entity.h"
#include "factorio/location.h"

namespace factorio
{
	enum TransportTier
	{
		NONE,
		YELLOW,
		RED,
		BLUE,

		NUM_TIERS
	};

	class Belt : public Entity
	{
	public:
		/**
		 * Constructor
		 *
		 * @param n_position The position of the new belt entity
		 * @param n_tier The tier of the new belt entity
		 * @param n_direction The direction of the new belt entity
		 */
		Belt(Position n_position, TransportTier n_tier = TransportTier::NONE,
				Direction n_direction = Direction::NORTH) :
				Entity(n_position), tier(n_tier), direction(n_direction) {}

		std::string getName() const
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

		bool getJsonString(std::stringstream& stream, int entity_number = 0) const
		{
			if (this->tier == TransportTier::NONE || !stream.good()) return false;

			stream << "{";
			if (entity_number != 0)
			{
				stream << "\"entity_number\":" << entity_number << ",";
			}
			stream << "\"name\":\"" << getName() << "\"," << "\"position\":";
			if (!this->position.getJsonString(stream)) return false;
			if (this->direction == 2 || this->direction == 4 || this->direction == 6)
			{
				stream << "," << "\"direction\":" << this->direction;
			}
			stream << "}";
			return true;
		}

	private:
		TransportTier tier;
		Direction direction;
	};
}

#endif // TRANSPORT_H
