#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pn_Entier = (int*)malloc(sizeof(int));  // <--> int pn_Entier
    //mémoire vive                              //mémoire du compilateur

    int *pn_tabEntier=(int*)malloc(10*sizeof(int));     //conteneur de 10 entiers

    int *pn_tabEntier2=(int*)calloc(10,sizeof(int));    //init valeur de la zone méméoire à 0

    int *pn_more_numbers=NULL;

    int n_i;

    for(n_i=0;n_i<10;n_i++){

        pn_tabEntier[n_i]=0;
    }

    for(n_i=0;n_i<10;n_i++){

        printf("%d",pn_tabEntier[n_i]);
    }

    pn_more_numbers = (int*) realloc (pn_tabEntier2, 100*sizeof(int));

    free(pn_tabEntier); //liberation du pointeur : IMPORTANT pour liberer la memoire !!
    free(pn_tabEntier2);
    free(pn_more_numbers);
    free(pn_Entier);



    return 0;
}
