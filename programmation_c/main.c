#include <stdio.h>
#include <stdlib.h>

//exemple: un pt dans un plan
typedef struct tPoint{  // tPoint = nom du TYPE/structure

    int x;
    int y;

}tPoint;

int main()
{

    tPoint monPoint;
    //tPoint monPoint={0,0};
    //struct tPoint monPoint;

    tPoint *pMonPoint=NULL;

    pMonPoint=&monPoint;

    monPoint.x=10;
    monPoint.y=5;

    //pointeur
    pMonPoint->x=12;
    pMonPoint->y=20;

    //formalisme pointeur
    (*pMonPoint).x=20;
    (*pMonPoint).y=12;

    return 0;
}
