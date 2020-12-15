//inheritance
class RscButton;
class RscFrame;
class RscText;
class RscCheckbox; 
class RscPicture;
class IGUIBack;

class Gent_Rsc_AdminClassPicker {
	idd = 1312;
	movingEnable = false;
	enableSimulation = true;
	controlsBackground[] = {
		Gent_PickerBackground_IGUIBack_A,
		Gent_ClassPicker_Frame_A,
		Gent_Logo_Picture_A,
		Gent_Admin_Frame_A
	};
	controls[] = {
		Gent_X_Button_A,
		Gent_HUGE_Button_A,
		Gent_Mule_Button_A,
		Gent_Boom_Button_A,
		Gent_Sniper_Button_A,
		Gent_Medic_Button_A,
		Gent_Rifle_Button_A,
		Gent_DeathyellOption_Checkbox_A,
		GGG_DeathyellLabel_Text_A,
		Gent_RankS_Button_A,
		Gent_RankA_Button_A,
		Gent_RankB_Button_A,
		Gent_RankC_Button_A,
		Gent_RankD_Button_A,
		Gent_EquipmentRank_Text_A
	};
	#include "guiDialogs\AdminPickerDialog.hpp"
};

class Gent_Rsc_ClassPicker {
	idd = 1313;	
	movingEnable = false;
	enableSimulation = true;
	controlsBackground[] = {
		Gent_PickerBackground_IGUIBack,
		Gent_ClassPicker_Frame,
		Gent_Logo_Picture
	};
	controls[] = {
		Gent_X_Button,
		Gent_HUGE_Button,
		Gent_Mule_Button,
		Gent_Boom_Button,
		Gent_Sniper_Button,
		Gent_Medic_Button,
		Gent_Rifle_Button
	};
	#include "guiDialogs\PickerDialog.hpp"
		
};