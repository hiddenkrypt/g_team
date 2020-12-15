class CfgVehicles {
	class Land_Laptop_02_unfolded_F;
	class Gent_Props_LoadoutPicker: Land_Laptop_02_unfolded_F {
		author = "Ada";
		editorCategory = "Gent_Props";
		editorSubcategory = "Gent_Subcat_Useful";
		displayName = "Gent Loadout Picker";
		scope = 2;
		scopeCurator = 2;
		class EventHandlers {
			init = "(_this select 0) call Gent_fnc_Loadout_Computer_Setup;"
		}
	};
};