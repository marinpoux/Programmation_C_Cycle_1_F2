#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//exemple: un pt dans un plan
//types
typedef struct tPoint{  // tPoint = nom du TYPE/structure

    int x;
    int y;
    char str_coul[10];

}tPoint;

//enumerations
typedef enum couleur{rouge=1,noir,vert}couleur;    //les elements de ce type ne pourront prendre que ces valeurs
                                    //alias --> plus besoin de preciser enum a déclaration

typedef enum booleen{faux, vrai}booleen;    //ATTENTION: pas utiliser true et false !!

//prototype
void setPoint(tPoint *pPoint, int n_x, int n_y, char str_coul[10]);

int main()
{
    tPoint monPoint={0,0, "rouge"};
    //tPoint monPoint;
    //struct tPoint monPoint;

    tPoint *pMonPoint=NULL;

    tPoint tab_points[100];

    pMonPoint=&monPoint;

    monPoint.x=10;
    monPoint.y=5;

    //pointeur
    pMonPoint->x=12;
    pMonPoint->y=20;

    //formalisme pointeur
    (*pMonPoint).x=20;
    (*pMonPoint).y=12;

    /*int i=0;

    for(i=0;i<100;i++){

        tab_points[i].x=0;
        tab_points[i].y=0;
    }*/

    monPoint.x=10;
    monPoint.y=5;
    strcpy(monPoint.str_coul, "noir");

    setPoint(&monPoint,8,8, "vert");

    //enum
    enum couleur cl1;

    //cl1=rouge;
    cl1=1;          //idem

    booleen bln_val=faux;

    return 0;
}


void setPoint(tPoint *pPoint, int n_x, int n_y, char str_coul[10]){

    pPoint->x=n_x;
    pPoint->y=n_y;
    strcpy(pPoint->str_coul, str_coul);
}
