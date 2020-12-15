/*
	Author: Ada

	Description:
	Parameter(s):
	Returns:
*/

params["_class"];

_isOfficer = typeOf player == "Gent_Officer";
_isCommander = typeof player == "Gent_Commander";
_isLeader = ( leader group player == player );
if (!_isOfficer || !_isCommander) then {
	_loadout = getUnitLoadout (configFile >> "CfgVehicles" >> _class);
	player setUnitLoadout _loadout;
} else {
	_oldPlayer = player;
	_playerReviveEnabled =  [ player ] call BIS_fnc_reviveEnabled;
	[_oldPlayer] spawn {
		params ["_oldPlayer"];
		waitUntil {!(isPlayer _oldPlayer)};
		deleteVehicle _oldPlayer;
	};
	_unit = group player createUnit [_class, position player, [], 0, "FORM"];
	selectPlayer _unit;
	
	if( _isLeader ) then {
		group player selectLeader player;
	};
	if( _playerReviveEnabled ) then {
		call BIS_fnc_reviveInit;
	};
};