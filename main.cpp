#include <iostream>
#include "CGameInit.h"
#include "CGameObject.h"
#include "CVect2D.h"
#include "CGame.h"

using namespace std;

int main(int argc, char * argv[])
{
	if(InitSDL()!=-1){

		Game Jeu;
		Jeu.Play();	
	}
	return 0;
}