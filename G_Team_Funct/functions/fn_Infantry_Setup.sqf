/*
	Author: Rav-T

	Description:
		Handles initialization code for infantry units
	Parameter(s):
		The infantry in question
	Returns: Killed Event Handle
*/
params ["_gent"];

_gent setVariable ['BIS_enableRandomization', false]; 

_gent addMPEventHandler ["MPKilled", {
	if ( missionNamespace getVariable "GentDeathyells" ) then {
		(_this select 0) call Gent_fnc_Death_Yell;
	};
}];
