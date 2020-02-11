#include <string>
#include <iostream>
#include <sstream>

#include "zlib.h"
#include "cpp-base64/base64.h"

#include "position.h"
#include "factorio/tile.h"
#include "factorio/blueprint.h"
#include "factorio/signals.h"

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

int main()
{
	factorio::BlueprintBook book;
	factorio::Blueprint blueprint;

	factorio::Tile tile(Position(10, 2), factorio::Tile::Level::STONE_BRICK);

	factorio::Item i = factorio::Item::CHEMICAL_PLANT;
	factorio::Signal s = factorio::Signal::SIGNAL_1;
	factorio::Fluid f = factorio::Fluid::LUBRICANT;

	blueprint.addTile(tile);

	blueprint.addIcon(i);
	blueprint.addIcon(s);
	blueprint.addIcon(f);

	book.addBlueprint(blueprint);

	output(&book);
	return 0;
}
