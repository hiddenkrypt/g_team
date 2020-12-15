/*
	Author: Rav-T

	Description:
		sets up all code for the loadout computer object and GUI
	Parameter(s):
		Object to be turned into a loadout computer
	Returns:
	spawned execution unit
*/
params ["_comp"];

missionNamespace setVariable [ "GentDeathyells", true, true ];
missionNamespace setVariable [ "GentEquipmentRank", "Rank C", true ];

_comp setVariable [ "_screensaver", true ];
_comp setVariable [ "_inUse", 0 ];

[ _comp ] spawn {
	params ["_comp"];
	_screens = ["G_Team\img\waifu\ai_CA.paa", "G_Team\img\waifu\eclipsa_CA.paa", "G_Team\img\waifu\fenneko_CA.paa", "G_Team\img\waifu\fennekowashimi_CA.paa", "G_Team\img\waifu\freya_CA.paa", "G_Team\img\waifu\hekapoo_CA.paa", "G_Team\img\waifu\kan0_CA.paa", "G_Team\img\waifu\kan1_CA.paa", "G_Team\img\waifu\katt_CA.paa", "G_Team\img\waifu\kokonoe_CA.paa", "G_Team\img\waifu\lapis_CA.paa", "G_Team\img\waifu\molotov_CA.paa", "G_Team\img\waifu\mutio_CA.paa", "G_Team\img\waifu\nepeta_CA.paa", "G_Team\img\waifu\rarity_CA.paa", "G_Team\img\waifu\rich_CA.paa", "G_Team\img\waifu\rose_CA.paa", "G_Team\img\waifu\shoebill_CA.paa", "G_Team\img\waifu\tali_CA.paa", "G_Team\img\waifu\ukyo_CA.paa"];
	_count = 0;
	while { alive _comp } do {
		sleep 4;
		if ( _comp getVariable "_screensaver" ) then {
			_randomScreen = selectRandom _screens;
			_comp setObjectTextureGlobal [ 0, _randomScreen ];
		} else  {
			_count = _count + 1;
			if ( _count == 3 ) then {
			
				_count = 0;
				_comp setVariable ["_screensaver", true];
			};
		};
	};
};

_comp setObjectTextureGlobal [0,"G_Team\img\GGG_Logo_CA.paa"];
Setup_Admin_Controls = {
	params [ "_display" ];
	_deathYellCheckbox = _display displayCtrl 2800;
	_deathYellCheckbox cbSetChecked !!(missionNamespace getVariable "GentDeathyells");
	_deathYellCheckbox ctrlAddEventHandler ["CheckedChanged", "params ['_control', '_checked'];hint 'checkbox event';[_checked] call Gent_fnc_Set_Deathyell_Option;"];
};

Loadout_Picker_GUI = {
	_isAdmin = !((call BIS_fnc_admin) == 0);
	_isOfficer = typeOf player == "Gent_Officer";
	_isCommander = typeof player == "Gent_Commander";
	if( _isAdmin || _isOfficer || _isCommander ) then {
		createDialog "Gent_Rsc_AdminClassPicker";
		waitUntil { !isNull (findDisplay 1312 ); };
		[ findDisplay 1312 ] call Setup_Admin_Controls;
	} else {
		createDialog "Gent_Rsc_ClassPicker";
		waitUntil { !isNull (findDisplay 1313 ); };
	};
};

	
_comp addAction ["Choose Loadout", {
		params ["_comp", "_caller", "_actionId", "_arguments"]; // script
		_comp setObjectTextureGlobal [0,"G_Team\img\GGG_Logo_CA.paa"];
		_comp setVariable ["_screensaver", false]; 
		[] call Loadout_Picker_GUI;
}];