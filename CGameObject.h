#pragma once
#include "CVect2D.h"

class Object {

	//Déclaration d'un type objet
	private:
		int Object_Height;
		int Object_Width;
		CVect2D Object_Position;
		SDL_Surface *Object_Sprite;

	public:
		void setObjectPositionX(float Vecteur_fltX);
		void setObjectPositionY(float Vecteur_fltY);
		void getObjectPositionX();
		void getObjectPositionY();
		void moveObject(SDL_Event Evenement,SDL_Window * Window,SDL_Renderer* Main_Renderer,SDL_Surface *Img,SDL_Texture *Texture);

};
