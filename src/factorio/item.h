#ifndef ITEM_H
#define ITEM_H

#include <string>

namespace factorio
{
	class Item: public std::string
	{
		public:
			static const Item accumulator;
			static const Item advanced_circuit;
			static const Item arithmetic_combinator;
			static const Item artillery_turret;
			static const Item assembling_machine_1;
			static const Item assembling_machine_2;
			static const Item assembling_machine_3;
			static const Item battery;
			static const Item battery_equipment;
			static const Item battery_mk2_equipment;
			static const Item beacon;
			static const Item belt_immunity_equipment;
			static const Item big_electric_pole;
			static const Item boiler;
			static const Item burner_inserter;
			static const Item burner_mining_drill;
			static const Item centrifuge;
			static const Item chemical_plant;
			static const Item coal;
			static const Item coin;
			static const Item computer;
			static const Item concrete;
			static const Item constant_combinator;
			static const Item construction_robot;
			static const Item copper_cable;
			static const Item copper_ore;
			static const Item copper_plate;
			static const Item crude_oil_barrel;
			static const Item decider_combinator;
			static const Item discharge_defense_equipment;
			static const Item electric_energy_interface;
			static const Item electric_engine_unit;
			static const Item electric_furnace;
			static const Item electric_mining_drill;
			static const Item electronic_circuit;
			static const Item empty_barrel;
			static const Item energy_shield_equipment;
			static const Item energy_shield_mk2_equipment;
			static const Item engine_unit;
			static const Item exoskeleton_equipment;
			static const Item explosives;
			static const Item express_loader;
			static const Item express_splitter;
			static const Item express_transport_belt;
			static const Item express_underground_belt;
			static const Item fast_inserter;
			static const Item fast_loader;
			static const Item fast_splitter;
			static const Item fast_transport_belt;
			static const Item fast_underground_belt;
			static const Item filter_inserter;
			static const Item flamethrower_turret;
			static const Item flying_robot_frame;
			static const Item fusion_reactor_equipment;
			static const Item gate;
			static const Item green_wire;
			static const Item gun_turret;
			static const Item hazard_concrete;
			static const Item heat_exchanger;
			static const Item heat_pipe;
			static const Item heavy_oil_barrel;
			static const Item infinity_chest;
			static const Item inserter;
			static const Item iron_chest;
			static const Item iron_gear_wheel;
			static const Item iron_ore;
			static const Item iron_plate;
			static const Item iron_stick;
			static const Item lab;
			static const Item land_mine;
			static const Item landfill;
			static const Item laser_turret;
			static const Item light_oil_barrel;
			static const Item loader;
			static const Item logistic_chest_active_provider;
			static const Item logistic_chest_buffer;
			static const Item logistic_chest_passive_provider;
			static const Item logistic_chest_requester;
			static const Item logistic_chest_storage;
			static const Item logistic_robot;
			static const Item long_handed_inserter;
			static const Item low_density_structure;
			static const Item lubricant_barrel;
			static const Item medium_electric_pole;
			static const Item night_vision_equipment;
			static const Item nuclear_fuel;
			static const Item nuclear_reactor;
			static const Item offshore_pump;
			static const Item oil_refinery;
			static const Item personal_laser_defense_equipment;
			static const Item personal_roboport_equipment;
			static const Item personal_roboport_mk2_equipment;
			static const Item petroleum_gas_barrel;
			static const Item pipe;
			static const Item pipe_to_ground;
			static const Item plastic_bar;
			static const Item player_port;
			static const Item power_switch;
			static const Item processing_unit;
			static const Item programmable_speaker;
			static const Item pump;
			static const Item pumpjack;
			static const Item radar;
			static const Item rail_chain_signal;
			static const Item rail_signal;
			static const Item raw_wood;
			static const Item red_wire;
			static const Item refined_concrete;
			static const Item refined_hazard_concrete;
			static const Item roboport;
			static const Item rocket_control_unit;
			static const Item rocket_fuel;
			static const Item rocket_part;
			static const Item rocket_silo;
			static const Item satellite;
			static const Item simple_entity_with_force;
			static const Item simple_entity_with_owner;
			static const Item small_electric_pole;
			static const Item small_lamp;
			static const Item small_plane;
			static const Item solar_panel;
			static const Item solar_panel_equipment;
			static const Item solid_fuel;
			static const Item splitter;
			static const Item stack_filter_inserter;
			static const Item stack_inserter;
			static const Item steam_engine;
			static const Item steam_turbine;
			static const Item steel_chest;
			static const Item steel_furnace;
			static const Item steel_plate;
			static const Item stone;
			static const Item stone_brick;
			static const Item stone_furnace;
			static const Item stone_wall;
			static const Item storage_tank;
			static const Item substation;
			static const Item sulfur;
			static const Item sulfuric_acid_barrel;
			static const Item train_stop;
			static const Item transport_belt;
			static const Item underground_belt;
			static const Item uranium_235;
			static const Item uranium_238;
			static const Item uranium_fuel_cell;
			static const Item uranium_ore;
			static const Item used_up_uranium_fuel_cell;
			static const Item water_barrel;
			static const Item wood;
			static const Item wooden_chest;

