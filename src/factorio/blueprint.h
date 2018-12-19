#ifndef BLUEPRINT_H
#define BLUEPRINT_H

#define DEFAULT_BLUEPRINT_NAME "auto-generated blueprint"
#define DEFAULT_BLUEPRINT_BOOK_NAME "auto-generated blueprint book"

#define MAP_VERSION 68722819072

#include <deque>
#include <vector>
#include <string>
#include <sstream>
#include <iterator>
#include "factorio/tile.h"
#include "factorio/signals.h"

namespace factorio
{
	class Blueprint
	{
	public:
		Blueprint() : Blueprint(DEFAULT_BLUEPRINT_NAME) {}
		Blueprint(std::string name) : label(name)
		{
			icons.reserve(4);
		}

		const bool getJsonString(std::stringstream& stream, const int index = -1) const
		{
			if (!stream.good()) return false;

			stream << "{\"blueprint\":{\"item\":\"blueprint\",\"label\":\"" << this->label
					<< "\",\"version\":" << MAP_VERSION << ",\"icons\":[";
			for (auto it = this->icons.cbegin(); it != this->icons.cend(); ++it)
			{
				int index = std::distance(icons.cbegin(), it) + 1;
				stream << "{\"index\":" << index << ",\"signal\":";
				(*it).getJsonString(stream);
				stream << "}";
				if (std::next(it) != this->icons.cend()) stream << ",";
			}
			stream << "],\"tiles\":[";
			for (auto it = this->tiles.cbegin(); it != this->tiles.cend(); ++it)
			{
				(*it).getJsonString(stream);
				if (std::next(it) != this->tiles.cend()) stream << ",";
			}
			stream << "]}";

			if (index >= 0)
				stream << ",\"index\":" << index;
			stream << "}";
			return true;
		}

		inline void addTile(const Tile& t)
		{
			this->tiles.push_back(t);
		}

		inline void addIcon(const Signal& s)
		{
			if (this->icons.size() >= 4) return;
			this->icons.push_back(s);
		}

	protected:

	private:
		std::string label;
		std::deque<Tile> tiles;
		std::vector<Signal> icons;
	};

	class BlueprintBook
	{
	public:
		BlueprintBook() : BlueprintBook(DEFAULT_BLUEPRINT_BOOK_NAME) {}
		BlueprintBook(std::string name) : label(name) {}

		const bool getJsonString(std::stringstream& stream) const
		{
			if (!stream.good()) return false;

			stream << "{\"blueprint_book\":{\"item\":\"blueprint-book\",\"label\":\""
					<< this->label << "\",\"active_index\":0,\"version\":" << MAP_VERSION
					<< ",\"blueprints\":[";
			for (auto it = this->blueprints.cbegin(); it != this->blueprints.cend(); ++it)
			{
				const int index = std::distance(blueprints.cbegin(), it);
				(*it).getJsonString(stream, index);
				if (std::next(it) != this->blueprints.cend()) stream << ",";
			}
			stream << "]}}";
			return true;
		}

		inline void addBlueprint(const Blueprint& b)
		{
			this->blueprints.push_back(b);
		}

	protected:

	private:
		std::string label;
		std::deque<Blueprint> blueprints;
	};
}

#endif // BLUEPRINT_H
