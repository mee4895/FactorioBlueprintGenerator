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
}

#endif // SIGNALS_H
