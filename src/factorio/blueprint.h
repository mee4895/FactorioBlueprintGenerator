#ifndef BLUEPRINT_H
#define BLUEPRINT_H

#define DEFAULT_BLUEPRINT_NAME "auto-generated blueprint"
#define DEFAULT_BLUEPRINT_BOOK_NAME "auto-generated blueprint book"

#define MAP_VERSION 68722819072

#include <deque>
#include <vector>
#include <string>
#include <memory>
#include <exception>
#include <sstream>
#include <iterator>
#include "factorio/entity.h"
#include "factorio/tile.h"
#include "factorio/signals.h"

namespace factorio
{
	class BlueprintBase
	{
	public:
		BlueprintBase(std::string name): label(name) {}

		inline const std::string getLabel() const
		{
			return label;
		}

		virtual const bool getJsonString(std::stringstream& stream) const = 0;

		inline void setLabel(std::string name)
		{
			this->label = name;
		}

	protected:

	private:
		std::string label;
	};

	class Blueprint : public BlueprintBase
	{
	public:
		std::deque<std::unique_ptr<Entity>> entities;
		std::deque<Tile> tiles;

		Blueprint() : Blueprint(DEFAULT_BLUEPRINT_NAME) {}
		Blueprint(std::string name) : BlueprintBase(name)
		{
			icons.reserve(4);
		}

		const bool getJsonString(std::stringstream& stream) const override
		{
			return getJsonString(stream, -1);
		}
		const bool getJsonString(std::stringstream& stream, const int index) const
		{
			if (!stream.good()) return false;

			stream << "{\"blueprint\":{\"item\":\"blueprint\",\"label\":\"" << getLabel()
					<< "\",\"version\":" << MAP_VERSION;
			if (index >= 0)
				stream << ",\"index\":" << index;

			stream << ",\"icons\":[";
			for (auto it = this->icons.cbegin(); it != this->icons.cend(); ++it)
			{
				int index = std::distance(icons.cbegin(), it) + 1;
				stream << "{\"index\":" << index << ",\"signal\":";
				it->getJsonString(stream);
				stream << "}";
				if (std::next(it) != this->icons.cend()) stream << ",";
			}

			stream << "],\"entities\":[";
			for (auto it = this->entities.cbegin(); it != this->entities.cend(); ++it)
			{
				int index = std::distance(this->entities.cbegin(), it) + 1;
				(*it)->getJsonString(stream, index);
				if (std::next(it) != this->entities.cend()) stream << ",";
			}

			stream << "],\"tiles\":[";
			for (auto it = this->tiles.cbegin(); it != this->tiles.cend(); ++it)
			{
				it->getJsonString(stream);
				if (std::next(it) != this->tiles.cend()) stream << ",";
			}
			stream << "]}}";
			return true;
		}

		inline void addIcon(const Signal& s)
		{
			if (this->icons.size() >= 4) throw std::overflow_error("Only 4 icons are allowed.");
			this->icons.push_back(s);
		}

	protected:

	private:
		std::vector<Signal> icons;
	};

	class BlueprintBook : public BlueprintBase
	{
	public:
		std::deque<Blueprint> blueprints;

		BlueprintBook() : BlueprintBook(DEFAULT_BLUEPRINT_BOOK_NAME) {}
		BlueprintBook(std::string name) : BlueprintBase(name) {}

		const bool getJsonString(std::stringstream& stream) const
		{
			if (!stream.good()) return false;

			stream << "{\"blueprint_book\":{\"item\":\"blueprint-book\",\"label\":\""
					<< getLabel() << "\",\"active_index\":0,\"version\":" << MAP_VERSION
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
	};
}

#endif // BLUEPRINT_H
