#include "World.h"

void HAPI_Main() {

	WORLD->Init();
	WORLD->Loop();

}

/*


colliding with door and pressing e for interact changes level
------add in check for nullptr (lambda check null might have to be reused)
adding animation --- there is slides for this
shooting ---- if input == left click shoort based on direction (check moveleft and right)
-----------update entities will cause bullet to move
enemy
collision with bullets 
---------if bullet collide stop moving play animation? set active to false when last anim frame is hit
---------------------------rotate inactive keep ptr of first inactive

*/