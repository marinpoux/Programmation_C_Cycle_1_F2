#include <stdio.h>
#include <stdlib.h>
#define TAILLE 10

int main()
{

//Tableaux à une dimension
    int n_i;
    /*
    int n_tabEntiers[TAILLE]; // type_contenu nomTableau[taille]

    //initialisation du contenu du tableau à 0
    for (n_i=0; n_i<TAILLE; n_i++) {
        n_tabEntiers[n_i]=0;
    }
    //affichage du tableau
    for (n_i=0; n_i<TAILLE; n_i++) {
        printf("%d\n", n_tabEntiers[n_i]);
    }

    int n_tabEntiers2[TAILLE]={0,1,2,3,4,5,6,7,8,9};
    for (n_i=0; n_i<TAILLE; n_i++) {
        printf("%d\n", n_tabEntiers2[n_i]);
    }

    int n_tabEntiers3[TAILLE]={0, 10, 5};
    for (n_i=0; n_i<TAILLE; n_i++) {
        printf("%d\n", n_tabEntiers3[n_i]);
    }

    int n_tabEntiers4[TAILLE]={0};
    for (n_i=0; n_i<TAILLE; n_i++) {
        printf("%d\n", n_tabEntiers4[n_i]);
    }

    int n_tabEntiers5[TAILLE]={1,2,3,4,5,6,7,8,9};
    for (n_i=0; n_i<TAILLE; n_i++) {
        printf("%d\n", n_tabEntiers5[n_i]);
    }
    */

//tableaux à 2D -> MATRICES

    int n_j;
    int n_MatriceEntiers[TAILLE][TAILLE]; //[lignes][colonnes]
    //initialisation de la matrice
    for (n_i=0; n_i<TAILLE; n_i++) {        //lignes
        for (n_j=0; n_j<TAILLE; n_j++) {    //colonnes
            n_MatriceEntiers[n_i][n_j]=0;
        }
    }

    int n_MatriceEntiers2[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for (n_i=0; n_i<3; n_i++) {
        for (n_j=0; n_j<4; n_j++) {
            printf("%d\n",n_MatriceEntiers2[n_i][n_j]);
        }
    }

    return 0;
}
