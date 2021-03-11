#include "CPoint.h"
#include <stdio.h>


void CPoint::afficheLog() const
{
	printf("Point en x : %d", n_x);
	printf("Point en y : %d", n_y);
}

int CPoint::getX() const
{
	return n_x;
}

int CPoint::getY() const
{
	return n_y;
}

void CPoint::setX(int n_x)
{
	//n_x = n_x;	--> ne fonctionne pas : utilise l'argument deux fois!!

	this->n_x = n_x;
}

void CPoint::setY(int n_y)
{
	this->n_y = n_y;
}
