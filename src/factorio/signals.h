#ifndef SIGNALS_H
#define SIGNALS_H

#include <string>
#include <sstream>

namespace factorio
{
	class Signal: public std::string
	{
	public:
		static const std::string CLASS_TYPE;

		static const Signal SIGNAL_0;
		static const Signal SIGNAL_1;
		static const Signal SIGNAL_2;
		static const Signal SIGNAL_3;
		static const Signal SIGNAL_4;
		static const Signal SIGNAL_5;
		static const Signal SIGNAL_6;
		static const Signal SIGNAL_7;
		static const Signal SIGNAL_8;
		static const Signal SIGNAL_9;
		static const Signal SIGNAL_A;
		static const Signal SIGNAL_B;
		static const Signal SIGNAL_C;
		static const Signal SIGNAL_D;
		static const Signal SIGNAL_E;
		static const Signal SIGNAL_F;
		static const Signal SIGNAL_G;
		static const Signal SIGNAL_H;
		static const Signal SIGNAL_I;
		static const Signal SIGNAL_J;
		static const Signal SIGNAL_K;
		static const Signal SIGNAL_L;
		static const Signal SIGNAL_M;
		static const Signal SIGNAL_N;
		static const Signal SIGNAL_O;
		static const Signal SIGNAL_P;
		static const Signal SIGNAL_Q;
		static const Signal SIGNAL_R;
		static const Signal SIGNAL_S;
		static const Signal SIGNAL_T;
		static const Signal SIGNAL_U;
		static const Signal SIGNAL_V;
		static const Signal SIGNAL_W;
		static const Signal SIGNAL_X;
		static const Signal SIGNAL_Y;
		static const Signal SIGNAL_Z;
		static const Signal SIGNAL_ANYTHING;
		static const Signal SIGNAL_BLACK;
		static const Signal SIGNAL_BLUE;
		static const Signal SIGNAL_CYAN;
		static const Signal SIGNAL_EACH;
		static const Signal SIGNAL_EVERYTHING;
		static const Signal SIGNAL_GREEN;
		static const Signal SIGNAL_GREY;
		static const Signal SIGNAL_PINK;
		static const Signal SIGNAL_RED;
		static const Signal SIGNAL_WHITE;
		static const Signal SIGNAL_YELLOW;

		inline const bool getJsonString(std::stringstream& stream) const
		{
			if (!stream.good()) return false;

			stream << "{\"name\":\"" << *this << "\",\"type\":\"" << type << "\"}";
			return true;
		}

	protected:
		Signal(const char* name, const std::string class_type): std::string(name), type(class_type) {}

		const std::string type;

	private:
		Signal(const char* name): std::string(name), type(CLASS_TYPE) {}
	};

	const std::string Signal::CLASS_TYPE("virtual");

