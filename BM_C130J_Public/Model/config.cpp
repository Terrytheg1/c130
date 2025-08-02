class CfgPatches
{
	class BM_C130J_Models
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};

class CfgVehicles
{
	class House;
	
	class PlaneCrash: House
	{
		scope = 2;
		model = "\DZ\structures\Wrecks\Aircraft\Wreck_C130J_Cargo.p3d";
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500;
					healthLevels[] = {{1,{}},{0.7,{}},{0.5,{}},{0.3,{}},{0,{}}};
				};
			};
		};
	};

	class PlaneCrash_Crash: House
	{
		scope = 2;
		model = "\DZ\structures\Wrecks\Aircraft\Wreck_C130J_Cargo.p3d";
	};

	class Wreck_PlaneCrash: House
	{
		scope = 2;
		model = "\DZ\structures\Wrecks\Aircraft\Wreck_C130J_Cargo.p3d";
	};
};
