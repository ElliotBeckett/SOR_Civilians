/*
	Name: 160th SOR Mod (cfgArmour.hpp)
	Author: Elliot Beckett
	Date: 01/04/17 
	Description:cfgArmour.hpp 
	Note: Only Armour units that are proven not "buggy" should be put in here.
*/
class B_Quadbike_01_F;
class rhsusf_mrzr4_d;
class B_LSV_01_armed_F;

// mrzr4 MARSOC Patrol Vehicle
class SOR_MARSOC_mrzr4 : rhsusf_mrzr4_d
{

	editorCategory = "SOR_MARSOC_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_MARSOC_Faction_D;
	displayName = "MARSOC Light Patrol Vehicle";
	ace_cargo_space = 6;
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,20);
		item_xx(ACE_EntrenchingTool,1);	
	};
	class TransportWeapons{};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,10)
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,2)
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,2)
		mag_xx(rhsusf_20Rnd_762x51_m62_Mag,5)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)			
	};
};


class SOR_MARSOC_Prowler : B_LSV_01_armed_F
{

	editorCategory = "SOR_MARSOC_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_MARSOC_Faction_D;
	displayName = "MARSOC Prowler";
	ace_cargo_space = 6;
	class TransportItems 
	{
		item_xx(ACE_FieldDressing,20);
		item_xx(ACE_EntrenchingTool,1);	
	};
	class TransportWeapons{};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,10)
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,2)
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,2)
		mag_xx(rhsusf_20Rnd_762x51_m62_Mag,5)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_Repair_Pack_veh_D,1)			
	};
};

class SOR_MARSOC_Quad : B_Quadbike_01_F
{
	editorCategory = "SOR_MARSOC_Cat_Faction_D";
	vehicleclass = "SOR_Vehicles";
	faction = SOR_MARSOC_Faction_D;
	displayName = "MARSOC Quad";
	ace_cargo_space = 0;
	class TransportItems {};
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};
};