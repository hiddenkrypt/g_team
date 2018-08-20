#include "S_Rank_Packs.hpp"

class Gent_AWP_S_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_S_Rank"; // editor list category (cfgcategories)
  role = "Gent AWP whore (S Rank)"; //role displayed in MP as a join slot
  displayName = "<S Rank> Gent AWP whore ";
  //equipment
  backpack = "Gent_AWP_S_Pack";
  weapons[] = {
    "Gent_LightFity_LRPS",
    "Gent_Glock_Works",
    "Throw",
    "Put"
  };
  respawnWeapons[] = {
    "Gent_LightFity_LRPS",
    "Gent_Glock_Works",
    "Throw",
    "Put"
  };
  magazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_4("CUP_10Rnd_127x99_M107"),
    "SmokeShell"
  };
  respawnMagazines[] = {
    mag_3("CUP_17Rnd_9x19_glock17"),
    mag_4("CUP_10Rnd_127x99_M107"),
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
    "CUP_V_PMC_CIRAS_Black_Empty",
    "Binocular",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "H_HelmetB_camo"
  };
};


class Gent_HUGE_S_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_S_Rank"; // editor list category (cfgcategories)
  role = "Gent H.U.G.E. Gunner (S Rank)"; //role displayed in MP as a join slot
  displayName = "<S Rank> Gent H.U.G.E. ";
  //equipment
  backpack = "Gent_HUGE_S_Pack";
  weapons[] = {
    "Gent_MMG_Works",
    "CUP_hgun_MicroUzi",
    "Throw",
    "Put"
  };
  respawnWeapons[] = {
    "Gent_MMG_WorksB",
    "CUP_hgun_MicroUzi",
    "Throw",
    "Put"
  };
  magazines[] = {
    mag_4("CUP_30Rnd_9x19_UZI"),
    "130Rnd_338_Mag",
    mag_2("SmokeShell"),
    "SmokeShellRed",
    "HandGrenade"
  };
  respawnMagazines[] = {
    mag_4("CUP_30Rnd_9x19_UZI"),
    "130Rnd_338_Mag",
    mag_2("SmokeShell"),
    "SmokeShellRed",
    "HandGrenade"
  };
  items[] = {
    mag_3("FirstAidKit")
  };
  respawnItems[] = {
    mag_3("FirstAidKit")
  };
  linkedItems[] = {
    "V_PlateCarrierSpec_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
  respawnLinkedItems[] = {
    "V_PlateCarrierSpec_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
};


class Gent_Medic_S_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_S_Rank";
  role = "Gent Medic (S Rank)";
  displayName = "<S Rank> Gent Medic ";
  attendant = 1;
  //equipment
  backpack = "Gent_Medic_S_Pack";
  weapons[] = {
    "Gent_ScarK_Works",
    "CUP_hgun_MicroUzi",
    "Throw",
    "Put"
  };
  respawnWeapons[] = {
    "Gent_ScarK_Works",
    "CUP_hgun_MicroUzi",
    "Throw",
    "Put"
  };
  magazines[] = {
    mag_4("CUP_30Rnd_9x19_UZI"),
    mag_8("CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"),
    mag_4("SmokeShell"),
    mag_1("SmokeShellYellow"),
    mag_1("SmokeShellRed"),
    mag_1("SmokeShellGreen"),
    mag_1("B_IR_Grenade")
  };
  respawnMagazines[] = {
    mag_4("CUP_30Rnd_9x19_UZI"),
    mag_8("CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"),
    mag_4("SmokeShell"),
    mag_1("SmokeShellYellow"),
    mag_1("SmokeShellRed"),
    mag_1("SmokeShellGreen"),
    mag_1("B_IR_Grenade")
  };
  items[] = {
  };
  respawnItems[] = {
  };
  linkedItems[] = {
    "V_PlateCarrierSpec_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
  respawnLinkedItems[] = {
    "V_PlateCarrierSpec_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
};


class Gent_Rifle_S_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_S_Rank";
  role = "Gent Rifle (S Rank)";
  displayName = "<S Rank> Gent Rifle ";
  backpack = "Gent_Rifle_S_Pack";
  weapons[] = {
    "Gent_ScarL_Works",
    "CUP_hgun_MicroUzi",
    "Throw",
    "Put"
  };
  respawnWeapons[] = {
    "Gent_ScarL_Works",
    "CUP_hgun_MicroUzi",
    "Throw",
    "Put"
  };
  magazines[] = {
    mag_4("CUP_30Rnd_9x19_UZI"),
    mag_6("CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"),
    mag_2("HandGrenade"),
    "SmokeShell"
  };
  respawnMagazines[] = {
    mag_4("CUP_30Rnd_9x19_UZI"),
    mag_6("CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"),
    mag_2("HandGrenade"),
    "SmokeShell"
  };
  items[] = {
  };
  respawnItems[] = {
  };
  linkedItems[] = {
    "V_PlateCarrierSpec_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
  respawnLinkedItems[] = {
    "V_PlateCarrierSpec_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
};


class Gent_Mule_S_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_S_Rank"; // editor list category (cfgcategories)
  role = "Gent Mule (S Rank)"; //role displayed in MP as a join slot
  displayName = "<S Rank> Gent Mule ";
  //equipment
  backpack = "Gent_Mule_S_Pack";
  weapons[] = {
    "Gent_ScarK_Works",
    "CUP_hgun_MicroUzi",
    "Throw",
    "Put"
  };
  respawnWeapons[] = {
    "Gent_ScarK_Works",
    "CUP_hgun_MicroUzi",
    "Throw",
    "Put"
  };
  magazines[] = {
    mag_3("CUP_30Rnd_9x19_UZI"),
    mag_5("CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR")
  };
  respawnMagazines[] = {
    mag_3("CUP_30Rnd_9x19_UZI"),
    mag_5("CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR")
  };
  items[] = {
    mag_3("FirstAidKit")
  };
  respawnItems[] = {
    mag_3("FirstAidKit")
  };
  linkedItems[] = {
    "V_PlateCarrierSpec_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
  respawnLinkedItems[] = {
    "V_PlateCarrierSpec_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
};


class Gent_Boom_S_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_S_Rank";
  role = "Gent Explosions! (S Rank)";
  displayName = "<S Rank> Gent Explosions! ";
  //equipment
  backpack = "Gent_Boom_S_Pack";
  weapons[] = {
    "Gent_ScarK_Works",
    "CUP_hgun_MicroUzi",
    "launch_I_Titan_short_F",
    "Throw",
    "Put"
  };
  respawnWeapons[] = {
    "Gent_ScarK_Works",
    "CUP_hgun_MicroUzi",
    "launch_I_Titan_short_F",
    "Throw",
    "Put"
  };
  magazines[] = {
    mag_3("CUP_30Rnd_9x19_UZI"),
    mag_6("CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"),
    mag_1("Titan_AT")
  };
  respawnMagazines[] = {
    mag_3("CUP_30Rnd_9x19_UZI"),
    mag_6("CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"),
    mag_1("Titan_AT"),
  };
  items[] = {
    mag_3("FirstAidKit")
  };
  respawnItems[] = {
    mag_3("FirstAidKit")
  };
  linkedItems[] = {
    "V_PlateCarrierSpec_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
  respawnLinkedItems[] = {
    "V_PlateCarrierSpec_blk",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "CUP_H_USArmy_Helmet_ECH1_Black"
  };
};
