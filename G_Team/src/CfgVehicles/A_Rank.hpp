#include "A_Rank_Packs.hpp"

class Gent_AWP_A_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_A_Rank"; // editor list category (cfgcategories)
  role = "Gent AWP whore (A Rank)"; //role displayed in MP as a join slot
  displayName = "Gent AWP whore (A Rank)";
  //model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
  uniformClass = "U_B_T_FullGhillie_tna_F";
  //equipment
  backpack = "Gent_AWP_A_Pack";
  weapons[] = {
    "Gent_LRR_AMS",
    "Gent_Glock_Works",
    "Throw",
    "Put"
  };
  respawnWeapons[] = {
    "Gent_LRR_AMS",
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
    mag_2("FirstAidKit")
  };
  RespawnItems[] = {
    mag_2("FirstAidKit")
  };
  linkedItems[] = {
    "CUP_V_PMC_CIRAS_Black_Empty",
    "Binocular",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "H_HelmetB_camo"
  };
  respawnLinkedItems[] = {
    "V_PlateCarrier2_blk",
    "Binocular",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "H_HelmetB_camo"
  };
};


class Gent_HUGE_A_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_A_Rank"; // editor list category (cfgcategories)
  role = "Gent H.U.G.E. Gunner (A Rank)"; //role displayed in MP as a join slot
  displayName = "Gent H.U.G.E. (A Rank)";
  //equipment
  backpack = "Gent_HUGE_A_Pack";
  weapons[] = {
    "Gent_RPK_Aco",
    "Gent_Glock_MRD",
    "Throw",
    "Put"
  };
  respawnWeapons[] = {
    "Gent_RPK_Aco",
    "Gent_Glock_MRD",
    "Throw",
    "Put"
  };
  magazines[] = {
    mag_4("CUP_17Rnd_9x19_glock17"),
    mag_3("CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"),
    mag_2("SmokeShell"),
    "SmokeShellRed",
    "HandGrenade"
  };
  respawnMagazines[] = {
    mag_4("CUP_17Rnd_9x19_glock17"),
    mag_3("CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M"),
    mag_2("SmokeShell"),
    "SmokeShellRed",
    "HandGrenade"
  };
  items[] = {
    mag_2("FirstAidKit")
  };
  respawnItems[] = {
    mag_2("FirstAidKit")
  };
  linkedItems[] = {
    "V_PlateCarrier2_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
  respawnLinkedItems[] = {
    "V_PlateCarrier2_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
};


class Gent_Medic_A_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_A_Rank";
  role = "Gent Medic (A Rank)";
  displayName = "Gent Medic (A Rank)";
  attendant = 1;
  //equipment
  backpack = "Gent_Medic_A_Pack";
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
    "V_PlateCarrier2_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
  respawnLinkedItems[] = {
    "V_PlateCarrier2_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
};


class Gent_Rifle_A_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_A_Rank";
  role = "Gent Rifle (A Rank)";
  displayName = "Gent Rifle (A Rank)";
  backpack = "Gent_Rifle_A_Pack";
  weapons[] = {
    "Gent_AK12_ARCO",
    "Gent_Glock_MRD",
    "Throw",
    "Put"
  };
  respawnWeapons[] = {
    "Gent_AK12_ARCO",
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
    "V_PlateCarrier2_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
  respawnLinkedItems[] = {
    "V_PlateCarrier2_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
};


class Gent_Mule_A_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_A_Rank"; // editor list category (cfgcategories)
  role = "Gent Mule (A Rank)"; //role displayed in MP as a join slot
  displayName = "Gent Mule (A Rank)";
  //equipment
  backpack = "Gent_Mule_A_Pack";
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
    mag_7("30Rnd_762x39_Mag_F")
  };
  respawnMagazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_7("30Rnd_762x39_Mag_F")
  };
  items[] = {
    mag_2("FirstAidKit")
  };
  respawnItems[] = {
    mag_2("FirstAidKit")
  };
  linkedItems[] = {
    "V_PlateCarrier2_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
  respawnLinkedItems[] = {
    "V_PlateCarrier2_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
};


class Gent_Boom_A_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_A_Rank";
  role = "Gent Explosions! (A Rank)";
  displayName = "Gent Explosions! (A Rank)";
  //equipment
  backpack = "Gent_Boom_A_Pack";
  weapons[] = {
    "Gent_AK12_Aco",
    "Gent_Glock_MRD",
    "launch_I_Titan_short_F",
    "Throw",
    "Put"
  };
  respawnWeapons[] = {
    "Gent_AK12_Aco",
    "Gent_Glock_MRD",
    "launch_I_Titan_short_F",
    "Throw",
    "Put"
  };
  magazines[] = {
    "Titan_AT",
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_7("30Rnd_762x39_Mag_F"),
    mag_1("HandGrenade")
  };
  respawnMagazines[] = {
    "Titan_AT",
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_5("30Rnd_762x39_Mag_F"),
    mag_1("HandGrenade")
  };
  items[] = {
    mag_2("FirstAidKit")
  };
  respawnItems[] = {
    mag_2("FirstAidKit")
  };
  linkedItems[] = {
    "V_PlateCarrier2_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
  respawnLinkedItems[] = {
    "V_PlateCarrier2_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
};
