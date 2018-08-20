

class Gent_AWP_S_Pack : B_Carryall_oli {
  scope = 1;
  class TransportMagazines {
    mag_xx(APERSTripMine_Wire_Mag, 2);
    mag_xx(CUP_10Rnd_127x99_M107, 5);
    mag_xx(ClaymoreDirectionalMine_Remote_Mag, 1);
    mag_xx(SmokeShell, 1);
  };
  class TransportItems {
    item_xx(FirstAidKit, 2);
  };
};

class Gent_HUGE_S_Pack : B_Carryall_oli {
  scope = 1;
  class TransportMagazines {
    mag_xx(130Rnd_338_Mag, 2);
    mag_xx(HandGrenade, 1)
  };
  class TransportItems {
    item_xx(FirstAidKit, 1);
  };
};

class Gent_medic_S_Pack : Gent_medic_D_Pack {};

class Gent_Rifle_S_Pack : B_Carryall_oli {
  scope = 1;
  class TransportMagazines {
    mag_xx(CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR, 7);
    mag_xx(HandGrenade, 2);
    mag_xx(SmokeShell, 2);
  };
  class TransportItems {
    item_xx(FirstAidKit, 3);
  };
};

class Gent_Mule_S_Pack : B_Bergen_mcamo_F {
  scope = 1;
  class TransportMagazines {
    mag_xx(CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR, 15);
    mag_xx(CUP_10Rnd_127x99_M107, 2);
    mag_xx(130Rnd_338_Mag, 1);
  };
  class TransportItems {
    item_xx(FirstAidKit, 3);
  };
};

class Gent_Boom_S_Pack : B_Bergen_tna_F {
  scope = 1;
  class TransportMagazines {
    mag_xx(Titan_AT, 1);
    mag_xx(DemoCharge_Remote_Mag, 2);
  };
  class TransportItems {
    item_xx(MineDetector, 1);
  };
};
