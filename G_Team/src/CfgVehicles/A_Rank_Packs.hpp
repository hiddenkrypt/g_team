

class Gent_AWP_A_Pack : B_Carryall_oli {
  scope = 1;
  class TransportMagazines {
    mag_xx(APERSTripMine_Wire_Mag, 2);
    mag_xx(7Rnd_408_Mag, 8);
    mag_xx(ClaymoreDirectionalMine_Remote_Mag, 1);
    mag_xx(SmokeShell, 1);
  };
  class TransportItems {
    item_xx(FirstAidKit, 2);
  };
};

class Gent_HUGE_A_Pack : B_Carryall_oli {
  scope = 1;
  class TransportMagazines {
    mag_xx(CUP_75Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M, 6);
    mag_xx(HandGrenade, 2)
  };
  class TransportItems {
    item_xx(FirstAidKit, 1);
  };
};

class Gent_medic_A_Pack : Gent_medic_D_Pack {};

class Gent_Rifle_A_Pack : B_AssaultPack_rgr {
  scope = 1;
  class TransportMagazines {
    mag_xx(30Rnd_762x39_Mag_F, 6);
    mag_xx(HandGrenade, 2);
    mag_xx(SmokeShell, 2);
    mag_xx(SmokeShellRed, 1);
  };
  class TransportItems {
    item_xx(FirstAidKit, 3);
  };
};

class Gent_Mule_A_Pack : Gent_Mule_B_Pack {};

class Gent_Boom_A_Pack : B_Bergen_tna_F {
  scope = 1;
  class TransportMagazines {
    mag_xx(Titan_AT, 1);
    mag_xx(DemoCharge_Remote_Mag, 2);
  };
  class TransportItems {
    item_xx(MineDetector, 1);
  };
};
