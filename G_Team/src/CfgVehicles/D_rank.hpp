
class Gent_AWP_D_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_D_Rank"; // editor list category (cfgcategories)
  role = "Gent AWP whore (D Rank)"; //role displayed in MP as a join slot
  displayName = "Gent AWP whore (D rank)";
  //equipment
  backpack = "B_Messenger_Black_F";
  weapons[] = {
    "CUP_srifle_G22_wdl",
    "CUP_hgun_Glock17",
    "Throw",
    "Put"
  };
  respawnWeapons[] = {
    "CUP_srifle_G22_wdl",
    "CUP_hgun_Glock17",
    "Throw",
    "Put"
  };
  magazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_10("CUP_5Rnd_762x67_G22"),
    "SmokeShell"
  };
  respawnMagazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_10("CUP_5Rnd_762x67_G22"),
    "SmokeShell"
  };
  Items[] = {
    mag_2(FirstAidKit),
    "APERSTripMine_Wire_Mag"
  };
  RespawnItems[] = {
    mag_2(FirstAidKit),
    "APERSTripMine_Wire_Mag"
  };
  linkedItems[] = {
    "V_LegStrapBag_black_F",
    "optic_DMS",
    "Binocular",
    "ItemWatch",
    "ItemRadio",
    "G_WirelessEarpiece_F",
    "H_Hat_Camo"
  };
  respawnLinkedItems[] = {
    "V_LegStrapBag_black_F",
    "optic_DMS",
    "Binocular",
    "ItemWatch",
    "ItemRadio",
    "G_WirelessEarpiece_F",
    "H_Hat_Camo"
  };
};

class Gent_HUGE_D_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_D_Rank"; // editor list category (cfgcategories)
  role = "Gent H.U.G.E. Gunner (D Rank)"; //role displayed in MP as a join slot
  displayName = "Gent H.U.G.E. (D rank)";
  //equipment
  backpack = "B_AssaultPack_rgr";
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
    mag_3("CUP_200Rnd_TE1_Red_Tracer_556x45_M249"),
    mag_2("SmokeShell"),
    "HandGrenade"
  };
  respawnMagazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_3("CUP_200Rnd_TE1_Red_Tracer_556x45_M249"),
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
    "G_WirelessEarpiece_F",
    "H_Hat_Camo"
  };
  respawnLinkedItems[] = {
    "V_TacVest_oli",
    "ItemWatch",
    "ItemRadio",
    "G_WirelessEarpiece_F",
    "H_Hat_Camo"
  };
};
