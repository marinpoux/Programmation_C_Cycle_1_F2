#pragma once

class CPoint {

private :
	//donnees membres = attributs = pptes
	int n_x;
	int n_y;

public :
	//fonctions membres

	//accesseurs
	int getX()const;
	int getY()const;

	//mutateurs
	void setX(int n_x);
	void setY(int n_y);
};
