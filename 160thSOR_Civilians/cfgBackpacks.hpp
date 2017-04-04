/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 25/03/16
	Description: cfgBackpacks.hpp
*/

//Custom Backpacks
class rhsusf_assault_eagleaiii_coy;
class tf_anarc210;


//Custom Medic Pack	
class SOR_MARSOC_Medic_Pack : rhsusf_assault_eagleaiii_coy
{
	displayName = "Pack MARSOC Medic";
	class TransportMagazines
	{
		mag_xx(rhs_mag_an_m8hc,12);
	};		
	class TransportItems
	{
		item_xx(ACE_FieldDressing,30);
		item_xx(ACE_morphine,10);
		item_xx(ACE_epinephrine,10);
	};
};

//Custom Parajumper Pack		
class SOR_MARSOC_PJMedicPack : rhsusf_assault_eagleaiii_coy
{
	displayName = "Pack MARSOC Paramedic";
	class TransportMagazines
	{
		mag_xx(rhs_mag_an_m8hc,7);
	};
	class TransportItems
	{
		item_xx(ACE_bloodIV,6);
		item_xx(ACE_FieldDressing,30);
		item_xx(ACE_morphine,20);
		item_xx(ACE_epinephrine,20);
	};		
};

//Custom Rifleman Pack
class SOR_MARSOC_Ammo_Pack_M249 : rhsusf_assault_eagleaiii_coy
{
	displayName = "Pack MARSOC Rifleman (M249)";
	class TransportMagazines
	{
		mag_xx(200Rnd_556x45_Box_Tracer_Red_F,1);
	};
};

//Custom Rilfeman Ammobearer Pack
class SOR_MARSOC_Ammo_Pack_M240 : rhsusf_assault_eagleaiii_coy
{
	displayName = "Pack MARSOC Rifleman (M240)";
	class TransportMagazines
	{
		mag_xx(SOR_rhsusf_100Rnd_762x51_m62_tracer,1);
	};
};


//Repair Pack With Toolkit	
class SOR_MARSOC_Repair_Pack : rhsusf_assault_eagleaiii_coy
{
	displayName = "Pack MARSOC Repair";
	class TransportItems
	{
		item_xx(Toolkit,1);
		
	};
	class TransportMagazines
	{
		mag_xx(rhs_mag_an_m8hc,2);
	};
};

//Custom Grenadier Pack	
class SOR_MARSOC_GD_Pack : rhsusf_assault_eagleaiii_coy
{
	displayName = "Pack MARSOC GD";
	class TransportMagazines
	{
		mag_xx(1Rnd_HE_Grenade_shell,15);
		mag_xx(1Rnd_SmokeRed_Grenade_shell,5);
		mag_xx(rhs_mag_m18_green,2);
		mag_xx(rhs_mag_m67,2);
		mag_xx(1Rnd_Smoke_Grenade_shell,5);
	};	
};

//Custom RTO Pack	
class SOR_MARSOC_RTO_Pack : tf_anarc210
{
	displayName = "Pack MARSOC RTO";
	class TransportMagazines
	{
		mag_xx(1Rnd_SmokeRed_Grenade_shell,8);
		mag_xx(1Rnd_SmokeGreen_Grenade_shell,2);
		mag_xx(1Rnd_Smoke_Grenade_shell,2);
	};	
};

//Custom Rifleman AT Pack	
class SOR_MARSOC_AT_Pack : rhsusf_assault_eagleaiii_coy
{
	displayName = "Pack MARSOC AT";
	class TransportMagazines
	{
		mag_xx(rhs_mag_smaw_HEDP,2)
	
	};
};

//Custom Sniper Pack	
class SOR_MARSOC_Sniper: rhsusf_assault_eagleaiii_coy
{
	displayName = "Pack MARSOC Sniper";
	class TransportItems
	{
		item_xx(ACE_FieldDressing,4);
		item_xx(ACE_bloodIV_500,1);
	};
	class TransportMagazines
	{
		mag_xx(rhs_mag_m18_red,2);
		mag_xx(rhs_mag_rdg2_black,1);
		mag_xx(rhs_mag_an_m8hc,2);
	};
};

//Custom Spotter Pack	
class SOR_MARSOC_Spotter_Radio : tf_anarc210
{
	displayName = "Pack MARSOC Radio Spotter";
	class TransportItems{};
	class TransportMagazines
	{
		mag_xx(rhs_mag_rdg2_black,1);
		mag_xx(rhs_mag_an_m8hc,1);
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,4);
	};
};

//Custom Mech Crew Commander Pack	
class SOR_MARSOC_Mech_Radio : tf_anarc210
{
	displayName = "Pack MARSOC Radio Commander";
	class TransportItems{};
	class TransportMagazines
	{
		mag_xx(rhs_mag_rdg2_black,2);
		mag_xx(rhs_mag_an_m8hc,2);
	};
};

//Custom Engineer Repair Pack	
class SOR_MARSOC_Eng_Repair_Pack : rhsusf_assault_eagleaiii_coy
{
	displayName = "Pack MARSOC Eng Repair";
	class TransportMagazines{};
	class TransportItems
	{
		item_xx(ACE_wirecutter,1);
		item_xx(Toolkit,1);		
	};		
};	

//Custom Engineer Ordanance Pack		
class SOR_MARSOC_OrdanancePack : rhsusf_assault_eagleaiii_coy
{
	displayName = "Pack MARSOC Ordanance";
	class TransportMagazines{};
	class TransportItems
	{
		item_xx(MineDetector,1);
		item_xx(ACE_DefusalKit,1);
		item_xx(ACE_Clacker,1);
		item_xx(rhsusf_m112_mag,4);			
	};		
};

//Custom Engineer Combat Pack		
class SOR_MARSOC_CombatPack : rhsusf_assault_eagleaiii_coy
{
	displayName = "Pack MARSOC Eng Combat";
	class TransportMagazines
	{
		mag_xx(rhs_mag_an_m8hc,2);
		mag_xx(rhs_mag_rdg2_black,2);
		mag_xx(30Rnd_556x45_Stanag_Tracer_Red,6);
		mag_xx(rhs_mag_mk3a2,2);				
	};
	class TransportItems
	{
		item_xx(rhsusf_acc_ACOG,1)			
	};		
};


