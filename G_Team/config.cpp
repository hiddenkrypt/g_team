class CfgPatches
{
  class GGG_Team_Mod
  {
    name = "G-Team Addon";
    author = "Rav-T";
    units[] = {
      "Gent_Soldier"
    };
    weapons[] = {};
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
