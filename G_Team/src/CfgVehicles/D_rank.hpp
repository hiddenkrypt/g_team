#include "D_Rank_Packs.hpp"

class Gent_AWP_D_Rank: Gent_RoleRestricted {
  scopeCurator = 2;
  scope = 2;
  editorSubcategory = "GentInfantry_D_Rank"; // editor list category (cfgcategories)
  displayName = "GGG Sniper";
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
class Gent_HUGE_D_Rank: Gent_RoleRestricted {
  scopeCurator = 2;
  scope = 2;
  icon = "iconManMG";
  editorSubcategory = "GentInfantry_D_Rank"; // editor list category (cfgcategories)
  displayName = "GGG H.U.G.E.";
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
class Gent_Medic_D_Rank: Gent_RoleRestricted {
  scopeCurator = 2;
  scope = 2;
  attendant = 1;
  icon = "iconManMedic";
  editorSubcategory = "GentInfantry_D_Rank"; // editor list category (cfgcategories)
  displayName = "GGG Medic";
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
class Gent_Rifle_D_Rank: Gent_RoleRestricted {
  scopeCurator = 2;
  scope = 2;
  editorSubcategory = "GentInfantry_D_Rank";
  displayName = "GGG Rifle";
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
class Gent_Mule_D_Rank: Gent_RoleRestricted {
  scopeCurator = 2;
  scope = 2;
  engineer = 1;
  icon = "iconManEngineer";
  editorSubcategory = "GentInfantry_D_Rank"; // editor list category (cfgcategories)
  displayName = "GGG M.U.L.E";
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
class Gent_Boom_D_Rank: Gent_RoleRestricted {
	canDeactivateMines=1;
	scopeCurator = 2;
	scope = 2;
  icon = "iconManExplosive";
	editorSubcategory = "GentInfantry_D_Rank";
	role = "GGG Boom";
	displayName = "GGG Boom";
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
