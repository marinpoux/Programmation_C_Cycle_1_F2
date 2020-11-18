#include <stdio.h>
#include <stdlib.h>
#include "define.h"


//prototypes
//  -> d�claration des m�thodes et fonctions
    int somme(int n_a, int n_b);
    void somme_procedure(int n_a, int n_b);
    void init_tabEntiers(int n_tabEntiers[TAILLE]);
    int cpt();


//allocation de variables
//extern - automatique - static - (register) - volatile
//extern : prototypes de fonctions
//statique : conservation �tat d'une variable dans une m�thode � chaque appel

extern int ext=0;   //accessible dans autre code source du meme projet

//static : variable persistante = toujours allou�e au m�me espace m�moire
// --> DONC conservation des valeurs assign�es : pas de r�initialisation automatique
// --> voir int cpt()

//FONCTION static --> utilisable uniquement dans main (?)
//FONCTION externe


int main()
{
    auto int n_a=0, n_b=0;  //allocation dynamique --> red�finition automatique � chaque appel
    volatile int n_res=0;   // volatile <> CONST

    n_res=somme(n_a,n_b);

    printf("%d\n", n_res);

    somme_procedure(n_a,n_b);

    int c=cpt();
    int cc=cpt();

    return 0;
}

//fonction somme enti�re
int somme(int n_a, int n_b) {
    //-> signature de la fonction : unique dans le programme !!
    //signature = structure d�clarative de la fonction
    //signature d�clar�e au-dessus du main(), dans 'prototypes'

    int som=0;

    som = n_a + n_b;

    return som;
}

//proc�dure
void somme_procedure(int n_a, int n_b) {

    int som=0;

    som = n_a + n_b;

    printf("resultat somme (procedure) : %d\n", som);
}

//proc�dures avec tableau
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

