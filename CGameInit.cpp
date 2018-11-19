#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include "CGameInit.h"

int InitSDL() {

	if (NULL != SDL_Init(SDL_INIT_VIDEO))
	{
		fprintf(stderr, "Erreur à L'initialisatin de la SDL : %s", SDL_GetError());
		return -1;
	}
}