class CfgSounds
{
	sounds[] = {};
	class G_Team_airhorn{
		name = "airhorn";   // how the sound is referred to in the editor (e.g. trigger effects)
		sound[] = {"G_Team\sfx\airhorn.ogg", 1, 1, 400}; // filename, volume, pitch, distance
		titles[] = {0, "*DOOT.*"};  // subtitle delay in seconds, subtitle text
	};
	class G_Team_airporn{
		name = "airporn";
		sound[] = {"G_Team\sfx\airporn.ogg", 1, 1, 400};
		titles[] = {0, "*DOOT DOODOODOODOOT*"};
	};
  class G_Team_hello{
    name = "hello";
    sound[] = {"G_Team\sfx\hello.ogg", 1, 1, 100};
    titles[] = {0, "HELLO"};
  };
  class G_Team_alertVA{
		name = "alertVA";
		sound[] = {"G_Team\sfx\alertVA.ogg", 1, 1, 300};
		titles[] = {1, "'All personnel: report to the main courtyard for emergency briefing. I say again. All personnel: report to the main courtyard for briefing.'"};
  };
  class G_Team_goodLuck{
		name = "alertVA";
		sound[] = {"G_Team\sfx\goodLuck.ogg", 1, 1, 400};
		titles[] = {0, "'Good Luck!'"};
  };
};
