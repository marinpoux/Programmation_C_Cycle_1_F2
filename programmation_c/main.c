#include <stdio.h>
#include <stdlib.h>
#define TAILLE 10

//prototypes
//  -> déclaration des méthodes et fonctions
    int somme(int n_a, int n_b);
    void somme_procedure(int n_a, int n_b);
    void init_tabEntiers(int n_tabEntiers[TAILLE]);


int main()
{
    int n_a=0, n_b=0;
    int n_res=0;

    n_res=somme(n_a,n_b);

    printf("%d\n", n_res);

    somme_procedure(n_a,n_b);

    return 0;
}

//fonction somme entière
int somme(int n_a, int n_b) {
    //-> signature de la fonction : unique dans le programme !!
    //signature = structure déclarative de la fonction
    //signature déclarée au-dessus du main(), dans 'prototypes'

    int som=0;

    som = n_a + n_b;

    return som;
}

//procédure
void somme_procedure(int n_a, int n_b) {

    int som=0;

    som = n_a + n_b;

    printf("resultat somme (procedure) : %d\n", som);
}

//procédures avec tableau
void init_tabEntiers(int n_tabEntiers[TAILLE]) {
    int n_i=0;

    for(n_i=0;n_i<TAILLE;n_i++) {
        n_tabEntiers[n_i]=0;
    }
}

