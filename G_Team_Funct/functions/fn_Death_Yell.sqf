/*
  Author: Rav-T
  Description:
 plays a random deathyell noise at the site of an object passed as the first
 parameter.
  Parameter(s):
 corpse - object - recently deceased player object

  Returns:
*/

params ["_corpse"];

_yells = [
  "G_Team_d_ahFuck", "G_Team_d_knuckles_ohno", "G_Team_d_alreadyDead",
  "G_Team_d_krillowned", "G_Team_d_billyNo", "G_Team_d_lawAndOrder",
  "G_Team_d_blackAndWhiteDeathWhisper", "G_Team_d_lifealert",
  "G_Team_d_bloodBloodBloodAndDeath", "G_Team_d_manscream2", "G_Team_d_bubsy",
  "G_Team_d_megaman", "G_Team_d_bubsy2", "G_Team_d_nelson", "G_Team_d_bummer",
  "G_Team_d_nope", "G_Team_d_castlevania", "G_Team_d_nwn_mookDeath",
  "G_Team_d_dearSister", "G_Team_d_pacman", "G_Team_d_doh", "G_Team_d_roblox",
  "G_Team_d_duckTales", "G_Team_d_sfko", "G_Team_d_dumbRobot",
  "G_Team_d_sideshowBobGrumble", "G_Team_d_dundundun", "G_Team_d_smb1",
  "G_Team_d_fart", "G_Team_d_smb2", "G_Team_d_fightmoney", "G_Team_d_smb3",
  "G_Team_d_goofyyell", "G_Team_d_snake", "G_Team_d_haaaaaaaaaaa",
  "G_Team_d_starfox_hit", "G_Team_d_haventdefeatedmeyet", "G_Team_d_tetris_gb",
  "G_Team_d_homer1", "G_Team_d_tmnt", "G_Team_d_homer2", "G_Team_d_toasty",
  "G_Team_d_homer3", "G_Team_d_vasepluscat", "G_Team_d_hopesDeleted",
  "G_Team_d_wilhelm", "G_Team_d_iCurseZoidberg", "G_Team_d_woman", "G_Team_d_imdead",
  "G_Team_d_yee", "G_Team_d_jontron_dead", "G_Team_d_youmiserabledingus",
  "G_Team_d_jontron_ironicdeathsound", "G_Team_d_youreADick", "G_Team_d_kirby",
  "G_Team_d_zelda"
];


private _dummy = "#particlesource" createVehicleLocal [0,  0,  0];
_dummy setPosWorld getPosWorld _corpse;
_yellOfChoice = selectRandom _yells;
_dummy say3D (_yellOfChoice);
