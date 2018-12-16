#ifndef BLUEPRINT_H
#define BLUEPRINT_H

#define DEFAULT_MAP_VERSION 68722819072

#include <deque>
#include <string>
#include <sstream>
#include <iterator>
#include "factorio/tile.h"

namespace factorio
{
	class Blueprint
	{
	public:
		Blueprint() {}
		Blueprint(std::string name) : label(name) {}
		Blueprint(std::string name, long map_version) : label(name), version(map_version) {}

		bool getJsonString(std::stringstream& stream)
		{
			if (!stream.good()) return false;

			stream << "{\"item\":\"blueprint\",\"label\":\"" << this->label
					<< "\",\"version\":" << this->version << ",\"tiles\":[";
			for (auto it = this->tiles.cbegin(); it != this->tiles.cend(); ++it)
			{
				(*it).getJsonString(stream);
				if (std::next(it) != this->tiles.cend()) stream << ",";
			}
			stream << "]}";
			return true;
		}

		void addTile(Tile t)
		{
			this->tiles.push_back(t);
		}

	protected:

	private:
		std::string label = "auto-generated blueprint";
		std::deque<Tile> tiles;
		long version = DEFAULT_MAP_VERSION;
	};
}

#endif // BLUEPRINT_H
