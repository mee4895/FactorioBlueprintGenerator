#include <string>
#include <iostream>
#include <sstream>

#include "zlib.h"
#include "cpp-base64/base64.h"

#include "factorio/location.h"
#include "factorio/tile.h"
#include "factorio/blueprint.h"
#include "factorio/signals.h"
#include "factorio/transport.h"

#include "generator/static.h"

#define CHUNK 16384


const std::string json2bps(const std::string data)
{
	// placeholder for the compressed (deflated) version of the input
	unsigned char out[CHUNK];

	// zlib setup
	z_stream defstream;
	defstream.zalloc = Z_NULL;
	defstream.zfree = Z_NULL;
	defstream.opaque = Z_NULL;

	// zlib IO setup
	defstream.avail_in = data.length(); // size of input
	defstream.next_in = (unsigned char*)data.c_str(); // input char array
	defstream.avail_out = CHUNK; // size of output
	defstream.next_out = out; // output char array

	// the actual compression work.
	deflateInit(&defstream, Z_BEST_COMPRESSION);
	deflate(&defstream, Z_FINISH);
	deflateEnd(&defstream);

	// base64 encode and return
	return "0" + base64_encode(out, CHUNK - defstream.avail_out);
}

void output(const factorio::BlueprintBase* blueprint)
{
	std::stringstream stream;

	blueprint->getJsonString(stream);
	std::cout << stream.str() << std::endl;
	std::cout << json2bps(stream.str()) << std::endl;
}

//void tmp()
//{
//	factorio::BlueprintBook book;
//	factorio::Blueprint print;
//
//	book.blueprints.push_back(print);
//
//	output(&book);
//}

int main()
{
	factorio::BlueprintBook book;
	factorio::Blueprint blueprint;

	factorio::Tile tile(factorio::Position(10, 2), factorio::Tile::Level::STONE_BRICK);

	factorio::Item i = factorio::Item::CHEMICAL_PLANT;
	factorio::Signal s = factorio::Signal::SIGNAL_1;
	factorio::Fluid f = factorio::Fluid::LUBRICANT;

	generator::static_::generateRectangle(blueprint, factorio::Tile::Level::CONCRETE, 8, 8, -4, -4);

	generator::static_::generateBeltPath(
		blueprint,
		factorio::TransportTier::RED,
		factorio::Position(5, 12),
		factorio::Position(5, 12)
	);

	blueprint.entities.emplace_back(new factorio::Belt(factorio::Position(10, 2), factorio::TransportTier::RED, factorio::Direction::WEST));

	blueprint.tiles.push_back(tile);

	blueprint.addIcon(i);
	blueprint.addIcon(s);
	blueprint.addIcon(f);

	book.blueprints.push_back(blueprint);

	output(&book);
	return 0;
}
