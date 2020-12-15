//Gent_fnc_Set_Deathyell_Option

params ["_setting"];
hint format ["setting: %1", _setting ];

if( _setting == 0 ) then {
	hint "GGG Option: Deathyells deactivated";
	missionNamespace setVariable [ "GentDeathyells", false, true ];
} else {
	hint "GGG Option: Deathyells activated";
	missionNamespace setVariable [ "GentDeathyells", true, true ];
};