#include <stdio.h>
#include <stdlib.h>
#include "define.h"


//prototypes
//  -> déclaration des méthodes et fonctions
    int somme(int n_a, int n_b);
    void somme_procedure(int n_a, int n_b);
    void init_tabEntiers(int n_tabEntiers[TAILLE]);
    int cpt();


//allocation de variables
//extern - automatique - static - (register) - volatile
//extern : prototypes de fonctions
//statique : conservation état d'une variable dans une méthode à chaque appel

extern int ext=0;   //accessible dans autre code source du meme projet

//static : variable persistante = toujours allouée au même espace mémoire
// --> DONC conservation des valeurs assignées : pas de réinitialisation automatique
// --> voir int cpt()

//FONCTION static --> utilisable uniquement dans main (?)
//FONCTION externe


int main()
{
    auto int n_a=0, n_b=0;  //allocation dynamique --> redéfinition automatique à chaque appel
    volatile int n_res=0;   // volatile <> CONST

    n_res=somme(n_a,n_b);

    printf("%d\n", n_res);

    somme_procedure(n_a,n_b);

    int c=cpt();
    int cc=cpt();

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

static int cpt(){

    static int n_c=0;
    n_c++;
    return n_c;
}

