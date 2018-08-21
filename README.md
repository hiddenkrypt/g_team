# The Gentlemen's Gaming Group Presents: **The horrid misadventures of the G-Team**

Now wanted by the United States military for a crime they absolutely did commit, they survive underground as soldiers of misfortune. If you have a problem. If you need something done. If nobody else is willing to help, and if you have the money... hire somebody else. But if you can't afford anybody better, then maybe you can hire... the G-Team.

We're not the bottom of the barrel. We know those guys, and we're jealous. I mean, they get to have a barrel.


Config and texture files for a GGG-centered ARMA 3 mod

This mod adds a G-Team faction to ARMA 3. This faction is down on it's luck, and will be the focus of a series of missions forming a coherent storyline. Produced by the Gentlemen's Gaming Group.

##Build Instructions
NOTE: This is only if you wish to make your own changes to the mod and try them out. If you simply wish to use the mod, it's better to load it from the Steam Workshop. The workshop mod is friends-only though...

###get the code
First option: Clone the repo with git- `git clone https://github.com/hiddenkrypt/g_team.git`
Second Option: Click the "Clone or Download" Button in the github repo, select to download .zip

###compile PBO
Using the Arma 3 tools provided by Bohemia Interactive (free on steam if you have ARMA 3 there) to open BI's Addon Builder. Use the addon builder to create a pbo out of the G_Team folder in the code.

###Arrange the Mod files four arma to mount
In your ARMA 3 installation folder, find the "addons" directory and make a new folder in there named "@G_Team": `Arma 3\Addons\@G_Team`. In that folder, put the Mod.cpp file from the code, and make a new folder named "Addons". Inside that folder, put the PBO file you generated with the Addon Builder.

###Activate the Addon in ARMA 3
Open the ARMA 3 launcher, go to your `MODS` tab, and click the `local mod` button. In the dialogue that pops up, open the @G_Team folder you made in the previous step. Make sure you have the CUP Weapons, CUP Vehicles, Cup Units, and CBA_A3 addons installed and loaded as well, the G-Team needs them to run!

###Run arma 3!
