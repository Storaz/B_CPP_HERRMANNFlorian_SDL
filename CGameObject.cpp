#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include "CGameObject.h"
#include "CVect2D.h"

void Object::setObjectPositionX(float Vecteur_fltX)
{
	this->Object_Position.setVectX(Vecteur_fltX);
}

void Object::setObjectPositionY(float Vecteur_fltY)
{
	this->Object_Position.setVectY(Vecteur_fltY);
}

void Object::getObjectPositionX()
{
	return this->Object_Position.getVectX;
}

void Object::getObjectPositionY()
{
	return this->Object_Position.getVectY;
}

void Object::moveObject(SDL_Event Evenement, SDL_Window * Window, SDL_Renderer * Main_Renderer, SDL_Surface * Img, SDL_Texture * Texture)
{
	Uint32 ticks = SDL_GetTicks();
	Uint32 sprite = (ticks / 100) % 4;
	SDL_Rect ImageRect = { sprite * 64, 0, 64, 67 };
	SDL_Rect AfficheRect = { 10, 10, 64, 67 };

	while (SDL_PollEvent(&Evenement) != NULL)
	{
		switch (Evenement.type)
		{
		case SDL_KEYDOWN:
				if (Evenement.key.keysym.sym == SDLK_UP){
		
				}

				if (Evenement.key.keysym.sym == SDLK_DOWN) {

				}

				if (Evenement.key.keysym.sym == SDLK_LEFT) {

				}

				if (Evenement.key.keysym.sym == SDLK_RIGHT) {

				}

		}
	}
		SDL_RenderClear(Main_Renderer);
		SDL_RenderCopy(Main_Renderer, Texture, &ImageRect, &AfficheRect);
		SDL_RenderPresent(Main_Renderer);
}
