/*
CfgGroups defines compositions (group items you can place in 3DEN and zeus)
*/

class CfgGroups {
  class INDEP { //Group is a green team group
    side = 2;
    class Gent_groups { //mod specifc name
      name = "G-Team";
      class Infantry { //arbitrary name
        name = "Gent Infantry";
        class SpawnGroup { //can be used as an argument for a script to create a composition
          name = "Player Spawn Group";
          side = 2;
          faction = "GGG_Faction"; //defined in CfgFactionClasses
          //each unit in the group is "class Unit#" in order. It's dumb but it is what it is.
          class Unit0 { //unit0 is group leader
            side = 2; //for some reason, the fact that the parent class is side=2, and the INDEP class is side=2, doesn't matter, have to define it for each group unit.
            vehicle = "Gent_Officer"; //as defined in CfgVehicles
            rank = "CORPORAL"; //for AI skill levels
            position[] = {0,0,0}; // relative to where you click when placing the group, {x,y,z}, in meters
          };
          class Unit1 {
            side = 2;
            vehicle = "Gent_Soldier";
            rank = "PRIVATE";
            position[] = {0,-2,0};
          };
          class Unit2 {
            side = 2;
            vehicle = "Gent_Soldier";
            rank = "PRIVATE";
            position[] = {2,-2,0};
          };
          class Unit3 {
            side = 2;
            vehicle = "Gent_Soldier";
            rank = "PRIVATE";
            position[] = {-2,-2,0};
          };
          class Unit4 {
            side = 2;
            vehicle = "Gent_Soldier";
            rank = "PRIVATE";
            position[] = {0,-4,0};
          };
          class Unit5 {
            side = 2;
            vehicle = "Gent_Soldier";
            rank = "PRIVATE";
            position[] = {2,-4,0};
          };
          class Unit6 {
            side = 2;
            vehicle = "Gent_Soldier";
            rank = "PRIVATE";
            position[] = {-2,-4,0};
          };
          class Unit7 {
            side = 2;
            vehicle = "Gent_Soldier";
            rank = "PRIVATE";
            position[] = {0,-6,0};
          };
          class Unit8 {
            side = 2;
            vehicle = "Gent_Soldier";
            rank = "PRIVATE";
            position[] = {2,-6,0};
          };
          class Unit9 {
            side = 2;
            vehicle = "Gent_Soldier";
            rank = "PRIVATE";
            position[] = {-2,-6,0};
          };
          class Unit10 {
            side = 2;
            vehicle = "Gent_Soldier";
            rank = "PRIVATE";
            position[] = {2,-8,0};
          };
          class Unit11 {
            side = 2;
            vehicle = "Gent_Soldier";
            rank = "PRIVATE";
            position[] = {-2,-8,0};
          };
        };
      };
    };
  };
};
