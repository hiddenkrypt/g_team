
//all units are classes defined inside CfgVehicles
class CfgVehicles{

  //all inherited classes need to be referenced before they can be used
//backpack supers
  class B_Messenger_Black_F;
  class B_AssaultPack_rgr;
  class CUP_B_GER_Medic_FLecktarn;
  class B_LegStrapBag_black_F;
  class B_FieldPack_khk;
  class B_Bergen_mcamo_F;
  class B_Bergen_tna_F;
  class B_Carryall_oli;
  class B_Carryall_oucamo;
//infantry supers
  class I_G_Soldier_F;
//aircraft super classes
  class CUP_B_UH60M_Unarmed_FFV_US;
//ground vehicle supers
  class CUP_O_UAZ_Open_CHDKZ;
  class CUP_O_GAZ_Vodnik_PK_RU;


  #include "CfgVehicles\AirVehicles.hpp" //chopper
  #include "CfgVehicles\GroundVehicles.hpp" // UAZ command car, Vodnik party van
  #include "CfgVehicles\Unarmed.hpp" //unarmed infantry (mission characters)
  #include "CfgVehicles\D_Rank.hpp" //D rank infantry
  #include "CfgVehicles\C_Rank.hpp" //C rank infantry
  #include "CfgVehicles\B_Rank.hpp" //B rank infantry
  #include "CfgVehicles\A_Rank.hpp" //B rank infantry
};
