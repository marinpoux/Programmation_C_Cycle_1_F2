#include <stdio.h>
#include <stdlib.h>

//prototypes
void int_somme(int n_nb1, int n_nb2, int *n_res);
void init_tabEntier(int n_tabEntier[], int n_taille);
char *get_tabChar(char c_tabChar[], int taille);


int main()
{
    //pointeur --> pointe sur la r�f�rence d'une variable en m�moire
    //      --> ne possede PAS de valeur (= PAS de taille), mais uniquement REFERENCE
    //      --> manipulation de l'�l�ment POINTE a traver le POINTEUR

    int n_entier=0;
    //poiteur sur @ de n_entier : *
    int *pn_entier=&n_entier;   //& : r�f�rence vers l'adresse (@) de n_entier

    *pn_entier=10;  //POINTE sur la VALEUR

    int n_entier2=5;

    pn_entier= &n_entier2;  //prend la valeur de la REFERENCE

    *pn_entier=8;

    // --> manipulation de la variable point�e
    // --> pointeur doit contenir r�f�rence en m�moire
    // --> r�f�rence : &
    // --> *pointeur prend une valeur
    // --> pointeur prend en valeur une &r�f�rence


    //passage par adresse
    int n_nb1=10;
    int n_nb2=5;
    int n_res=0;

    int_somme(n_nb1, n_nb2, &n_res);


    //tableaux
    char c_tab[10];

    //tableau = pointeur

    char *pc_char=c_tab;
    // pas besoin d'assigner de &r�f�rence, car tableau pointe d�j� sur une r�f�rence

    int n_i;

    for (n_i=0; n_i<10; n_i++){

        pc_char[n_i]='a';

    }

    pc_char++;      //incr�mentation de l'ESPACE D'ADRESSAGE du pointeur
    *(pc_char)++;   //idem

    (*pc_char)++;   //incr�mentation de la VALEUR de la variable POINTEE
    *pc_char++;     //idem

    for (n_i=0; n_i<10; n_i++){

        c_tab[n_i]=8;   //formalisme tableau
    }

    for (n_i=0; n_i<10; n_i++){

        *(c_tab+n_i)=9; //formalisme pointeur
    }

    int n_tab2D[10][10];
    int n_j;

    for (n_i=0; n_i<10; n_i++){
        for (n_j=0; n_j<10; n_j++){

        *(*(n_tab2D+n_i)+n_j)=0;    //formalisme pointeur matrice
        }
    }


    //ATTENTION !!
        /*
    int *pn_entier3;    //non initialis�

    *pn_entier3=6;      //ne fonctionne pas!!
    // --> ne possede pas de r�f�rence!!
    //besoin de l'assignation d'une r�f�rence, � laquelle donner la valeur du pointeur !
        */

    int *pn_entier3=NULL;   //initialis� � 0x0
    pn_entier3=&n_entier;


    //init_tabEntier(c_tab, 10);

    int n_tabentier[100];
    init_tabEntier(n_tabentier, 100);


    char *p_char = get_tabChar(c_tab, 10);
    // fonction retourne un tableau de char, stockage dans pointeur
    //pointeur prend valeur de la r�f�rence (premier cellule) du tableau

    return 0;
}


void int_somme(int n_nb1, int n_nb2, int *n_res){

    *n_res= n_nb1+n_nb2;

}


void init_tabEntier(int n_tabEntier[], int n_taille){
    //ATTENTION : si matrice, obligation de mettre la deuxieme taille en paramettre !!
    // --> void init_tabEntier(int n_tabEntier[][100], int n_taille){
    int n_i;

    for (n_i=0; n_i<n_taille;n_i++){

        n_tabEntier[n_i]=0;
    }
}


// pour retourner un tableau --> utilisation pointeur
char *get_tabChar(char c_tabChar[], int taille){
    int n_i;

    for (n_i=0; n_i<taille; n_i++){

        c_tabChar[n_i]='z';
    }

    return c_tabChar;
}
