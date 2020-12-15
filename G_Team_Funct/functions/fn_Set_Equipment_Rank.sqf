/*
	Author: Ada

	Description:

	Parameter(s):
	_rank
	Returns:
*/

params ["_rank"];

fixInvalidCharacters = {

	params["_rank"];
	
	_isOfficer = ( typeOf player == "Gent_Officer" );
	_isCommander = ( typeof player == "Gent_Commander" );
	_isLeader = ( leader group player == player );
	_newClass = "Gent_Soldier";
	if( _isOfficer ) then {
		_newClass = "Gent_Officer";
	};
	if( _isCommander ) then {
		_newClass = "Gent_Commander";
	};
	[_newClass] call Gent_fnc_Set_Player_Class;
	hintC "GGG Equipment Rank has changed, please report back to the Logistics Computer to Re-Arm.";	
};

if ( !( missionNamespace getVariable "GentEquipmentRank" == _rank) ) then {
	missionNamespace setVariable [ "GentEquipmentRank", _rank, true ];
	[ _rank ] call fixInvalidCharacters;
};
0;