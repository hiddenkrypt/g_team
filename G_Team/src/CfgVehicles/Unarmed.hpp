

//Basic gent soldier inherets from AAF Rifleman
class Gent_Soldier: I_G_Soldier_F {
  GENT_UNIT
  scopeCurator = 0;
  scope = 2;
  attendant = 1;
  engineer = 1;
	canDeactivateMines = 1;
  woman = 1; //does nothing :<
  displayName = "Gent Soldier";
  role = "";
  editorSubcategory = "GentUnarmed"; // editor list category (cfgcategories)
  identityTypes[] = { //default random head for AI
    "Head_NATO",
    "G_NATO_default"
  };
  genericNames = "NATOMen"; // random name for ai


  editorPreview = "\G_Team\img\ui\editor_icons\icon_gent_soldier_CO.paa"
  //equipment
  backpack = "";
  weapons[] = {"Throw","Put"}; // without these, you can't use nades / plantables
  respawnWeapons[] = {"Throw","Put"};
  magazines[] = {};
  respawnMagazines[] = {};
  linkedItems[] = {
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "G_WirelessEarpiece_F",
    "H_Hat_Camo"
  };
  respawnLinkedItems[] = {
    "ItemWatch",
    "ItemRadio",
    "ItemMap",
    "G_WirelessEarpiece_F",
    "H_Hat_Camo"
  };

  //model IS the uniform IS the model. #justarmathings
  //all this boils down to "wearing Guerilla Apparel"
  nakedUniform = "U_BasicBody";
  model = "\A3\Characters_F_Bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
  uniformClass = "Gent_Uniform";
  hiddenSelections[] = {"camo"};
  hiddenSelectionsTextures[] = {"\G_Team\img\model_textures\gent_uniform_CO.paa"};
  //uniformClass = "U_IG_Guerrilla_6_1";

  //prevent randomization of hat/facewear
  class EventHandlers {
    init = "_gent = (_this select 0); _gent setVariable ['BIS_enableRandomization', false]; _gent addMPEventHandler [""MPKilled"", {(_this select 0) call Gent_fnc_Death_Yell;}];"
  }
};

/*Gent Officer inherets from base Gent soldier
They get a different name, and get a boonie hat*/
class Gent_Officer: Gent_Soldier {
  displayName = "Gent Officer";
  editorPreview = "\G_Team\img\ui\editor_icons\icon_gent_officer_CO.paa"
  linkedItems[] = {
    "G_WirelessEarpiece_F",
    "H_Booniehat_tan",
    "ItemMap",
    "ItemCompass",
    "ItemWatch",
    "ItemRadio"
  };
  respawnLinkedItems[] = {
    "G_WirelessEarpiece_F",
    "H_Booniehat_tan",
    "ItemMap",
    "ItemCompass",
    "ItemWatch",
    "ItemRadio"
  };
};
/*Gent Commander inherets from base Gent soldier
They get a different name, and get aviators / beret*/
class Gent_Commander: Gent_Soldier {
  displayName = "Gent Command";
  editorPreview = "\G_Team\img\ui\editor_icons\icon_gent_command_CO.paa"
  linkedItems[] = {
    "H_beret_blk",
    "G_Aviator",
    "ItemMap",
    "ItemCompass",
    "ItemWatch",
    "ItemRadio"
  };
  respawnLinkedItems[] = {
    "H_beret_blk",
    "G_Aviator",
    "ItemMap",
    "ItemCompass",
    "ItemWatch",
    "ItemRadio"
  };
};

class Gent_RoleRestricted : Gent_Soldier { //used by ranked classes
  scope = 0;
  attendant = 0;
  engineer = 1;
  canDeactivateMines = 0;
};
