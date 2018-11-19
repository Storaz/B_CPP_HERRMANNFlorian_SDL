#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include "CGame.h"
#include "CGameObject.h"

void Game::Play()
{
	SDL_Init(SDL_INIT_VIDEO);
	IMG_Init(IMG_INIT_PNG);
	SDL_Event Evenement;
	SDL_Window * Window = SDL_CreateWindow("SDL2 Vecteur",
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0);
	SDL_Renderer* Main_Renderer = SDL_CreateRenderer(Window, -1, 0);;
	SDL_Surface *Img = IMG_Load("Images/tilesets.png");
	SDL_Texture *Texture = SDL_CreateTextureFromSurface(Main_Renderer, Img);

	bool quit = false;
	while (!quit)
	{
		Object Sprite;
		Sprite.moveObject(SDL_Event Evenement, SDL_Window * Window, SDL_Renderer* Main_Renderer, SDL_Surface *Img, SDL_Texture *Texture);

		SDL_DestroyTexture(Texture);
		SDL_FreeSurface(Img);
		SDL_DestroyRenderer(Main_Renderer);
		SDL_DestroyWindow(Window);
		IMG_Quit();
		SDL_Quit();
	}
}
