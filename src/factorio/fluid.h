#ifndef FLUID_H
#define FLUID_H

#include <string>
#include "factorio/signals.h"

namespace factorio
{
	class Fluid: public Signal
	{
	public:
		static const std::string CLASS_TYPE;

		static const Fluid CRUDE_OIL;
		static const Fluid HEAVY_OIL;
		static const Fluid LIGHT_OIL;
		static const Fluid LUBRICANT;
		static const Fluid PETROLEUM_GAS;
		static const Fluid STEAM;
		static const Fluid SULFURIC_ACID;
		static const Fluid WATER;

	protected:

	private:
		Fluid(const char* name): Signal(name, CLASS_TYPE) {}
	};

	const std::string Fluid::CLASS_TYPE("fluid");

	const Fluid Fluid::CRUDE_OIL("crude-oil");
	const Fluid Fluid::HEAVY_OIL("heavy-oil");
	const Fluid Fluid::LIGHT_OIL("light-oil");
	const Fluid Fluid::LUBRICANT("lubricant");
	const Fluid Fluid::PETROLEUM_GAS("petroleum-gas");
	const Fluid Fluid::STEAM("steam");
	const Fluid Fluid::SULFURIC_ACID("sulfuric-acid");
	const Fluid Fluid::WATER("water");
}

#endif // FLUID_H
