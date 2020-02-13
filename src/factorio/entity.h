#ifndef ENTITY_H
#define ENTITY_H

#include <string>
#include <sstream>
#include "factorio/location.h"

namespace factorio
{
	class Entity
	{
	public:
		Entity(Position p) : position(p) {}

		virtual std::string getName() const = 0;
		virtual bool getJsonString(std::stringstream& stream, int entity_number = 0) const = 0;

	protected:
		Position position;
	};
}

#endif // ENTITY_H