	const Signal Signal::SIGNAL_0("signal-0");
	const Signal Signal::SIGNAL_1("signal-1");
	const Signal Signal::SIGNAL_2("signal-2");
	const Signal Signal::SIGNAL_3("signal-3");
	const Signal Signal::SIGNAL_4("signal-4");
	const Signal Signal::SIGNAL_5("signal-5");
	const Signal Signal::SIGNAL_6("signal-6");
	const Signal Signal::SIGNAL_7("signal-7");
	const Signal Signal::SIGNAL_8("signal-8");
	const Signal Signal::SIGNAL_9("signal-9");
	const Signal Signal::SIGNAL_A("signal-A");
	const Signal Signal::SIGNAL_B("signal-B");
	const Signal Signal::SIGNAL_C("signal-C");
	const Signal Signal::SIGNAL_D("signal-D");
	const Signal Signal::SIGNAL_E("signal-E");
	const Signal Signal::SIGNAL_F("signal-F");
	const Signal Signal::SIGNAL_G("signal-G");
	const Signal Signal::SIGNAL_H("signal-H");
	const Signal Signal::SIGNAL_I("signal-I");
	const Signal Signal::SIGNAL_J("signal-J");
	const Signal Signal::SIGNAL_K("signal-K");
	const Signal Signal::SIGNAL_L("signal-L");
	const Signal Signal::SIGNAL_M("signal-M");
	const Signal Signal::SIGNAL_N("signal-N");
	const Signal Signal::SIGNAL_O("signal-O");
	const Signal Signal::SIGNAL_P("signal-P");
	const Signal Signal::SIGNAL_Q("signal-Q");
	const Signal Signal::SIGNAL_R("signal-R");
	const Signal Signal::SIGNAL_S("signal-S");
	const Signal Signal::SIGNAL_T("signal-T");
	const Signal Signal::SIGNAL_U("signal-U");
	const Signal Signal::SIGNAL_V("signal-V");
	const Signal Signal::SIGNAL_W("signal-W");
	const Signal Signal::SIGNAL_X("signal-X");
	const Signal Signal::SIGNAL_Y("signal-Y");
	const Signal Signal::SIGNAL_Z("signal-Z");
	const Signal Signal::SIGNAL_ANYTHING("signal-anything");
	const Signal Signal::SIGNAL_BLACK("signal-black");
	const Signal Signal::SIGNAL_BLUE("signal-blue");
	const Signal Signal::SIGNAL_CYAN("signal-cyan");
	const Signal Signal::SIGNAL_EACH("signal-each");
	const Signal Signal::SIGNAL_EVERYTHING("signal-everything");
	const Signal Signal::SIGNAL_GREEN("signal-green");
	const Signal Signal::SIGNAL_GREY("signal-grey");
	const Signal Signal::SIGNAL_PINK("signal-pink");
	const Signal Signal::SIGNAL_RED("signal-red");
	const Signal Signal::SIGNAL_WHITE("signal-white");
	const Signal Signal::SIGNAL_YELLOW("signal-yellow");



	class Item: public Signal
	{
	public:
		static const std::string CLASS_TYPE;

