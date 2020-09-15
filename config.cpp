class CfgPatches
{
	class TRSP_Signs
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Structures_Signs"
		};
	};
};
class cfgVehicles {
	class HouseNoDestruct;

	class Land_Custom_Billboard: HouseNoDestruct {
		scope=2;
		model="DayZ_Billboard\billboard_trs.p3d";
		hiddenSelections[]={"tex"};
		hiddenSelectionsTextures[]={"DayZ_Billboard\Data\board_alkohol_co.paa"};
	};


	class Land_Custom_Board: HouseNoDestruct {
		scope=2;
		model="DayZ_Billboard\board_trs.p3d";
		hiddenSelections[]={"tex"};
		hiddenSelectionsTextures[]={"DayZ_Billboard\Data\board_vodka_co.paa"};
	};
};