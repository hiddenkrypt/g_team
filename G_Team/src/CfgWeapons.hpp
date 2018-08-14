
class CfgWeapons
{
  class ItemCore;
  class UniformItem;
  class Uniform_Base: ItemCore
  {
      class ItemInfo;
  };

  class Gent_Uniform: Uniform_Base {
    scope = 2;
    picture = "\G_Team\img\ui\editor_icons\icon_gent_uniform_CO.paa"
    displayName = "Gent TEST Uniform";
    class ItemInfo : UniformItem {
        uniformModel = "-";
        uniformClass = "Gent_Soldier";
        containerClass = "Supply50";
        mass = 50;
    };
  };
  #include "CfgWeapons\D_Rank_Weapons.hpp"
  #include "CfgWeapons\C_Rank_Weapons.hpp"
  #include "CfgWeapons\B_Rank_Weapons.hpp"

};
