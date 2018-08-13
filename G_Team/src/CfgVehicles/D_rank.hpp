
class B_Messenger_Black_F;
class Gent_AWP_D_Pack : B_Messenger_Black_F{
  scope = 1;
  class TransportMagazines {
    mag_xx(APERSTripMine_Wire_Mag, 2);
    mag_xx(CUP_5Rnd_86x70_L115A1, 4);
  };
}
class Gent_AWP_D_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_D_Rank"; // editor list category (cfgcategories)
  role = "Gent AWP whore (D Rank)"; //role displayed in MP as a join slot
  displayName = "Gent AWP whore (D Rank)";
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


class B_AssaultPack_rgr;
class Gent_HUGE_D_Pack : B_AssaultPack_rgr{
  scope = 1;
  class TransportMagazines {
    mag_xx(CUP_200Rnd_TE1_Red_Tracer_556x45_M249,3);
  };
}
class Gent_HUGE_D_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_D_Rank"; // editor list category (cfgcategories)
  role = "Gent H.U.G.E. Gunner (D Rank)"; //role displayed in MP as a join slot
  displayName = "Gent H.U.G.E. (D Rank)";
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


class CUP_B_GER_Medic_FLecktarn;
class Gent_medic_D_Pack : CUP_B_GER_Medic_FLecktarn{
  scope = 1;
  class TransportMagazines {
  };
  class TransportItems {
    item_xx(Medikit,1);
    item_xx(FirstAidKit,5);
  };
}
class Gent_Medic_D_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_D_Rank"; // editor list category (cfgcategories)
  role = "Gent Medic (D Rank)"; //role displayed in MP as a join slot
  displayName = "Gent Medic (D Rank)";
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
    "V_PlateCarrier1_rgr_noflag_F",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "H_Hat_Camo"
  };
  respawnLinkedItems[] = {
    "V_PlateCarrier1_rgr_noflag_F",
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "ItemCompass",
    "G_WirelessEarpiece_F",
    "H_Hat_Camo"
  };
};


class B_LegStrapBag_black_F;
class Gent_Rifle_D_Pack : B_LegStrapBag_black_F{
  scope = 1;
  class TransportMagazines {
    mag_xx(30Rnd_556x45_Stanag_red,5)
  };
  class TransportItems {
    item_xx(FirstAidKit,2);
  };
}
class Gent_Rifle_D_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_D_Rank";
  role = "Gent Rifle (D Rank)";
  displayName = "Gent Rifle (D Rank)";
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


class B_FieldPack_khk;
class Gent_Mule_D_Pack : B_FieldPack_khk{
  scope = 1;
  class TransportMagazines {
    mag_xx(30Rnd_556x45_Stanag_red,16);
    mag_xx(CUP_5Rnd_86x70_L115A1,3);
  };
  class TransportItems {
    item_xx(FirstAidKit,5);
  };
}
class Gent_Mule_D_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_D_Rank"; // editor list category (cfgcategories)
  role = "Gent Mule (D Rank)"; //role displayed in MP as a join slot
  displayName = "Gent Mule (D Rank)";
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


class Gent_Boom_D_Pack : B_FieldPack_khk{
  scope = 1;
  class TransportMagazines {
    mag_xx(DemoCharge_Remote_Mag,3);
    mag_xx(APERSMineDispenser_Mag,1);
    mag_xx(CUP_PipeBomb_M,1);
  };
  class TransportItems {
    item_xx(MineDetector,1);
  };
}
class Gent_Boom_D_Rank: Gent_Soldier {
  scopeCurator = 2;
  editorSubcategory = "GentInfantry_D_Rank";
  role = "Gent Explosions! (D Rank)";
  displayName = "Gent Explosions! (D Rank)";
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
