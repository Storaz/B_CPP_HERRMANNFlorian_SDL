#pragma once

class CVect2D {

	//donn�e membre
	private:
		float Vecteur_fltX;
		float Vecteur_fltY;

	//fonction membre
	public:

		//On r�cup�re X
		float getVectX()const;
		//On r�cup�re Y
		float getVectY()const;
		//On set X
		void setVectX(float fltX);
		//On set Y
		void setVectY(float fltY);
		//Addition de vecteurs
		void additionVecteurs(CVect2D Vect1, CVect2D Vect2, CVect2D &Vect3);
		//Soustraction de vecteurs
		void soustractionVecteurs(CVect2D Vect1, CVect2D Vect2, CVect2D &Vect3);
		//Multiplication de vecteurs
		float multiplicationVecteurs(CVect2D Vect1, CVect2D Vect2, CVect2D &Vect3);
		//Produit scalaire
		void produitScalaire(CVect2D &Scalaire, float produit);
		//Norme
		float normeVecteur(CVect2D Vect1, CVect2D Vect2, CVect2D &Vect3);



		//Contructeur sans param�tres
		CVect2D();
		//Constructeur avec param�tres
		CVect2D(float fltX, float fltY =0.0);
		//Constructeur avec param�tres par d�faut
		//CVect2D(float fltX = 0.0, float fltY = 0.0);

		//Destructeur
		~CVect2D();
};