/*
	Author: Rav-T

	Description:
	spawns a new execution unit to control and handle the following:
  the parameter object is "infested" with butterflies. If it stops, the butterflies
  appear. If the object moves 30 meters away the butterflies disapear.The thread
  follows this logic ever 2-4 seconds.
  If the object is not alive, the script will delete any active butterflies it
  has created, and then will terminate.

	Parameter(s):
  car - object - vehicle object to infest with butterflies

	Returns:
	spawned execution unit
*/
[_this select 0] spawn {
  _car = (_this select 0) select 0;
  _bugs = objNull;
  _running = true;
  while { _running } do {
    sleep ((random 3) + 1);
    if(!isNull _bugs) then {
      if(_bugs distance _car > 30) then {
        deleteVehicle _bugs;
      };
      if(!alive _car) then {
        deleteVehicle _bugs;
        _running = false;
      };
    };
    if (speed _car == 0 && isNull _bugs) then {
      _bugGroup = createGroup independent;
      _bugs = _bugGroup createUnit ['ModuleAnimals_F', getPosATL _car,[], 0, 'CARGO'];
      _bugs setVariable ['count', 15];
      _bugs setVariable ['type', 'ButterFly_random'];
      _bugs setPosASL position _car;
    ;}
  ;}
};
