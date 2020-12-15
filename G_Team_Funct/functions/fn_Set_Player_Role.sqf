/*
	Author: Ada

	Description:
	Parameter(s):
	Returns:
*/

params["_role"];

_rank = missionNamespace getVariable "GentEquipmentRank";
_rankS = [
	"Gent_AWP_S_Rank",
	"Gent_HUGE_S_Rank",
	"Gent_Medic_S_Rank",
	"Gent_Rifle_S_Rank",
	"Gent_Boom_S_Rank",
	"Gent_Mule_S_Rank"
];
_rankA = [
	"Gent_AWP_A_Rank",
	"Gent_HUGE_A_Rank",
	"Gent_Medic_A_Rank",
	"Gent_Rifle_A_Rank",
	"Gent_Boom_A_Rank",
	"Gent_Mule_A_Rank"
];_rankB = [
	"Gent_AWP_B_Rank",
	"Gent_HUGE_B_Rank",
	"Gent_Medic_B_Rank",
	"Gent_Rifle_B_Rank",
	"Gent_Boom_B_Rank",
	"Gent_Mule_B_Rank"
];
_rankC = [
	"Gent_AWP_C_Rank",
	"Gent_HUGE_C_Rank",
	"Gent_Medic_C_Rank",
	"Gent_Rifle_C_Rank",
	"Gent_Boom_C_Rank",
	"Gent_Mule_C_Rank"
];
_rankD = [
	"Gent_AWP_D_Rank",
	"Gent_HUGE_D_Rank",
	"Gent_Medic_D_Rank",
	"Gent_Rifle_D_Rank",
	"Gent_Boom_D_Rank",
	"Gent_Mule_D_Rank"
];
_fail = false;

getRole = {
	params["_role", "_roleList"];
	_classOfChoice = "";
	switch ( _role ) do {
		case "AWP": {_classOfChoice = (_roleList select 0);};
		case "HUG": {_classOfChoice = (_roleList select 1);};
		case "MED": {_classOfChoice = (_roleList select 2);};
		case "RIF": {_classOfChoice = (_roleList select 3);};
		case "BOO": {_classOfChoice = (_roleList select 4);};
		case "MUL": {_classOfChoice = (_roleList select 5);};
		default {_fail = true;};
	};
	if(_fail) exitWith { 
		0;  
	};
	
	[_classOfChoice] call Gent_fnc_Set_Player_Class;
};
switch ( _rank ) do {
	case "Rank S": {[_role, _rankS] call getRole;};
	case "Rank A": {[_role, _rankA] call getRole;};
	case "Rank B": {[_role, _rankB] call getRole;};
	case "Rank C": {[_role, _rankC] call getRole;};
	case "Rank D": {[_role, _rankD] call getRole;};
};