		static const Item ACCUMULATOR;
		static const Item ADVANCED_CIRCUIT;
		static const Item ARITHMETIC_COMBINATOR;
		static const Item ARTILLERY_TURRET;
		static const Item ASSEMBLING_MACHINE_1;
		static const Item ASSEMBLING_MACHINE_2;
		static const Item ASSEMBLING_MACHINE_3;
		static const Item BATTERY;
		static const Item BATTERY_EQUIPMENT;
		static const Item BATTERY_MK2_EQUIPMENT;
		static const Item BEACON;
		static const Item BELT_IMMUNITY_EQUIPMENT;
		static const Item BIG_ELECTRIC_POLE;
		static const Item BOILER;
		static const Item BURNER_INSERTER;
		static const Item BURNER_MINING_DRILL;
		static const Item CENTRIFUGE;
		static const Item CHEMICAL_PLANT;
		static const Item COAL;
		static const Item COIN;
		static const Item COMPUTER;
		static const Item CONCRETE;
		static const Item CONSTANT_COMBINATOR;
		static const Item CONSTRUCTION_ROBOT;
		static const Item COPPER_CABLE;
		static const Item COPPER_ORE;
		static const Item COPPER_PLATE;
		static const Item CRUDE_OIL_BARREL;
		static const Item DECIDER_COMBINATOR;
		static const Item DISCHARGE_DEFENSE_EQUIPMENT;
		static const Item ELECTRIC_ENERGY_INTERFACE;
		static const Item ELECTRIC_ENGINE_UNIT;
		static const Item ELECTRIC_FURNACE;
		static const Item ELECTRIC_MINING_DRILL;
		static const Item ELECTRONIC_CIRCUIT;
		static const Item EMPTY_BARREL;
		static const Item ENERGY_SHIELD_EQUIPMENT;
		static const Item ENERGY_SHIELD_MK2_EQUIPMENT;
		static const Item ENGINE_UNIT;
		static const Item EXOSKELETON_EQUIPMENT;
		static const Item EXPLOSIVES;
		static const Item EXPRESS_LOADER;
		static const Item EXPRESS_SPLITTER;
		static const Item EXPRESS_TRANSPORT_BELT;
		static const Item EXPRESS_UNDERGROUND_BELT;
		static const Item FAST_INSERTER;
		static const Item FAST_LOADER;
		static const Item FAST_SPLITTER;
		static const Item FAST_TRANSPORT_BELT;
		static const Item FAST_UNDERGROUND_BELT;
		static const Item FILTER_INSERTER;
		static const Item FLAMETHROWER_TURRET;
		static const Item FLYING_ROBOT_FRAME;
		static const Item FUSION_REACTOR_EQUIPMENT;
		static const Item GATE;
		static const Item GREEN_WIRE;
		static const Item GUN_TURRET;
		static const Item HAZARD_CONCRETE;
		static const Item HEAT_EXCHANGER;
		static const Item HEAT_PIPE;
		static const Item HEAVY_OIL_BARREL;
		static const Item INFINITY_CHEST;
		static const Item INSERTER;
		static const Item IRON_CHEST;
		static const Item IRON_GEAR_WHEEL;
		static const Item IRON_ORE;
		static const Item IRON_PLATE;
		static const Item IRON_STICK;
		static const Item LAB;
		static const Item LAND_MINE;
		static const Item LANDFILL;
		static const Item LASER_TURRET;
		static const Item LIGHT_OIL_BARREL;
		static const Item LOADER;
		static const Item LOGISTIC_CHEST_ACTIVE_PROVIDER;
		static const Item LOGISTIC_CHEST_BUFFER;
		static const Item LOGISTIC_CHEST_PASSIVE_PROVIDER;
		static const Item LOGISTIC_CHEST_REQUESTER;
		static const Item LOGISTIC_CHEST_STORAGE;
		static const Item LOGISTIC_ROBOT;
		static const Item LONG_HANDED_INSERTER;
		static const Item LOW_DENSITY_STRUCTURE;
		static const Item LUBRICANT_BARREL;
		static const Item MEDIUM_ELECTRIC_POLE;
		static const Item NIGHT_VISION_EQUIPMENT;
		static const Item NUCLEAR_FUEL;
		static const Item NUCLEAR_REACTOR;
		static const Item OFFSHORE_PUMP;
		static const Item OIL_REFINERY;
		static const Item PERSONAL_LASER_DEFENSE_EQUIPMENT;
		static const Item PERSONAL_ROBOPORT_EQUIPMENT;
		static const Item PERSONAL_ROBOPORT_MK2_EQUIPMENT;
		static const Item PETROLEUM_GAS_BARREL;
		static const Item PIPE;
		static const Item PIPE_TO_GROUND;
		static const Item PLASTIC_BAR;
		static const Item PLAYER_PORT;
		static const Item POWER_SWITCH;
		static const Item PROCESSING_UNIT;
		static const Item PROGRAMMABLE_SPEAKER;
		static const Item PUMP;
		static const Item PUMPJACK;
		static const Item RADAR;
		static const Item RAIL_CHAIN_SIGNAL;
		static const Item RAIL_SIGNAL;
		static const Item RAW_WOOD;
		static const Item RED_WIRE;
		static const Item REFINED_CONCRETE;
		static const Item REFINED_HAZARD_CONCRETE;
		static const Item ROBOPORT;
		static const Item ROCKET_CONTROL_UNIT;
		static const Item ROCKET_FUEL;
		static const Item ROCKET_PART;
		static const Item ROCKET_SILO;
		static const Item SATELLITE;
		static const Item SIMPLE_ENTITY_WITH_FORCE;
		static const Item SIMPLE_ENTITY_WITH_OWNER;
		static const Item SMALL_ELECTRIC_POLE;
		static const Item SMALL_LAMP;
		static const Item SMALL_PLANE;
		static const Item SOLAR_PANEL;
		static const Item SOLAR_PANEL_EQUIPMENT;
		static const Item SOLID_FUEL;
		static const Item SPLITTER;
		static const Item STACK_FILTER_INSERTER;
		static const Item STACK_INSERTER;
		static const Item STEAM_ENGINE;
		static const Item STEAM_TURBINE;
		static const Item STEEL_CHEST;
		static const Item STEEL_FURNACE;
		static const Item STEEL_PLATE;
		static const Item STONE;
		static const Item STONE_BRICK;
		static const Item STONE_FURNACE;
		static const Item STONE_WALL;
		static const Item STORAGE_TANK;
		static const Item SUBSTATION;
		static const Item SULFUR;
		static const Item SULFURIC_ACID_BARREL;
		static const Item TRAIN_STOP;
		static const Item TRANSPORT_BELT;
		static const Item UNDERGROUND_BELT;
		static const Item URANIUM_235;
		static const Item URANIUM_238;
		static const Item URANIUM_FUEL_CELL;
		static const Item URANIUM_ORE;
		static const Item USED_UP_URANIUM_FUEL_CELL;
		static const Item WATER_BARREL;
		static const Item WOOD;
		static const Item WOODEN_CHEST;

