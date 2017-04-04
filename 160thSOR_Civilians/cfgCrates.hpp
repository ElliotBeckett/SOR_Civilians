/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 28/09/15 02:05
	Description: cfgCrates.hpp
*/

class SOR_PJ_Pack_Box_F;
class SOR_A_Box_F;
class SOR_Launcher_Box_F;
class SOR_Box_NATO_WpsSpecial_F;
class SOR_Box_NATO_WpsSpecial_F_Training;
class SOR_A_Crate_F;
class SOR_AM_Crate_F;

/////////////////
//Static stores//
/////////////////

class SOR_MARSOC_PJ_Pack_Box_F : SOR_PJ_Pack_Box_F
{
	editorCategory = "SOR_MARSOC_Cat_Supplies";	
	faction = SOR_MARSOC_Faction_CRATE;		
	displayName = "Box PJ Pack Storage [Static] (MARSOC)";
	class TransportItems{};		
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks
	{
		pack_xx(SOR_MARSOC_PJMedicPack,7)
	};
};	


///////////////////////
//Hand Liftable Boxes//
///////////////////////

// Ammo Box	
class SOR_MARSOC_A_Box_F: SOR_A_Box_F
{
	editorCategory = "SOR_MARSOC_Cat_Supplies";
	faction = SOR_MARSOC_Faction_CRATE;		
	displayName = "Box [Ammo] (MARSOC)";
	class TransportItems{};
	class TransportWeapons{};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,40)
		mag_xx(rhsusf_20Rnd_762x51_m62_Mag,20)
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,5)	
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,5)
		mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,10)
	};
	class TransportBackpacks{};
};	

// Launchers	
class SOR_MARSOC_Launcher_Box_F : SOR_Launcher_Box_F
{
	editorCategory = "SOR_MARSOC_Cat_Supplies";
	faction = SOR_MARSOC_Faction_CRATE;		
	displayName = "Box [AT Launchers] (MARSOC)";
	class TransportItems{};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,6);
		weap_xx(SOR_MARSOC_weap_Smaw,2);
	};	
	class TransportMagazines{};
	class TransportBackpacks{
		
		pack_xx(SOR_MARSOC_AT_Pack,2)
	};
};	

//Special weapons boxes//
class SOR_MARSOC_Box_NATO_WpsSpecial_F : SOR_Box_NATO_WpsSpecial_F 
{
	editorCategory = "SOR_MARSOC_Cat_Supplies";	
	faction = SOR_MARSOC_Faction_CRATE;		
	displayName = "Recon Resupply [Ammo&Equipment] (MARSOC)";
	class TransportItems
	{
		item_xx(optic_AMS,6);
		item_xx(rhsusf_acc_eotech_552_d,6);
		item_xx(rhsusf_acc_SpecterDR_D,6);
	};	
	class TransportWeapons
	{
		weap_xx(lerca_1200_black,6)			
	};
	class TransportMagazines
	{
		mag_xx(rhsusf_20Rnd_762x51_m62_Mag,10)
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,20)
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,3)
		mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,12)
		mag_xx(Laserbatteries,4)
	};
	class TransportBackpacks{};
};		

class SOR_MARSOC_Box_NATO_WpsSpecial_F_Training : SOR_Box_NATO_WpsSpecial_F_Training
{
	editorCategory = "SOR_MARSOC_Cat_Supplies";	
	faction = SOR_MARSOC_Faction_CRATE;		
	displayName = "MARSOC Accessories";
	class TransportItems
	{
		item_xx(optic_AMS,4);
		item_xx(rhsusf_acc_eotech_552_d,12);
		item_xx(rhsusf_acc_SpecterDR_D,12);
		item_xx(rhsusf_acc_ACOG,12);
		item_xx(rhsusf_acc_anpeq15side,12);
		item_xx(rhsusf_acc_nt4_black,12);
		item_xx(rhsusf_acc_harris_bipod,12);
		item_xx(ItemMicroDAGR,15);
		item_xx(ItemcTab,15);
	};	
	class TransportWeapons{};
	class TransportMagazines{};
	class TransportBackpacks{};
};		

///////////////////////////
// Sling loadable Crates //
///////////////////////////

// Ammo Crate		
class SOR_MARSOC_A_Crate_F : SOR_A_Crate_F
{
	editorCategory = "SOR_MARSOC_Cat_Supplies";
	faction = SOR_MARSOC_Faction_CRATE;
	displayName = "Crate [Ammo] (MARSOC)";
	icon = "iconCrateAmmo";
	class TransportItems{};
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,16)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,200)
		mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,40)
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,16)	
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,16)
		mag_xx(rhsusf_20Rnd_762x51_m62_Mag,100)
		mag_xx(1Rnd_HE_Grenade_shell,20)			
		mag_xx(1Rnd_Smoke_Grenade_shell,20)			
		mag_xx(1Rnd_SmokeRed_Grenade_shell,20)	
		mag_xx(rhs_mag_m67,40)
		mag_xx(rhs_mag_an_m8hc,40)
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,40)
	};
	class TransportBackpacks{};
};

// All in one Crate		
class SOR_MARSOC_AM_Crate_F : SOR_AM_Crate_F 
{
	editorCategory = "SOR_MARSOC_Cat_Supplies";
	faction = SOR_MARSOC_Faction_CRATE;
	displayName = "Crate [Ammo&Med] (MARSOC)";
	icon = "iconCrateAmmo";
	class TransportItems
	{
		item_xx(ACE_CableTie,10)
		item_xx(ACE_FieldDressing,200);
		item_xx(ACE_morphine,100);
	};		
	class TransportWeapons
	{
		weap_xx(rhs_weap_M136_hp,8)
		weap_xx(SOR_MARSOC_weap_Smaw,4)
	};
	class TransportMagazines
	{
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,200)
		mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,40)
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,16)	
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,16)
		mag_xx(rhsusf_20Rnd_762x51_m62_Mag,100)	
		mag_xx(1Rnd_HE_Grenade_shell,20)
		mag_xx(1Rnd_Smoke_Grenade_shell,20)			
		mag_xx(1Rnd_SmokeRed_Grenade_shell,20)	
		mag_xx(rhs_mag_m67,40)
		mag_xx(rhs_mag_an_m8hc,40)
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,40)
	};
	class TransportBackpacks
	{
		pack_xx(SOR_MARSOC_Medic_Pack,6)
		pack_xx(SOR_MARSOC_AT_Pack,4)
		
	};
};




