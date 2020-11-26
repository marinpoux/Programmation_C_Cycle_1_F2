#include <stdio.h>
#include <stdlib.h>

int main()
{
    //calloc initialise le conteneur (comme tableau), a 0; malloc n'initialise pas !

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

    //pointeur de pointeurs = tableau de tableaux
    int **ppn_MatEntier=NULL;

    //allocation de l'espace memoire au premier pointeur
    ppn_MatEntier=(int**)malloc(10*sizeof(int));

    int i=0;
    for(i=0;i<10;i++){  //allocation avec une boucle --> liberation aussi necessite une boucle !!

        //allocation de l'espace memoire au second pointeur
        ppn_MatEntier[i]=(int*)calloc(10,sizeof(int));
    }

    for(i=0;i<10;i++){

        free(ppn_MatEntier[i]);
    }
    free(ppn_MatEntier);

    return 0;
}
