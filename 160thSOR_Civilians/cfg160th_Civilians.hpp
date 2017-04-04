/*
	Name: 160th SOR Mod
	Author: Elliot Beckett
	Date: 04/04/17
	Description: cfg160th_Civilians.hpp
*/

//////////////////////		
//Base Soldier Class//
//////////////////////

class Civilian_F;

//Un-armed
class SOR_Civilians_base_unarmed : Civilian_F				
{															
	scope = 0;		
	scopeCurator = 0;
	displayName = "SOR Base Civilian (Un-armed)";
	editorCategory = "SOR_Civilians_Cat_Faction";
	editorSubcategory = "SOR_SubCat_Civilians_Mid_East_Unarmed";
	vehicleclass = "SOR_Civilians_Mid_East_Unarmed";
	faction = SOR_Civilians_Faction;
	identityTypes[] =  {"LanguagePER_F","Head_TK","Head_Tanoan","G_GUERIL_default"};// Added to make AI more "Middle Eastern" with a random mix
	genericNames = "TakistaniMen";
	class eventHandlers
	{
		init="call SOR_Civilians_fnc_careless; civilian setFriend [blufor, 1]; blufor setFriend [civilian,1]";	
	};	
};

//armed

class SOR_Civilians_base_armed : Civilian_F				
{															
	scope = 0;		
	copeCurator = 0;
	displayName = "SOR Base Civilian (Armed)";
	editorCategory = "SOR_Civilians_Cat_Faction";
	editorSubcategory = "SOR_SubCat_Civilians_Mid_East_Armed";
	vehicleclass = "SOR_Civilians_Mid_East_Armed";
	faction = SOR_Civilians_Faction;
	identityTypes[] =  {"LanguagePER_F","Head_TK","Head_Tanoan","G_GUERIL_default"};// Added to make AI more "Middle Eastern" with a random mix
	genericNames = "TakistaniMen";
	//aiBrainType = "SORSoldierBrain";
	class eventHandlers
	{
		init="civilian setFriend [blufor, 1];";	
	};	
};

class SOR_Civilians_base_hostile : Civilian_F				
{															
	scope = 0;		
	copeCurator = 0;
	displayName = "SOR Base Civilian (Hostile)";
	editorCategory = "SOR_Civilians_Cat_Faction";
	editorSubcategory = "SOR_SubCat_Civilians_Mid_East_Hostile";
	vehicleclass = "SOR_Civilians_Mid_East_Hostile";
	faction = SOR_Civilians_Faction;
	identityTypes[] =  {"LanguagePER_F","Head_TK","Head_Tanoan","G_GUERIL_default"};// Added to make AI more "Middle Eastern" with a random mix
	genericNames = "TakistaniMen";
	//aiBrainType = "SORSoldierBrain";
	accuracy = 3.5;
	class eventHandlers
	{
		init="civilian setFriend [blufor, 0.4];";	
	};	
};




////////////////////////////////////		    
//  SOR Civilian Faction Units   //
//////////////////////////////////

//Armed Civs
class SOR_Civilians_warlord : SOR_Civilians_base_unarmed
{
	//editorPreview = "\160thSOR\data\SOR_Actual_D.jpg";
	scope = 2;		
	scopeCurator = 2;
	displayName = "War Lord"
	uniformClass = "LOP_U_TAK_Civ_Fatigue_09";
	weapons[] = {"SOR_Civilian_weap_aks74un","Throw","Put","Binocular"};
	respawnWeapons[] = {"SOR_Civilian_weap_aks74un","Throw","Put","Binocular"};
	Items[] = {"ACE_Cellphone",Standard_Meds,SL_Equip};  
	RespawnItems[] = {"ACE_Cellphone",Standard_Meds,SL_Equip}; 
	magazines[] = 
	{
		"rhs_30Rnd_545x39_AK",
		"rhs_30Rnd_545x39_AK"
	
	};
	respawnMagazines[] = 
	{
		"rhs_30Rnd_545x39_AK",
		"rhs_30Rnd_545x39_AK"

	};	
	linkedItems[] = 
	{	
		"LOP_6sh46",
		"LOP_H_Pakol",
		"G_Squares_Tinted",
		"ACE_Cellphone",
		
	};
	respawnLinkedItems[] = 
	{	
		"LOP_6sh46",
		"LOP_H_Pakol",
		"G_Squares_Tinted",
		"ACE_Cellphone",
		
	};
};

class SOR_Civilians_warlord_hostile : SOR_Civilians_warlord
{
	//editorPreview = "\160thSOR\data\SOR_Actual_D.jpg";
	editorSubcategory = "SOR_SubCat_Civilians_Mid_East_Hostile";
	vehicleclass = "SOR_Civilians_Mid_East_Hostile";
	class eventHandlers
	{
		init="civilian setFriend [blufor, 0.4];";	
	};
};