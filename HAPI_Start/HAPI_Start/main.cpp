#include "World.h"

void HAPI_Main() {

	WORLD->Init();
	WORLD->Loop();

}

/*

enemy

win lose conditions ---- kill boss or die
implement more error handling
----try catch blocks, file and texture loading
check const correctness
sound
-----sound class, vector of sounds, enum for iteration i.e. bullet collision, playercollision
health bar
----- change health bar width based on hp


ADDITIONS

falling background
adding boss enemy 
pickups

fix Lerp 
main menu for difficulty


*/