#include <stdio.h>
#include <stdlib.h>
//<stdarg.h> --> pour creer methodes avec arguments variables/optionnels

//les pointeurs sur fonctions

//prototype
    void affiche(int n_val);
    int somme2int(int ent1, int ent2);

    void (*pAffiche)(int);  //<type_methode> (*<nom_pointeur>)(<type_argument_de_la_methode>)
//void (*pAffiche2)(double);
    void (*pAffiche2)(void*);   //pointeur generique --> peut appeler n'importe quel type de donnee

//pointeur generique --> permet de pointer vers l'emplacement memoire d'une donnee quelconque
    void raz(void *adr, int n_size);
             //adresse    //taille en o de l'element a manipuler
    //raz:"remise a zero" --> remise a zero de chaque o manipule, pour reels ou tablx d'entiers
    //pas manipulation de valeur, mais de reference

int (*pSomme2int)(int,int);

int fctEntier(int (*pnf)(int), int n_val);

int fctE(int n_a);

int main()
{
    //affiche(12);
    pAffiche=&affiche;  //assignation de la référence
    //pAffiche2=&affiche2;

    int n_val=0;
    int p_int=&n_val;

    pAffiche(12);

    pSomme2int=&somme2int;
    pSomme2int(4,2);

    printf("\nSomme : %d", pSomme2int(4,2));

    int res=fctEntier(&fctE,2);

    return 0;
}

void raz(void *adr, int n_size){

    int n_i;
    char *ad=adr;   // reference stockee dans char
    for(n_i=0;n_i<n_size;n_i++){

        *(ad+n_i)=0;    // ou ad[i]=0
    }
}

void affiche(int n_val){

    printf("%d", n_val);
}

int somme2int(int ent1, int ent2){

    return (ent1 + ent2);
}

int fctEntier(int (*pnf)(int), int n_val){

    return (*pnf)(n_val);
}

int fctE(int n_a){

    return n_a;
}
