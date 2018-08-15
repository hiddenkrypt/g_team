

class Gent_AWP_C_Pack : B_Messenger_Black_F {
  scope = 1;
  class TransportMagazines {
    mag_xx(APERSTripMine_Wire_Mag, 1);
    mag_xx(CUP_5Rnd_86x70_L115A1, 4);
    mag_xx(ClaymoreDirectionalMine_Remote_Mag, 1);
  };
};
class Gent_HUGE_C_Pack : Gent_HUGE_D_Pack {};

class Gent_medic_C_Pack : Gent_medic_D_Pack {};

class Gent_Rifle_C_Pack : Gent_Rifle_D_Pack {};

class Gent_Mule_C_Pack : B_Carryall_oli {
  scope = 1;
  class TransportMagazines {
    mag_xx(30Rnd_556x45_Stanag_red,20);
    mag_xx(CUP_5Rnd_86x70_L115A1,1);
    mag_xx(CUP_200Rnd_TE4_Red_Tracer_556x45_M249,1);
  };
  class TransportItems {
    item_xx(FirstAidKit,4);
  };
};
class Gent_Boom_C_Pack : B_Carryall_oucamo {
  scope = 1;
  class TransportMagazines {
    mag_xx(DemoCharge_Remote_Mag,3);
    mag_xx(APERSMineDispenser_Mag,1);
    mag_xx(CUP_M72A6_M,1);
  };
  class TransportItems {
    item_xx(MineDetector,1);
    item_xx(FirstAidKit,2);
  };
};
