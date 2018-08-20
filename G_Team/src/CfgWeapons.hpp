
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
  class CUP_hgun_Glock17;
  class CUP_lmg_m249_pip2;
  class CUP_arifle_L85A2_G;
  class CUP_srifle_AWM_wdl;
  class arifle_AK12_F;
  class CUP_arifle_RPK74;
  class srifle_LRR_F;
  class MMG_02_black_F;
  class CUP_arifle_Mk17_STD_black;
  class CUP_arifle_Mk17_CQC_SFG_black;
  class CUP_srifle_M107_Base;

  #include "CfgWeapons\D_Rank_Weapons.hpp"
  #include "CfgWeapons\C_Rank_Weapons.hpp"
  #include "CfgWeapons\B_Rank_Weapons.hpp"
  #include "CfgWeapons\A_Rank_Weapons.hpp"
  #include "CfgWeapons\S_Rank_Weapons.hpp"

};