		protected:

		private:
			using std::string::string;
	};
}

const factorio::Item factorio::Item::accumulator("accumulator");
const factorio::Item factorio::Item::advanced_circuit("advanced-circuit");
const factorio::Item factorio::Item::arithmetic_combinator("arithmetic-combinator");
const factorio::Item factorio::Item::artillery_turret("artillery-turret");
const factorio::Item factorio::Item::assembling_machine_1("assembling-machine-1");
const factorio::Item factorio::Item::assembling_machine_2("assembling-machine-2");
const factorio::Item factorio::Item::assembling_machine_3("assembling-machine-3");
const factorio::Item factorio::Item::battery("battery");
const factorio::Item factorio::Item::battery_equipment("battery-equipment");
const factorio::Item factorio::Item::battery_mk2_equipment("battery-mk2-equipment");
const factorio::Item factorio::Item::beacon("beacon");
const factorio::Item factorio::Item::belt_immunity_equipment("belt-immunity-equipment");
const factorio::Item factorio::Item::big_electric_pole("big-electric-pole");
const factorio::Item factorio::Item::boiler("boiler");
const factorio::Item factorio::Item::burner_inserter("burner-inserter");
const factorio::Item factorio::Item::burner_mining_drill("burner-mining-drill");
const factorio::Item factorio::Item::centrifuge("centrifuge");
const factorio::Item factorio::Item::chemical_plant("chemical-plant");
const factorio::Item factorio::Item::coal("coal");
const factorio::Item factorio::Item::coin("coin");
const factorio::Item factorio::Item::computer("computer");
const factorio::Item factorio::Item::concrete("concrete");
const factorio::Item factorio::Item::constant_combinator("constant-combinator");
const factorio::Item factorio::Item::construction_robot("construction-robot");
const factorio::Item factorio::Item::copper_cable("copper-cable");
const factorio::Item factorio::Item::copper_ore("copper-ore");
const factorio::Item factorio::Item::copper_plate("copper-plate");
const factorio::Item factorio::Item::crude_oil_barrel("crude-oil-barrel");
const factorio::Item factorio::Item::decider_combinator("decider-combinator");
const factorio::Item factorio::Item::discharge_defense_equipment("discharge-defense-equipment");
const factorio::Item factorio::Item::electric_energy_interface("electric-energy-interface");
const factorio::Item factorio::Item::electric_engine_unit("electric-engine-unit");
const factorio::Item factorio::Item::electric_furnace("electric-furnace");
const factorio::Item factorio::Item::electric_mining_drill("electric-mining-drill");
const factorio::Item factorio::Item::electronic_circuit("electronic-circuit");
const factorio::Item factorio::Item::empty_barrel("empty-barrel");
const factorio::Item factorio::Item::energy_shield_equipment("energy-shield-equipment");
const factorio::Item factorio::Item::energy_shield_mk2_equipment("energy-shield-mk2-equipment");
const factorio::Item factorio::Item::engine_unit("engine-unit");
const factorio::Item factorio::Item::exoskeleton_equipment("exoskeleton-equipment");
const factorio::Item factorio::Item::explosives("explosives");
const factorio::Item factorio::Item::express_loader("express-loader");
const factorio::Item factorio::Item::express_splitter("express-splitter");
const factorio::Item factorio::Item::express_transport_belt("express-transport-belt");
const factorio::Item factorio::Item::express_underground_belt("express-underground-belt");
const factorio::Item factorio::Item::fast_inserter("fast-inserter");
const factorio::Item factorio::Item::fast_loader("fast-loader");
const factorio::Item factorio::Item::fast_splitter("fast-splitter");
const factorio::Item factorio::Item::fast_transport_belt("fast-transport-belt");
const factorio::Item factorio::Item::fast_underground_belt("fast-underground-belt");
const factorio::Item factorio::Item::filter_inserter("filter-inserter");
const factorio::Item factorio::Item::flamethrower_turret("flamethrower-turret");
const factorio::Item factorio::Item::flying_robot_frame("flying-robot-frame");
const factorio::Item factorio::Item::fusion_reactor_equipment("fusion-reactor-equipment");
const factorio::Item factorio::Item::gate("gate");
const factorio::Item factorio::Item::green_wire("green-wire");
const factorio::Item factorio::Item::gun_turret("gun-turret");
const factorio::Item factorio::Item::hazard_concrete("hazard-concrete");
const factorio::Item factorio::Item::heat_exchanger("heat-exchanger");
const factorio::Item factorio::Item::heat_pipe("heat-pipe");
const factorio::Item factorio::Item::heavy_oil_barrel("heavy-oil-barrel");
const factorio::Item factorio::Item::infinity_chest("infinity-chest");
const factorio::Item factorio::Item::inserter("inserter");
const factorio::Item factorio::Item::iron_chest("iron-chest");
const factorio::Item factorio::Item::iron_gear_wheel("iron-gear-wheel");
const factorio::Item factorio::Item::iron_ore("iron-ore");
const factorio::Item factorio::Item::iron_plate("iron-plate");
const factorio::Item factorio::Item::iron_stick("iron-stick");
const factorio::Item factorio::Item::lab("lab");
const factorio::Item factorio::Item::land_mine("land-mine");
const factorio::Item factorio::Item::landfill("landfill");
const factorio::Item factorio::Item::laser_turret("laser-turret");
const factorio::Item factorio::Item::light_oil_barrel("light-oil-barrel");
const factorio::Item factorio::Item::loader("loader");
const factorio::Item factorio::Item::logistic_chest_active_provider("logistic-chest-active-provider");
const factorio::Item factorio::Item::logistic_chest_buffer("logistic-chest-buffer");
const factorio::Item factorio::Item::logistic_chest_passive_provider("logistic-chest-passive-provider");
const factorio::Item factorio::Item::logistic_chest_requester("logistic-chest-requester");
const factorio::Item factorio::Item::logistic_chest_storage("logistic-chest-storage");
const factorio::Item factorio::Item::logistic_robot("logistic-robot");
const factorio::Item factorio::Item::long_handed_inserter("long-handed-inserter");
const factorio::Item factorio::Item::low_density_structure("low-density-structure");
const factorio::Item factorio::Item::lubricant_barrel("lubricant-barrel");
const factorio::Item factorio::Item::medium_electric_pole("medium-electric-pole");
const factorio::Item factorio::Item::night_vision_equipment("night-vision-equipment");
const factorio::Item factorio::Item::nuclear_fuel("nuclear-fuel");
const factorio::Item factorio::Item::nuclear_reactor("nuclear-reactor");
const factorio::Item factorio::Item::offshore_pump("offshore-pump");
const factorio::Item factorio::Item::oil_refinery("oil-refinery");
const factorio::Item factorio::Item::personal_laser_defense_equipment("personal-laser-defense-equipment");
const factorio::Item factorio::Item::personal_roboport_equipment("personal-roboport-equipment");
const factorio::Item factorio::Item::personal_roboport_mk2_equipment("personal-roboport-mk2-equipment");
const factorio::Item factorio::Item::petroleum_gas_barrel("petroleum-gas-barrel");
const factorio::Item factorio::Item::pipe("pipe");
const factorio::Item factorio::Item::pipe_to_ground("pipe-to-ground");
const factorio::Item factorio::Item::plastic_bar("plastic-bar");
const factorio::Item factorio::Item::player_port("player-port");
const factorio::Item factorio::Item::power_switch("power-switch");
const factorio::Item factorio::Item::processing_unit("processing-unit");
const factorio::Item factorio::Item::programmable_speaker("programmable-speaker");
const factorio::Item factorio::Item::pump("pump");
const factorio::Item factorio::Item::pumpjack("pumpjack");
const factorio::Item factorio::Item::radar("radar");
const factorio::Item factorio::Item::rail_chain_signal("rail-chain-signal");
const factorio::Item factorio::Item::rail_signal("rail-signal");
const factorio::Item factorio::Item::raw_wood("raw-wood");
const factorio::Item factorio::Item::red_wire("red-wire");
const factorio::Item factorio::Item::refined_concrete("refined-concrete");
const factorio::Item factorio::Item::refined_hazard_concrete("refined-hazard-concrete");
const factorio::Item factorio::Item::roboport("roboport");
const factorio::Item factorio::Item::rocket_control_unit("rocket-control-unit");
const factorio::Item factorio::Item::rocket_fuel("rocket-fuel");
const factorio::Item factorio::Item::rocket_part("rocket-part");
const factorio::Item factorio::Item::rocket_silo("rocket-silo");
const factorio::Item factorio::Item::satellite("satellite");
const factorio::Item factorio::Item::simple_entity_with_force("simple-entity-with-force");
const factorio::Item factorio::Item::simple_entity_with_owner("simple-entity-with-owner");
const factorio::Item factorio::Item::small_electric_pole("small-electric-pole");
const factorio::Item factorio::Item::small_lamp("small-lamp");
const factorio::Item factorio::Item::small_plane("small-plane");
const factorio::Item factorio::Item::solar_panel("solar-panel");
const factorio::Item factorio::Item::solar_panel_equipment("solar-panel-equipment");
const factorio::Item factorio::Item::solid_fuel("solid-fuel");
const factorio::Item factorio::Item::splitter("splitter");
const factorio::Item factorio::Item::stack_filter_inserter("stack-filter-inserter");
const factorio::Item factorio::Item::stack_inserter("stack-inserter");
const factorio::Item factorio::Item::steam_engine("steam-engine");
const factorio::Item factorio::Item::steam_turbine("steam-turbine");
const factorio::Item factorio::Item::steel_chest("steel-chest");
const factorio::Item factorio::Item::steel_furnace("steel-furnace");
const factorio::Item factorio::Item::steel_plate("steel-plate");
const factorio::Item factorio::Item::stone("stone");
const factorio::Item factorio::Item::stone_brick("stone-brick");
const factorio::Item factorio::Item::stone_furnace("stone-furnace");
const factorio::Item factorio::Item::stone_wall("stone-wall");
const factorio::Item factorio::Item::storage_tank("storage-tank");
const factorio::Item factorio::Item::substation("substation");
const factorio::Item factorio::Item::sulfur("sulfur");
const factorio::Item factorio::Item::sulfuric_acid_barrel("sulfuric-acid-barrel");
const factorio::Item factorio::Item::train_stop("train-stop");
const factorio::Item factorio::Item::transport_belt("transport-belt");
const factorio::Item factorio::Item::underground_belt("underground-belt");
const factorio::Item factorio::Item::uranium_235("uranium-235");
const factorio::Item factorio::Item::uranium_238("uranium-238");
const factorio::Item factorio::Item::uranium_fuel_cell("uranium-fuel-cell");
const factorio::Item factorio::Item::uranium_ore("uranium-ore");
const factorio::Item factorio::Item::used_up_uranium_fuel_cell("used-up-uranium-fuel-cell");
const factorio::Item factorio::Item::water_barrel("water-barrel");
const factorio::Item factorio::Item::wood("wood");
const factorio::Item factorio::Item::wooden_chest("wooden-chest");

#endif // ITEM_H
