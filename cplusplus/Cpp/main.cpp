#include "tPoint.h"
#include "CPoint.h"
#include <stdio.h>

void afficheLog(int n_value);
void afficheLog(float flt_value);

int main() {

	//instance de la classe CPoint
	CPoint p;

	p.setX(0);
	p.setY(0);

	printf("X: ");
	afficheLog(p.getX());

	printf("Y: ");
	afficheLog(p.getY());
	
	float flt_f = 12.8;
	afficheLog(flt_f);

	return 0;
}

void afficheLog(int n_value) {

	printf("%d\n", n_value);
}

void afficheLog(float flt_value) {

	printf("%f\n", flt_value);
}
