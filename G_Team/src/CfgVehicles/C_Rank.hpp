#include "C_Rank_Packs.hpp"

class Gent_AWP_C_Rank: Gent_AWP_D_Rank {
	editorSubcategory = "GentInfantry_C_Rank"; // editor list category (cfgcategories)
	displayName = "GGG Sniper";
	//equipment
	backpack = "Gent_AWP_C_Pack";
	weapons[] = {
		"Gent_AWP_Works",
		"Gent_Silent_Glock",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"Gent_AWP_Works",
		"Gent_Silent_Glock",
		"Throw",
		"Put"
	};
	magazines[] = {
		mag_3("CUP_17Rnd_9x19_glock17"),
		mag_5("CUP_5Rnd_86x70_L115A1"),
		"SmokeShell"
	};
	respawnMagazines[] = {
		mag_3("CUP_17Rnd_9x19_glock17"),
		mag_5("CUP_5Rnd_86x70_L115A1"),
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


class Gent_HUGE_C_Rank: Gent_HUGE_D_Rank {
	editorSubcategory = "GentInfantry_C_Rank"; // editor list category (cfgcategories)
	displayName = "GGG H.U.G.E.";
	//equipment
	backpack = "Gent_HUGE_C_Pack";
	weapons[] = {
		"Gent_HUGE_Aco",
		"CUP_hgun_Glock17",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"Gent_HUGE_Aco",
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
		"V_PlateCarrier1_rgr",
		"ItemWatch",
		"ItemRadio",
		"ItemMap",
		"ItemCompass",
		"G_WirelessEarpiece_F",
		"H_HelmetB"
	};
	respawnLinkedItems[] = {
		"V_PlateCarrier1_rgr",
		"ItemWatch",
		"ItemRadio",
		"ItemMap",
		"ItemCompass",
		"G_WirelessEarpiece_F",
		"H_HelmetB"
	};
};


class Gent_Medic_C_Rank: Gent_Medic_D_Rank {
	editorSubcategory = "GentInfantry_C_Rank";
	displayName = "GGG Medic";
	//equipment
	backpack = "Gent_Medic_C_Pack";
	weapons[] = {
		"Gent_L85_Aco",
		"CUP_hgun_Glock17",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"Gent_L85_Aco",
		"CUP_hgun_Glock17",
		"Throw",
		"Put"
	};
	magazines[] = {
		mag_3("CUP_17Rnd_9x19_glock17"),
		mag_6("30Rnd_556x45_Stanag_red"),
		mag_3("SmokeShell")
	};
	respawnMagazines[] = {
		mag_3("CUP_17Rnd_9x19_glock17"),
		mag_6("30Rnd_556x45_Stanag_red"),
		mag_3("SmokeShell")
	};
	items[] = {};
	respawnItems[] = {};
	linkedItems[] = {
		"V_PlateCarrier1_rgr",
		"ItemWatch",
		"ItemRadio",
		"ItemMap",
		"ItemCompass",
		"G_WirelessEarpiece_F",
		"H_HelmetB"
	};
	respawnLinkedItems[] = {
		"V_PlateCarrier1_rgr",
		"ItemWatch",
		"ItemRadio",
		"ItemMap",
		"ItemCompass",
		"G_WirelessEarpiece_F",
		"H_HelmetB"
	};
};


class Gent_Rifle_C_Rank: Gent_Rifle_D_Rank {
	editorSubcategory = "GentInfantry_C_Rank";
	displayName = "<C Rank> Gent Rifle";
	backpack = "Gent_Rifle_C_Pack";
	weapons[] = {
		"Gent_L85_Aco",
		"CUP_hgun_Glock17",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"Gent_L85_Aco",
		"CUP_hgun_Glock17",
		"Throw",
		"Put"
	};
	magazines[] = {
		mag_3("CUP_17Rnd_9x19_glock17"),
		mag_5("30Rnd_556x45_Stanag_red"),
		mag_2("HandGrenade"),
		"SmokeShell"
	};
	respawnMagazines[] = {
		mag_3("CUP_17Rnd_9x19_glock17"),
		mag_3("30Rnd_556x45_Stanag_red"),
		mag_2("HandGrenade"),
		"SmokeShell"
	};
	items[] = {};
	respawnItems[] = {};
	linkedItems[] = {
		"CUP_V_PMC_CIRAS_Black_Empty",
		"ItemWatch",
		"ItemRadio",
		"ItemMap",
		"ItemCompass",
		"G_WirelessEarpiece_F",
		"H_HelmetB"
	};
	respawnLinkedItems[] = {
		"CUP_V_PMC_CIRAS_Black_Empty",
		"ItemWatch",
		"ItemRadio",
		"ItemMap",
		"ItemCompass",
		"G_WirelessEarpiece_F",
		"H_HelmetB"
	};
};


class Gent_Mule_C_Rank: Gent_Mule_D_Rank {
	editorSubcategory = "GentInfantry_C_Rank"; // editor list category (cfgcategories)
	displayName = "GGG M.U.L.E.";
	//equipment
	backpack = "Gent_Mule_C_Pack";
	weapons[] = {
		"Gent_L85_Aco",
		"CUP_hgun_Glock17",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"Gent_L85_Aco",
		"CUP_hgun_Glock17",
		"Throw",
		"Put"
	};
	magazines[] = {
		mag_3("CUP_17Rnd_9x19_glock17"),
		mag_7("30Rnd_556x45_Stanag_red"),
		mag_2("HandGrenade")
	};
	respawnMagazines[] = {
		mag_3("CUP_17Rnd_9x19_glock17"),
		mag_7("30Rnd_556x45_Stanag_red"),
		mag_2("HandGrenade")
	};
	items[] = {};
	respawnItems[] = {};
	linkedItems[] = {
		"CUP_V_PMC_CIRAS_Black_Empty",
		"ItemWatch",
		"ItemRadio",
		"ItemMap",
		"ItemCompass",
		"G_WirelessEarpiece_F",
		"H_HelmetB"
	};
	respawnLinkedItems[] = {
		"CUP_V_PMC_CIRAS_Black_Empty",
		"ItemWatch",
		"ItemRadio",
		"ItemMap",
		"ItemCompass",
		"G_WirelessEarpiece_F",
		"H_HelmetB"
	};
};


class Gent_Boom_C_Rank: Gent_Boom_D_Rank {
	editorSubcategory = "GentInfantry_C_Rank";
	displayName = "GGG Boom";
	//equipment
	backpack = "Gent_Boom_C_Pack";
	weapons[] = {
		"Gent_L85_Aco",
		"CUP_hgun_Glock17",
		"CUP_launch_M72A6_Special",
		"Throw",
		"Put"
	};
	respawnWeapons[] = {
		"Gent_L85_Aco",
		"CUP_hgun_Glock17",
		"CUP_launch_M72A6_Special",
		"Throw",
		"Put"
	};
	magazines[] = {
		"CUP_M72A6_M",
		mag_3("CUP_17Rnd_9x19_glock17"),
		mag_7("30Rnd_556x45_Stanag_red"),
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
		"CUP_V_PMC_CIRAS_Black_Empty",
		"ItemWatch",
		"ItemRadio",
		"ItemMap",
		"ItemCompass",
		"G_WirelessEarpiece_F",
		"H_HelmetB"
	};
	respawnLinkedItems[] = {
		"CUP_V_PMC_CIRAS_Black_Empty",
		"ItemWatch",
		"ItemRadio",
		"ItemMap",
		"ItemCompass",
		"G_WirelessEarpiece_F",
		"H_HelmetB"
	};
};
