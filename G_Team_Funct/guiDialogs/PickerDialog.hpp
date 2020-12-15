//Picker Dialog


class Gent_PickerBackground_IGUIBack: IGUIBack
{
	idc = 2203;  
	x = 0.37 * safezoneW + safezoneX;
	y = 0.28 * safezoneH + safezoneY;
	w = 0.23 * safezoneW;
	h = 0.34 * safezoneH;
	colorBackground[] = {0,0,0,.6};
};
class Gent_ClassPicker_Frame: RscFrame
{
	idc = 1800;
	text = "GGG Logistics Outfitting System"; 
	x = 0.379513 * safezoneW + safezoneX;
	y = 0.29364 * safezoneH + safezoneY;
	w = 0.21 * safezoneW;
	h = 0.308 * safezoneH;
};
class Gent_Logo_Picture: RscPicture
{
	idc = 1200;
	text = "G_Team\img\GGG_Logo_CA.paa";
	x = 0.46 * safezoneW + safezoneX;
	y = 0.318 * safezoneH + safezoneY;
	w = 0.0525 * safezoneW;
	h = 0.098 * safezoneH;
};
class Gent_X_Button: RscButton
{
	idc = 1600;
	text = "X"; 
	x = 0.565625 * safezoneW + safezoneX;
	y = 0.318 * safezoneH + safezoneY;
	w = 0.013125 * safezoneW;
	h = 0.028 * safezoneH;
	action = "closeDialog 2;";
};
class Gent_HUGE_Button: RscButton
{
	idc = 1601;
	text = "H.U.G.E"; 
	x = 0.460625 * safezoneW + safezoneX;
	y = 0.43 * safezoneH + safezoneY;
	w = 0.0525 * safezoneW;
	h = 0.07 * safezoneH;
	action = "['HUG'] call Gent_fnc_Set_Player_Role";
};
class Gent_Mule_Button: RscButton
{
	idc = 1602;
	text = "Mule"; 
	x = 0.460625 * safezoneW + safezoneX;
	y = 0.514 * safezoneH + safezoneY;
	w = 0.0525 * safezoneW;
	h = 0.07 * safezoneH;
	action = "['MUL'] call Gent_fnc_Set_Player_Role";
};
class Gent_Boom_Button: RscButton
{
	idc = 1603;
	text = "Boom"; 
	x = 0.52625 * safezoneW + safezoneX;
	y = 0.514 * safezoneH + safezoneY;
	w = 0.0525 * safezoneW;
	h = 0.07 * safezoneH;
	action = "['BOO'] call Gent_fnc_Set_Player_Role";
};
class Gent_Sniper_Button: RscButton
{
	idc = 1604;
	text = "Sniper"; 
	x = 0.52625 * safezoneW + safezoneX;
	y = 0.43 * safezoneH + safezoneY;
	w = 0.0525 * safezoneW;
	h = 0.07 * safezoneH;
	action = "['AWP'] call Gent_fnc_Set_Player_Role";
};
class Gent_Rifle_Button: RscButton
{
	idc = 1606;
	text = "Rifle"; 
	x = 0.395 * safezoneW + safezoneX;
	y = 0.43 * safezoneH + safezoneY;
	w = 0.0525 * safezoneW;
	h = 0.07 * safezoneH;
	action = "['RIF'] call Gent_fnc_Set_Player_Role";
};
class Gent_Medic_Button: RscButton
{
	idc = 1605;
	text = "Medic"; 
	x = 0.395 * safezoneW + safezoneX;
	y = 0.514 * safezoneH + safezoneY;
	w = 0.0525 * safezoneW;
	h = 0.07 * safezoneH;
	action = "['MED'] call Gent_fnc_Set_Player_Role";
};