//admin picker dialog

class Gent_PickerBackground_IGUIBack_A: IGUIBack
{
	idc = 2203; 
	x = 0.30 * safezoneW + safezoneX;
	y = 0.28 * safezoneH + safezoneY;
	w = 0.345 * safezoneW;
	h = 0.34 * safezoneH;
	colorBackground[] = {0,0,0,.6};
};
class Gent_ClassPicker_Frame_A: RscFrame
{
	idc = 1800;
	text = "GGG Logistics Outfitting System"; 
	x = 0.31625 * safezoneW + safezoneX;
	y = 0.29 * safezoneH + safezoneY;
	w = 0.18375 * safezoneW;
	h = 0.308 * safezoneH;
};
class Gent_Admin_Frame_A: RscFrame
{
	idc = 1801;
	text = "GGG Admin Options"; 
	x = 0.506562 * safezoneW + safezoneX;
	y = 0.29 * safezoneH + safezoneY;
	w = 0.124687 * safezoneW;
	h = 0.308 * safezoneH;
};
class Gent_Logo_Picture_A: RscPicture
{
	idc = 1200;
	text = "G_Team\img\GGG_Logo_CA.paa";
	x = 0.381875 * safezoneW + safezoneX;
	y = 0.318 * safezoneH + safezoneY;
	w = 0.0525 * safezoneW;
	h = 0.098 * safezoneH;
};
class Gent_X_Button_A: RscButton
{
	idc = 1600;
	text = "X"; 
	x = 0.605 * safezoneW + safezoneX;
	y = 0.318 * safezoneH + safezoneY;
	w = 0.013125 * safezoneW;
	h = 0.028 * safezoneH;
	action = "closeDialog 2;";
};
class Gent_HUGE_Button_A: RscButton
{
	idc = 1601;
	text = "H.U.G.E"; 
	x = 0.381875 * safezoneW + safezoneX;
	y = 0.43 * safezoneH + safezoneY;
	w = 0.0525 * safezoneW;
	h = 0.07 * safezoneH;
	action = "['HUG'] call Gent_fnc_Set_Player_Role";
};
class Gent_Mule_Button_A: RscButton
{
	idc = 1602;
	text = "Mule"; 
	x = 0.381875 * safezoneW + safezoneX;
	y = 0.514 * safezoneH + safezoneY;
	w = 0.0525 * safezoneW;
	h = 0.07 * safezoneH;
	action = "['MUL'] call Gent_fnc_Set_Player_Role";
};
class Gent_Boom_Button_A: RscButton
{
	idc = 1603;
	text = "Boom"; 
	x = 0.440937 * safezoneW + safezoneX;
	y = 0.514 * safezoneH + safezoneY;
	w = 0.0525 * safezoneW;
	h = 0.07 * safezoneH;
	action = "['BOO'] call Gent_fnc_Set_Player_Role";
};
class Gent_Sniper_Button_A: RscButton
{
	idc = 1604;
	text = "Sniper"; 
	x = 0.440937 * safezoneW + safezoneX;
	y = 0.43 * safezoneH + safezoneY;
	w = 0.0525 * safezoneW;
	h = 0.07 * safezoneH;
	action = "['AWP'] call Gent_fnc_Set_Player_Role";
};
class Gent_Medic_Button_A: RscButton
{
	idc = 1605;
	text = "Medic"; 
	x = 0.322812 * safezoneW + safezoneX;
	y = 0.514 * safezoneH + safezoneY;
	w = 0.0525 * safezoneW;
	h = 0.07 * safezoneH;
	action = "['MED'] call Gent_fnc_Set_Player_Role";
};
class Gent_Rifle_Button_A: RscButton
{
	idc = 1606;
	text = "Rifle"; 
	x = 0.322812 * safezoneW + safezoneX;
	y = 0.43 * safezoneH + safezoneY;
	w = 0.0525 * safezoneW;
	h = 0.07 * safezoneH;
	action = "['RIF'] call Gent_fnc_Set_Player_Role";
};
class Gent_DeathyellOption_Checkbox_A: RscCheckbox {
	idc = 2800;
	x = 0.519688 * safezoneW + safezoneX;
	y = 0.556 * safezoneH + safezoneY;
	w = 0.013125 * safezoneW;
	h = 0.028 * safezoneH;
	tooltip = "Checked turns on deathyells for all GGG personel"; 
};
class GGG_DeathyellLabel_Text_A: RscText
{
	idc = 1000;
	text = "Use Deathyells"; 
	x = 0.532812 * safezoneW + safezoneX;
	y = 0.556 * safezoneH + safezoneY;
	w = 0.091875 * safezoneW;
	h = 0.028 * safezoneH;
};
class Gent_RankS_Button_A: RscButton
{
	idc = 1607;
	text = "Rank S"; 
	x = 0.539375 * safezoneW + safezoneX;
	y = 0.416 * safezoneH + safezoneY;
	w = 0.0590625 * safezoneW;
	h = 0.028 * safezoneH;
	action = "['Rank S'] remoteExec ['Gent_fnc_Set_Equipment_Rank'];closeDialog 2;";
};
class Gent_RankA_Button_A: RscButton
{
	idc = 1608;
	text = "Rank A"; 
	x = 0.513125 * safezoneW + safezoneX;
	y = 0.458 * safezoneH + safezoneY;
	w = 0.0525 * safezoneW;
	h = 0.028 * safezoneH;
	action = "['Rank A'] remoteExec ['Gent_fnc_Set_Equipment_Rank'];closeDialog 2;";
};
class Gent_RankB_Button_A: RscButton
{
	idc = 1609;
	text = "Rank B"; 
	x = 0.572187 * safezoneW + safezoneX;
	y = 0.458 * safezoneH + safezoneY;
	w = 0.0525 * safezoneW;
	h = 0.028 * safezoneH;
	action = "['Rank B'] remoteExec ['Gent_fnc_Set_Equipment_Rank'];closeDialog 2;";
};
class Gent_RankC_Button_A: RscButton
{
	idc = 1610;
	text = "Rank C"; 
	x = 0.513125 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.0525 * safezoneW;
	h = 0.028 * safezoneH;
	action = "['Rank C'] remoteExec ['Gent_fnc_Set_Equipment_Rank'];closeDialog 2;";
};
class Gent_RankD_Button_A: RscButton
{
	idc = 1611;
	text = "Rank D"; 
	x = 0.572187 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.0525 * safezoneW;
	h = 0.028 * safezoneH;
	action = "['Rank D'] remoteExec ['Gent_fnc_Set_Equipment_Rank']; closeDialog 2;";
};
class Gent_EquipmentRank_Text_A: RscText
{
	idc = 1001;
	text = "GGG Equipment Ranking"; 
	x = 0.506562 * safezoneW + safezoneX;
	y = 0.36 * safezoneH + safezoneY;
	w = 0.124687 * safezoneW;
	h = 0.056 * safezoneH;
};

