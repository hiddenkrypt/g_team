/* #define will replace the following word with the text after it. The backslash
makes multiple lines a part of the same define block.
*/

/* All Gent units need these lines
  scope allows them to be used in editorCategory
  side marks them as INDEP / GREENFOR
  faction is defined in CfgFactionClasses.hpp
  editor category is defined in CfgCategories.hpp
*/
#define GENT_UNIT \
  scope = 2;\
  side = 2;\
  author = "Rav-T";\
  faction = "G_Team_Faction";\
  editorCategory = "G_Team";

/* Gent vehicles (literal car/tank/aircraft) default to no internal stored
items, have gent_soldier crews, and also get the Gent_Unit macro. editor
subcategory and vehicle class are the same thing, but one is in 3DEN and the
otheris in ZEUS, they reference classes in CfgCategories.hpp */
#define GENT_VEHICLE \
  GENT_UNIT\
  scopeCurator = 2;\
  class TransportMagazines {};\
  class TransportWeapons {};\
  class transportBackpacks {};\
  class TransportItems {};\
  crew = "Gent_Rifle_D_Rank";\
  crewCrashProtection = 0.01;\
  editorSubcategory = "GentVehicles";\
  vehicleClass = "GentVehicles"

/* These macros take arguments. a and b will be replaced with the values passed into the macro.
so if the parser sees mag_3(HandGrenade), it will transform that text to
HandGrenade, HandGrenade, HandGrenade*/
#define mag_1(a) a
#define mag_2(a) a, a
#define mag_3(a) a, a, a
#define mag_4(a) a, a, a, a
#define mag_5(a) a, a, a, a, a
#define mag_6(a) a, a, a, a, a, a
#define mag_7(a) a, a, a, a, a, a, a
#define mag_8(a) a, a, a, a, a, a, a, a
#define mag_9(a) a, a, a, a, a, a, a, a, a
#define mag_10(a) a, a, a, a, a, a, a, a, a, a
#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
#define mag_12(a) a, a, a, a, a, a, a, a, a, a, a, a
#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
