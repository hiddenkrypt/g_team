#include "D_Rank_Packs.hpp"

class Gent_AWP_D_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_D_Rank"; // editor list category (cfgcategories)
  role = "Gent AWP whore (D Rank)"; //role displayed in MP as a join slot
  displayName = "<D Rank> Gent AWP whore";
  //equipment
  backpack = "Gent_AWP_D_Pack";
  weapons[] = {
    "Gent_AWP_DMS",
    "CUP_hgun_Glock17",
    "Throw",
    "Put"
  };
  respawnWeapons[] = {
    "Gent_AWP_DMS",
    "CUP_hgun_Glock17",
    "Throw",
    "Put"
  };
  magazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_8("CUP_5Rnd_86x70_L115A1"),
    "SmokeShell"
  };
  respawnMagazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_8("CUP_5Rnd_86x70_L115A1"),
    "SmokeShell"
  };
  Items[] = {
    mag_2(FirstAidKit)
  };
  RespawnItems[] = {
    mag_2(FirstAidKit)
  };
  linkedItems[] = {
    "V_LegStrapBag_black_F",
    "Binocular",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "H_Hat_Camo"
  };
  respawnLinkedItems[] = {
    "V_LegStrapBag_black_F",
    "Binocular",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "H_Hat_Camo"
  };
};
class Gent_HUGE_D_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_D_Rank"; // editor list category (cfgcategories)
  role = "Gent H.U.G.E. Gunner (D Rank)"; //role displayed in MP as a join slot
  displayName = "<D Rank> Gent H.U.G.E.";
  //equipment
  backpack = "Gent_HUGE_D_Pack";
  weapons[] = {
    "CUP_lmg_m249_para",
    "CUP_hgun_Glock17",
    "Throw",
    "Put"
  };
  respawnWeapons[] = {
    "CUP_lmg_m249_para",
    "CUP_hgun_Glock17",
    "Throw",
    "Put"
  };
  magazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_1("CUP_200Rnd_TE1_Red_Tracer_556x45_M249"),
    mag_2("SmokeShell"),
    "HandGrenade"
  };
  respawnMagazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_1("CUP_200Rnd_TE1_Red_Tracer_556x45_M249"),
    mag_2("SmokeShell"),
    "HandGrenade"
  };
  items[] = {
    mag_2("FirstAidKit")
  };
  respawnItems[] = {
    mag_2("FirstAidKit")
  };
  linkedItems[] = {
    "V_TacVest_oli",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "H_Hat_Camo"
  };
  respawnLinkedItems[] = {
    "V_TacVest_oli",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "H_Hat_Camo"
  };
};
class Gent_Medic_D_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_D_Rank"; // editor list category (cfgcategories)
  role = "Gent Medic (D Rank)"; //role displayed in MP as a join slot
  displayName = "<D Rank> Gent Medic";
  attendant = 1;
  //equipment
  backpack = "Gent_Medic_D_Pack";
  weapons[] = {
    "CUP_arifle_L85A2",
    "CUP_hgun_Glock17",
    "Throw",
    "Put"
  };
  respawnWeapons[] = {
    "CUP_arifle_L85A2",
    "CUP_hgun_Glock17",
    "Throw",
    "Put"
  };
  magazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_5("30Rnd_556x45_Stanag_red"),
    mag_2("SmokeShell")
  };
  respawnMagazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_5("30Rnd_556x45_Stanag_red"),
    mag_2("SmokeShell")
  };
  items[] = {
  };
  respawnItems[] = {
  };
  linkedItems[] = {
    "V_TacVest_oli",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "H_Hat_Camo"
  };
  respawnLinkedItems[] = {
    "V_TacVest_oli",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "H_Hat_Camo"
  };
};
class Gent_Rifle_D_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_D_Rank";
  role = "Gent Rifle (D Rank)";
  displayName = "<D Rank> Gent Rifle";
  backpack = "Gent_Rifle_D_Pack";
  weapons[] = {
    "CUP_arifle_L85A2",
    "CUP_hgun_Glock17",
    "Throw",
    "Put"
  };
  respawnWeapons[] = {
    "CUP_arifle_L85A2",
    "CUP_hgun_Glock17",
    "Throw",
    "Put"
  };
  magazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_3("30Rnd_556x45_Stanag_red"),
    mag_2("HandGrenade"),
    "SmokeShell"
  };
  respawnMagazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_3("30Rnd_556x45_Stanag_red"),
    mag_2("HandGrenade"),
    "SmokeShell"
  };
  items[] = {
  };
  respawnItems[] = {
  };
  linkedItems[] = {
    "V_TacVest_oli",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "H_Hat_Camo"
  };
  respawnLinkedItems[] = {
    "V_TacVest_oli",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "H_Hat_Camo"
  };
};
class Gent_Mule_D_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_D_Rank"; // editor list category (cfgcategories)
  role = "Gent Mule (D Rank)"; //role displayed in MP as a join slot
  displayName = "<D Rank> Gent Mule";
  //equipment
  backpack = "Gent_Mule_D_Pack";
  weapons[] = {
    "CUP_arifle_L85A2",
    "CUP_hgun_Glock17",
    "Throw",
    "Put"
  };
  respawnWeapons[] = {
    "CUP_arifle_L85A2",
    "CUP_hgun_Glock17",
    "Throw",
    "Put"
  };
  magazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_5("30Rnd_556x45_Stanag_red"),
    mag_2("HandGrenade")
  };
  respawnMagazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_5("30Rnd_556x45_Stanag_red"),
    mag_2("HandGrenade")
  };
  items[] = {
  };
  respawnItems[] = {
  };
  linkedItems[] = {
    "V_TacVest_oli",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "H_Hat_Camo"
  };
  respawnLinkedItems[] = {
    "V_TacVest_oli",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "H_Hat_Camo"
  };
};
class Gent_Boom_D_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_D_Rank";
  role = "Gent Explosions! (D Rank)";
  displayName = "<D Rank> Gent Explosions!";
  //equipment
  backpack = "Gent_Boom_D_Pack";
  weapons[] = {
    "CUP_arifle_L85A2",
    "CUP_hgun_Glock17",
    "Throw",
    "Put"
  };
  respawnWeapons[] = {
    "CUP_arifle_L85A2",
    "CUP_hgun_Glock17",
    "Throw",
    "Put"
  };
  magazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_5("30Rnd_556x45_Stanag_red"),
    mag_1("HandGrenade")
  };
  respawnMagazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_5("30Rnd_556x45_Stanag_red"),
    mag_1("HandGrenade")
  };
  items[] = {
    "FirstAidKit",
    "FirstAidKit"
  };
  respawnItems[] = {
  };
  linkedItems[] = {
    "V_TacVest_oli",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "H_Hat_Camo"
  };
  respawnLinkedItems[] = {
    "V_TacVest_oli",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "H_Hat_Camo"
  };
};
