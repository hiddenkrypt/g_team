/*
	Author: Rav-T

	Description:
	Sets textures on Gent Base Items. Items not on the map won't be set, to avoid
  errors. The parameter may change what textures are used.

	Parameter(s):
  episode - INT - zero indexed episode counter

	Returns:
	BOOLEAN - true
*/
switch(_this select 0) do {
  default {
    //signs
    if(! isNil "logo") then { logo setObjectTextureGlobal [0,"G_Team\img\GGG_Logo_CA.paa"] };
    if(! isNil "doorSign_Cyberwar") then { doorSign_Cyberwar setObjectTextureGlobal [0, "G_Team\img\signs\doorSign_Cyberwarfare_CA.paa"]; };
    if(! isNil "doorSign_Storage") then { doorSign_Storage setObjectTextureGlobal [0, "G_Team\img\signs\doorSign_Storage_CA.paa"]; };
    if(! isNil "doorSign_WarRoom") then { doorSign_WarRoom setObjectTextureGlobal [0, "G_Team\img\signs\doorSign_WarRoom_CA.paa"]; };
    if(! isNil "doorSign_Kitchen") then { doorSign_Kitchen setObjectTextureGlobal [0, "G_Team\img\signs\doorSign_Kitchen_CA.paa"]; };
    if(! isNil "doorSign_Medical") then { doorSign_Medical setObjectTextureGlobal [0, "G_Team\img\signs\doorSign_Medical_CA.paa"]; };
    if(! isNil "doorSign_Den") then { doorSign_Den setObjectTextureGlobal [0, "G_Team\img\signs\doorSign_Den_CA.paa"]; };
    if(! isNil "doorSign_VR") then { doorSign_VR setObjectTextureGlobal [0, "G_Team\img\signs\doorSign_VR_CA.paa"]; };
    if(! isNil "saltMine") then { saltMine setObjectTextureGlobal [0, "G_Team\img\signs\spray_salt_CA.paa"]; };
    if(! isNil "raptor") then { raptor setObjectTextureGlobal [0, "G_Team\img\signs\wallSign_raptor_CA.paa"]; };
    if(! isNil "screen") then { screen setObjectTextureGlobal [0, "G_Team\img\signs\projectorScreen_off_CA.paa"]; };
    if(! isNil "valve") then { valve setObjectTextureGlobal [0, "G_Team\img\signs\spray_valve_CA.paa"]; };

    //model textures
    if(! isNil "television") then { television setObjectTextureGlobal [0, "G_Team\img\model_textures\tv_dora_CO.paa"]; };
    if(! isNil "monitorVR") then { monitorVR setObjectTextureGlobal [0, "G_Team\img\model_textures\monitor_vr_CO.paa"]; };
    if(! isNil "ttt0") then { ttt0 setObjectTextureGlobal [0,"G_Team\img\model_textures\monitor_ttt0_CO.paa"]; };
    if(! isNil "ttt1") then { ttt1 setObjectTextureGlobal [0,"G_Team\img\model_textures\monitor_ttt1_CO.paa"]; };
    if(! isNil "ttt2") then { ttt2 setObjectTextureGlobal [0,"G_Team\img\model_textures\monitor_ttt2_CO.paa"]; };
    if(! isNil "ttt3") then { ttt3 setObjectTextureGlobal [0,"G_Team\img\model_textures\monitor_ttt3_CO.paa"]; };
    if(! isNil "baddragon") then { baddragon setObjectTextureGlobal [0,"G_Team\img\model_textures\monitor_badDragon_CO.paa"]; };

    //waifus <3
    if(! isNil "waifu_ai") then { waifu_ai setObjectTextureGlobal [0, "G_Team\img\waifu\ai_CA.paa"]; };
    if(! isNil "waifu_eclipsa") then { waifu_eclipsa setObjectTextureGlobal [0, "G_Team\img\waifu\eclipsa_CA.paa"]; };
    if(! isNil "waifu_fenneko") then { waifu_fenneko setObjectTextureGlobal [0, "G_Team\img\waifu\fenneko_CA.paa"]; };
    if(! isNil "waifu_fenshimi") then { waifu_fenshimi setObjectTextureGlobal [0, "G_Team\img\waifu\fennekowashimi_CA.paa"]; };
    if(! isNil "waifu_freya") then { waifu_freya setObjectTextureGlobal [0, "G_Team\img\waifu\freya_CA.paa"]; };
    if(! isNil "waifu_hekapoo") then { waifu_hekapoo setObjectTextureGlobal [0, "G_Team\img\waifu\hekapoo_CA.paa"]; };
    if(! isNil "waifu_kanaya0") then { waifu_kanaya0 setObjectTextureGlobal [0, "G_Team\img\waifu\kan0_CA.paa"]; };
    if(! isNil "waifu_kanaya1") then { waifu_kanaya1 setObjectTextureGlobal [0, "G_Team\img\waifu\kan1_CA.paa"]; };
    if(! isNil "waifu_katt") then { waifu_katt setObjectTextureGlobal [0, "G_Team\img\waifu\katt_CA.paa"]; };
    if(! isNil "waifu_kokonoe") then { waifu_kokonoe setObjectTextureGlobal [0, "G_Team\img\waifu\kokonoe_CA.paa"]; };
    if(! isNil "waifu_lapis") then { waifu_lapis setObjectTextureGlobal [0, "G_Team\img\waifu\lapis_CA.paa"]; };
    if(! isNil "waifu_molotov") then { waifu_molotov setObjectTextureGlobal [0, "G_Team\img\waifu\molotov_CA.paa"]; };
    if(! isNil "waifu_mutio") then { waifu_mutio setObjectTextureGlobal [0, "G_Team\img\waifu\mutio_CA.paa"]; };
    if(! isNil "waifu_nepeta") then { waifu_nepeta setObjectTextureGlobal [0, "G_Team\img\waifu\nepeta_CA.paa"]; };
    if(! isNil "waifu_rarity") then { waifu_rarity setObjectTextureGlobal [0, "G_Team\img\waifu\rarity_CA.paa"]; };
    if(! isNil "waifu_rich") then { waifu_rich setObjectTextureGlobal [0, "G_Team\img\waifu\rich_CA.paa"]; };
    if(! isNil "waifu_rose") then { waifu_rose setObjectTextureGlobal [0, "G_Team\img\waifu\rose_CA.paa"]; };
    if(! isNil "waifu_shoebill") then { waifu_shoebill setObjectTextureGlobal [0, "G_Team\img\waifu\shoebill_CA.paa"]; };
    if(! isNil "waifu_tali") then { waifu_tali setObjectTextureGlobal [0, "G_Team\img\waifu\tali_CA.paa"]; };
    if(! isNil "waifu_ukyo") then { waifu_ukyo setObjectTextureGlobal [0, "G_Team\img\waifu\ukyo_CA.paa"]; };
    if(! isNil "waifu_magazine") then { waifu_magazine setObjectTextureGlobal [0, "G_Team\img\waifu\smut_CA.paa"]; };
  };
};
true;
