class CfgFunctions
{
	class Gent //unique mod namespace
	{
    /*
      function reference is automatically generated from the file property and
      the name of the empty class:
      {file} + "fn_" + {classname} + ".sqf"
      "G_Team\src\" + "fn_" + "Init_HQ" + ".sqf"
      thus this loads the file in G_Team\src\fn_Init_HQ.sqf
      The function can be called in any arma script with
      "call {Mod namespace}_fnc_{classname}"
      thus:
      "[0] call Gent_fnc_Init_HQ;"
      (Gent_fnc_Init_HQ takes an integer argument, in the above example, 0)
    */
		class MissionInits
		{
      tag = "Gent"
			file = "G_Team\src\functions";
			class Init_HQ {};
		};
	};
};
