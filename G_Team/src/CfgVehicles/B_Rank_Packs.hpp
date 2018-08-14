
class B_Bergen_mcamo_F;
class B_Bergen_tna_F;

class Gent_AWP_B_Pack : B_Carryall_oli {
  scope = 1;
  class TransportMagazines {
    mag_xx(APERSTripMine_Wire_Mag, 1);
    mag_xx(7Rnd_408_Mag, 8);
    mag_xx(ClaymoreDirectionalMine_Remote_Mag, 1);
  };
  class TransportItems {
    item_xx(FirstAidKit,2);
  };
};
class Gent_HUGE_B_Pack : B_Carryall_oli {
  scope = 1;
  class TransportMagazines {
    mag_xx(CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M,6);
  };
};

class Gent_medic_B_Pack : Gent_medic_D_Pack {};

class Gent_Rifle_B_Pack : B_AssaultPack_rgr {
  scope = 1;
  class TransportMagazines {
    mag_xx(30Rnd_762x39_Mag_F,6);
    mag_xx(HandGrenade,2);
  };
  class TransportItems {
    item_xx(FirstAidKit,2);
  };
};
class Gent_Mule_B_Pack : B_Bergen_mcamo_F {
  scope = 1;
  class TransportMagazines {
    mag_xx(30Rnd_762x39_Mag_F,15);
    mag_xx(CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M,2);
    mag_xx(7Rnd_408_Mag,2);
  };
  class TransportItems {
    item_xx(FirstAidKit,2);
  };
};
class Gent_Boom_B_Pack : B_Bergen_tna_F {
  scope = 1;
  class TransportMagazines {
    mag_xx(DemoCharge_Remote_Mag,2);
    mag_xx(APERSMineDispenser_Mag,1);
    mag_xx(CUP_M72A6_M,2);
  };
  class TransportItems {
    item_xx(MineDetector,1);
  };
};
