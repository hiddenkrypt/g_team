

class I_G_Soldier_F;
//Basic gent soldier inherets from AAF Rifleman
class Gent_Soldier: I_G_Soldier_F {
  GENT_UNIT
  scopeCurator = 0;
  woman = 1; //does nothing :<
  role = "Gent"; //role displayed in MP as a join slot
  displayName = "Gent Soldier";
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
    "G_WirelessEarpiece_F",
    "H_Hat_Camo"
  };
  respawnLinkedItems[] = {
    "ItemWatch",
    "ItemRadio",
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

  //prevent randomization of hat/facewear, get GGG logo patch
  class EventHandlers {
    init = "(_this select 0) setVariable ['BIS_enableRandomization', false];"
  }
};

/*Gent Officer inherets from base Gent soldier
They get a different name/role, and get a boonie hat*/
class Gent_Officer: Gent_Soldier {
  displayName = "Gent Officer";
  role = "Gent Officer (tylah)";
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
They get a different name/role, and get aviators / beret*/
class Gent_Commander: Gent_Soldier {
  displayName = "Gent Command";
  role = "Gent Command (Rav-T)";
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
