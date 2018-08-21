#include "B_Rank_Packs.hpp"

class Gent_AWP_B_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_B_Rank"; // editor list category (cfgcategories)
  role = "Gent AWP whore (B Rank)"; //role displayed in MP as a join slot
  displayName = "<B Rank> Gent AWP whore";
  //equipment
  backpack = "Gent_AWP_B_Pack";
  weapons[] = {
    "Gent_LRR_DMS",
    "Gent_Glock_Works",
    "Throw",
    "Put"
  };
  respawnWeapons[] = {
    "Gent_LRR_DMS",
    "Gent_Glock_Works",
    "Throw",
    "Put"
  };
  magazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_5("7Rnd_408_Mag"),
    "SmokeShell"
  };
  respawnMagazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_5("7Rnd_408_Mag"),
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
    "H_HelmetB_camo"
  };
  respawnLinkedItems[] = {
    "V_LegStrapBag_black_F",
    "Binocular",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "H_HelmetB_camo"
  };
};


class Gent_HUGE_B_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_B_Rank"; // editor list category (cfgcategories)
  role = "Gent H.U.G.E. Gunner (B Rank)"; //role displayed in MP as a join slot
  displayName = "<B Rank> Gent H.U.G.E.";
  //equipment
  backpack = "Gent_HUGE_B_Pack";
  weapons[] = {
    "CUP_arifle_RPK74",
    "Gent_Glock_MRD",
    "Throw",
    "Put"
  };
  respawnWeapons[] = {
    "CUP_arifle_RPK74",
    "Gent_Glock_MRD",
    "Throw",
    "Put"
  };
  magazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_3("CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"),
    mag_2("SmokeShell"),
    "HandGrenade"
  };
  respawnMagazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_3("CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"),
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
    "V_PlateCarrier1_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
  respawnLinkedItems[] = {
    "V_PlateCarrier1_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
};


class Gent_Medic_B_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_B_Rank";
  role = "Gent Medic (B Rank)";
  displayName = "<B Rank> Gent Medic";
  attendant = 1;
  //equipment
  backpack = "Gent_Medic_B_Pack";
  weapons[] = {
    "arifle_AK12_F",
    "Gent_Glock_MRD",
    "Throw",
    "Put"
  };
  respawnWeapons[] = {
    "arifle_AK12_F",
    "Gent_Glock_MRD",
    "Throw",
    "Put"
  };
  magazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_8("30Rnd_762x39_Mag_F"),
    mag_4("SmokeShell"),
    mag_1("SmokeShellYellow"),
    mag_1("SmokeShellRed"),
    mag_1("SmokeShellGreen")
  };
  respawnMagazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_8("30Rnd_762x39_Mag_F"),
    mag_4("SmokeShell"),
    mag_1("SmokeShellYellow"),
    mag_1("SmokeShellRed"),
    mag_1("SmokeShellGreen")
  };
  items[] = {
  };
  respawnItems[] = {
  };
  linkedItems[] = {
    "V_PlateCarrier1_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
  respawnLinkedItems[] = {
    "V_PlateCarrier1_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
};


class Gent_Rifle_B_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_B_Rank";
  role = "Gent Rifle (B Rank)";
  displayName = "<B Rank> Gent Rifle";
  backpack = "Gent_Rifle_B_Pack";
  weapons[] = {
    "Gent_AK12_Aco",
    "Gent_Glock_MRD",
    "Throw",
    "Put"
  };
  respawnWeapons[] = {
    "Gent_AK12_Aco",
    "Gent_Glock_MRD",
    "Throw",
    "Put"
  };
  magazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_6("30Rnd_762x39_Mag_F"),
    mag_2("HandGrenade"),
    "SmokeShell"
  };
  respawnMagazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_6("30Rnd_762x39_Mag_F"),
    mag_2("HandGrenade"),
    "SmokeShell"
  };
  items[] = {
  };
  respawnItems[] = {
  };
  linkedItems[] = {
    "V_PlateCarrier1_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
  respawnLinkedItems[] = {
    "V_PlateCarrier1_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
};


class Gent_Mule_B_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_B_Rank"; // editor list category (cfgcategories)
  role = "Gent Mule (B Rank)"; //role displayed in MP as a join slot
  displayName = "<B Rank> Gent Mule";
  //equipment
  backpack = "Gent_Mule_B_Pack";
  weapons[] = {
    "arifle_AK12_F",
    "Gent_Glock_MRD",
    "Throw",
    "Put"
  };
  respawnWeapons[] = {
    "arifle_AK12_F",
    "Gent_Glock_MRD",
    "Throw",
    "Put"
  };
  magazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_4("30Rnd_762x39_Mag_F")
  };
  respawnMagazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_4("30Rnd_762x39_Mag_F")
  };
  items[] = {
    mag_2("FirstAidKit")
  };
  respawnItems[] = {
    mag_2("FirstAidKit")
  };
  linkedItems[] = {
    "V_PlateCarrier1_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
  respawnLinkedItems[] = {
    "V_PlateCarrier1_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
};


class Gent_Boom_B_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_B_Rank";
  role = "Gent Explosions! (B Rank)";
  displayName = "<B Rank> Gent Explosions!";
  //equipment
  backpack = "Gent_Boom_B_Pack";
  weapons[] = {
    "arifle_AK12_F",
    "Gent_Glock_MRD",
    "CUP_launch_M72A6_Special",
    "Throw",
    "Put"
  };
  respawnWeapons[] = {
    "arifle_AK12_F",
    "Gent_Glock_MRD",
    "CUP_launch_M72A6_Special",
    "Throw",
    "Put"
  };
  magazines[] = {
    "CUP_M72A6_M",
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_7("30Rnd_762x39_Mag_F"),
    mag_1("HandGrenade")
  };
  respawnMagazines[] = {
    "CUP_M72A6_M",
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_7("30Rnd_762x39_Mag_F"),
    mag_1("HandGrenade")
  };
  items[] = {
    mag_2("FirstAidKit")
  };
  respawnItems[] = {
    mag_2("FirstAidKit")
  };
  linkedItems[] = {
    "V_PlateCarrier1_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
  respawnLinkedItems[] = {
    "V_PlateCarrier1_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
};