	protected:

	private:
		Item(const char* name): Signal(name, CLASS_TYPE) {}
	};

	const std::string Item::CLASS_TYPE("item");

	const Item Item::ACCUMULATOR("accumulator");
	const Item Item::ADVANCED_CIRCUIT("advanced-circuit");
	const Item Item::ARITHMETIC_COMBINATOR("arithmetic-combinator");
	const Item Item::ARTILLERY_TURRET("artillery-turret");
	const Item Item::ASSEMBLING_MACHINE_1("assembling-machine-1");
	const Item Item::ASSEMBLING_MACHINE_2("assembling-machine-2");
	const Item Item::ASSEMBLING_MACHINE_3("assembling-machine-3");
	const Item Item::BATTERY("battery");
	const Item Item::BATTERY_EQUIPMENT("battery-equipment");
	const Item Item::BATTERY_MK2_EQUIPMENT("battery-mk2-equipment");
	const Item Item::BEACON("beacon");
	const Item Item::BELT_IMMUNITY_EQUIPMENT("belt-immunity-equipment");
	const Item Item::BIG_ELECTRIC_POLE("big-electric-pole");
	const Item Item::BOILER("boiler");
	const Item Item::BURNER_INSERTER("burner-inserter");
	const Item Item::BURNER_MINING_DRILL("burner-mining-drill");
	const Item Item::CENTRIFUGE("centrifuge");
	const Item Item::CHEMICAL_PLANT("chemical-plant");
	const Item Item::COAL("coal");
	const Item Item::COIN("coin");
	const Item Item::COMPUTER("computer");
	const Item Item::CONCRETE("concrete");
	const Item Item::CONSTANT_COMBINATOR("constant-combinator");
	const Item Item::CONSTRUCTION_ROBOT("construction-robot");
	const Item Item::COPPER_CABLE("copper-cable");
	const Item Item::COPPER_ORE("copper-ore");
	const Item Item::COPPER_PLATE("copper-plate");
	const Item Item::CRUDE_OIL_BARREL("crude-oil-barrel");
	const Item Item::DECIDER_COMBINATOR("decider-combinator");
	const Item Item::DISCHARGE_DEFENSE_EQUIPMENT("discharge-defense-equipment");
	const Item Item::ELECTRIC_ENERGY_INTERFACE("electric-energy-interface");
	const Item Item::ELECTRIC_ENGINE_UNIT("electric-engine-unit");
	const Item Item::ELECTRIC_FURNACE("electric-furnace");
	const Item Item::ELECTRIC_MINING_DRILL("electric-mining-drill");
	const Item Item::ELECTRONIC_CIRCUIT("electronic-circuit");
	const Item Item::EMPTY_BARREL("empty-barrel");
	const Item Item::ENERGY_SHIELD_EQUIPMENT("energy-shield-equipment");
	const Item Item::ENERGY_SHIELD_MK2_EQUIPMENT("energy-shield-mk2-equipment");
	const Item Item::ENGINE_UNIT("engine-unit");
	const Item Item::EXOSKELETON_EQUIPMENT("exoskeleton-equipment");
	const Item Item::EXPLOSIVES("explosives");
	const Item Item::EXPRESS_LOADER("express-loader");
	const Item Item::EXPRESS_SPLITTER("express-splitter");
	const Item Item::EXPRESS_TRANSPORT_BELT("express-transport-belt");
	const Item Item::EXPRESS_UNDERGROUND_BELT("express-underground-belt");
	const Item Item::FAST_INSERTER("fast-inserter");
	const Item Item::FAST_LOADER("fast-loader");
	const Item Item::FAST_SPLITTER("fast-splitter");
	const Item Item::FAST_TRANSPORT_BELT("fast-transport-belt");
	const Item Item::FAST_UNDERGROUND_BELT("fast-underground-belt");
	const Item Item::FILTER_INSERTER("filter-inserter");
	const Item Item::FLAMETHROWER_TURRET("flamethrower-turret");
	const Item Item::FLYING_ROBOT_FRAME("flying-robot-frame");
	const Item Item::FUSION_REACTOR_EQUIPMENT("fusion-reactor-equipment");
	const Item Item::GATE("gate");
	const Item Item::GREEN_WIRE("green-wire");
	const Item Item::GUN_TURRET("gun-turret");
	const Item Item::HAZARD_CONCRETE("hazard-concrete");
	const Item Item::HEAT_EXCHANGER("heat-exchanger");
	const Item Item::HEAT_PIPE("heat-pipe");
	const Item Item::HEAVY_OIL_BARREL("heavy-oil-barrel");
	const Item Item::INFINITY_CHEST("infinity-chest");
	const Item Item::INSERTER("inserter");
	const Item Item::IRON_CHEST("iron-chest");
	const Item Item::IRON_GEAR_WHEEL("iron-gear-wheel");
	const Item Item::IRON_ORE("iron-ore");
	const Item Item::IRON_PLATE("iron-plate");
	const Item Item::IRON_STICK("iron-stick");
	const Item Item::LAB("lab");
	const Item Item::LAND_MINE("land-mine");
	const Item Item::LANDFILL("landfill");
	const Item Item::LASER_TURRET("laser-turret");
	const Item Item::LIGHT_OIL_BARREL("light-oil-barrel");
	const Item Item::LOADER("loader");
	const Item Item::LOGISTIC_CHEST_ACTIVE_PROVIDER("logistic-chest-active-provider");
	const Item Item::LOGISTIC_CHEST_BUFFER("logistic-chest-buffer");
	const Item Item::LOGISTIC_CHEST_PASSIVE_PROVIDER("logistic-chest-passive-provider");
	const Item Item::LOGISTIC_CHEST_REQUESTER("logistic-chest-requester");
	const Item Item::LOGISTIC_CHEST_STORAGE("logistic-chest-storage");
	const Item Item::LOGISTIC_ROBOT("logistic-robot");
	const Item Item::LONG_HANDED_INSERTER("long-handed-inserter");
	const Item Item::LOW_DENSITY_STRUCTURE("low-density-structure");
	const Item Item::LUBRICANT_BARREL("lubricant-barrel");
	const Item Item::MEDIUM_ELECTRIC_POLE("medium-electric-pole");
	const Item Item::NIGHT_VISION_EQUIPMENT("night-vision-equipment");
	const Item Item::NUCLEAR_FUEL("nuclear-fuel");
	const Item Item::NUCLEAR_REACTOR("nuclear-reactor");
	const Item Item::OFFSHORE_PUMP("offshore-pump");
	const Item Item::OIL_REFINERY("oil-refinery");
	const Item Item::PERSONAL_LASER_DEFENSE_EQUIPMENT("personal-laser-defense-equipment");
	const Item Item::PERSONAL_ROBOPORT_EQUIPMENT("personal-roboport-equipment");
	const Item Item::PERSONAL_ROBOPORT_MK2_EQUIPMENT("personal-roboport-mk2-equipment");
	const Item Item::PETROLEUM_GAS_BARREL("petroleum-gas-barrel");
	const Item Item::PIPE("pipe");
	const Item Item::PIPE_TO_GROUND("pipe-to-ground");
	const Item Item::PLASTIC_BAR("plastic-bar");
	const Item Item::PLAYER_PORT("player-port");
	const Item Item::POWER_SWITCH("power-switch");
	const Item Item::PROCESSING_UNIT("processing-unit");
	const Item Item::PROGRAMMABLE_SPEAKER("programmable-speaker");
	const Item Item::PUMP("pump");
	const Item Item::PUMPJACK("pumpjack");
	const Item Item::RADAR("radar");
	const Item Item::RAIL_CHAIN_SIGNAL("rail-chain-signal");
	const Item Item::RAIL_SIGNAL("rail-signal");
	const Item Item::RAW_WOOD("raw-wood");
	const Item Item::RED_WIRE("red-wire");
	const Item Item::REFINED_CONCRETE("refined-concrete");
	const Item Item::REFINED_HAZARD_CONCRETE("refined-hazard-concrete");
	const Item Item::ROBOPORT("roboport");
	const Item Item::ROCKET_CONTROL_UNIT("rocket-control-unit");
	const Item Item::ROCKET_FUEL("rocket-fuel");
	const Item Item::ROCKET_PART("rocket-part");
	const Item Item::ROCKET_SILO("rocket-silo");
	const Item Item::SATELLITE("satellite");
	const Item Item::SIMPLE_ENTITY_WITH_FORCE("simple-entity-with-force");
	const Item Item::SIMPLE_ENTITY_WITH_OWNER("simple-entity-with-owner");
	const Item Item::SMALL_ELECTRIC_POLE("small-electric-pole");
	const Item Item::SMALL_LAMP("small-lamp");
	const Item Item::SMALL_PLANE("small-plane");
	const Item Item::SOLAR_PANEL("solar-panel");
	const Item Item::SOLAR_PANEL_EQUIPMENT("solar-panel-equipment");
	const Item Item::SOLID_FUEL("solid-fuel");
	const Item Item::SPLITTER("splitter");
	const Item Item::STACK_FILTER_INSERTER("stack-filter-inserter");
	const Item Item::STACK_INSERTER("stack-inserter");
	const Item Item::STEAM_ENGINE("steam-engine");
	const Item Item::STEAM_TURBINE("steam-turbine");
	const Item Item::STEEL_CHEST("steel-chest");
	const Item Item::STEEL_FURNACE("steel-furnace");
	const Item Item::STEEL_PLATE("steel-plate");
	const Item Item::STONE("stone");
	const Item Item::STONE_BRICK("stone-brick");
	const Item Item::STONE_FURNACE("stone-furnace");
	const Item Item::STONE_WALL("stone-wall");
	const Item Item::STORAGE_TANK("storage-tank");
	const Item Item::SUBSTATION("substation");
	const Item Item::SULFUR("sulfur");
	const Item Item::SULFURIC_ACID_BARREL("sulfuric-acid-barrel");
	const Item Item::TRAIN_STOP("train-stop");
	const Item Item::TRANSPORT_BELT("transport-belt");
	const Item Item::UNDERGROUND_BELT("underground-belt");
	const Item Item::URANIUM_235("uranium-235");
	const Item Item::URANIUM_238("uranium-238");
	const Item Item::URANIUM_FUEL_CELL("uranium-fuel-cell");
	const Item Item::URANIUM_ORE("uranium-ore");
	const Item Item::USED_UP_URANIUM_FUEL_CELL("used-up-uranium-fuel-cell");
	const Item Item::WATER_BARREL("water-barrel");
	const Item Item::WOOD("wood");
	const Item Item::WOODEN_CHEST("wooden-chest");



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

#endif // SIGNALS_H
