
class B_Messenger_Black_F;
class B_AssaultPack_rgr;
class CUP_B_GER_Medic_FLecktarn;
class B_LegStrapBag_black_F;
class B_FieldPack_khk;

class Gent_AWP_D_Pack : B_Messenger_Black_F{
  scope = 1;
  class TransportMagazines {
    mag_xx(APERSTripMine_Wire_Mag, 2);
    mag_xx(CUP_5Rnd_86x70_L115A1, 4);
  };
}
class Gent_HUGE_D_Pack : B_AssaultPack_rgr{
  scope = 1;
  class TransportMagazines {
    mag_xx(CUP_200Rnd_TE1_Red_Tracer_556x45_M249,3);
  };
}
class Gent_medic_D_Pack : CUP_B_GER_Medic_FLecktarn{
  scope = 1;
  class TransportMagazines {
  };
  class TransportItems {
    item_xx(Medikit,1);
    item_xx(FirstAidKit,5);
  };
}
class Gent_Rifle_D_Pack : B_LegStrapBag_black_F{
  scope = 1;
  class TransportMagazines {
    mag_xx(30Rnd_556x45_Stanag_red,5)
  };
  class TransportItems {
    item_xx(FirstAidKit,2);
  };
}
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
