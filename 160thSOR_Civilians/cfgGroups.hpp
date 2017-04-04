/*
	Name: 160th SOR Mod
	Author: Scooby
	Date: 25/03/16
	Description: cfgGroups.hpp
*/

class CfgGroups 
{
	class CIVILIAN
	{		
		class SOR_Civilian_Groups
		{
			name = "160th Civilians(Desert)";
			
			class SOR_Civilian_Mid_East_Armed_Group
			{
				name = "Middle East Civilians (Armed)";
				aliveCategory = "Infantry";
				
				class SOR_Civilian_VillageGroup
				{
					name = "Village Leaders";
					faction = "SOR_Civilians_Faction";
					side = 3;
					rarityGroup = 0.75;
					
					class Unit0 
					{
						side = 3;
						vehicle = "SOR_Civilians_warlord";
						rank = LIEUTENANT;
						position[] = {0, 0, 0};
					};
					
					class Unit1
					{
						side = 3;
						vehicle = "SOR_Civilians_warlord";
						rank = SERGEANT;
						position[] = {-2, 0, 0};
					};					
					class Unit2 
					{
						side = 3;
						vehicle = "SOR_Civilians_warlord";
						rank = CORPORAL;
						position[] = {-4, 0, 0};
					};	
					class Unit3
					{
						side = 3;
						vehicle = "SOR_Civilians_warlord";
						rank = CORPORAL;
						position[] = {-6, 0, 0};
					};
				};	
			};
		};
	};
};	

		

	


