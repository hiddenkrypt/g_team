class CfgPatches
{
  class GGG_Team_Mod
  {
    name = "G-Team Addon";
    author = "Rav-T";
    units[] = {
      "Gent_Chopper_Rust",
      "Gent_Command_Car",
      "Gent_Party_Van",
      "Gent_Soldier",
      "Gent_Officer",
      "Gent_Commander",
      "Gent_AWP_D_Rank",
      "Gent_HUGE_D_Rank",
      "Gent_Medic_D_Rank",
      "Gent_Rifle_D_Rank",
      "Gent_Boom_D_Rank",
      "Gent_Mule_D_Rank",
      "Gent_AWP_C_Rank",
      "Gent_HUGE_C_Rank",
      "Gent_Medic_C_Rank",
      "Gent_Rifle_C_Rank",
      "Gent_Boom_C_Rank",
      "Gent_Mule_C_Rank",
      "Gent_AWP_B_Rank",
      "Gent_HUGE_B_Rank",
      "Gent_Medic_B_Rank",
      "Gent_Rifle_B_Rank",
      "Gent_Boom_B_Rank",
      "Gent_Mule_B_Rank",
      "Gent_AWP_A_Rank",
      "Gent_HUGE_A_Rank",
      "Gent_Medic_A_Rank",
      "Gent_Rifle_A_Rank",
      "Gent_Boom_A_Rank",
      "Gent_Mule_A_Rank"
    };
    weapons[] = {
      "Gent_AWP_DMS",
      "Gent_Uniform",
      "Gent_AK12_Aco",
      "Gent_RPK_Aco",
      "Gent_LRR_DMS",
      "Gent_Silent_Glock",
      "Gent_Glock_Works",
      "Gent_Glock_MRD",
      "Gent_HUGE_Aco",
      "Gent_L85_Aco",
      "Gent_AWP_Works"
    };
    requiredVersion = 0.1;
    requiredAddons[] = {
      "CUP_AirVehicles_UH60",
      "CUP_WheeledVehicles_Vodnik",
      "CUP_WheeledVehicles_UAZ",
      "CUP_Weapons_EVO",
      "CUP_Weapons_Ammunition"
    };
  };
};

#include "src\Macros.hpp"
#include "src\CfgWeapons.hpp"
#include "src\CfgVehicles.hpp"
#include "src\CfgCategories.hpp"
#include "src\CfgSounds.hpp"
#include "src\CfgFunctions.hpp"
#include "src\CfgGroups.hpp"
#include "src\CfgFactionClasses.hpp"
#include "src\CfgUnitInsignia.hpp"
