#include <stdio.h>
#include <stdlib.h>
#define NBI 10

int main()
{
    int n_a=0, n_b=0;

    //Condition -> SI + expression booleenne
    if(n_a==n_b) {
        printf("n_a et n_b identiques \n");
    }
    else if (n_a > n_b) {
        printf("n_a sup�rieur a n_b \n");
    }
    else {
        printf("n_a inf�rieur a n_b \n");
    } // a utiliser si on compare donn�es de m�me type

    if(n_a==n_b) {
        printf("n_a et n_b identiques \n");
    }
    if (n_a != n_b) {
        printf("n_a et n_b diff�rents \n");
    } // a utiliser si on compare donn�es de types diff�rents


    int n_val = 12;

    if(n_val>=10 && n_val<=20) {
        printf("%d", n_val);
    }

    //conditions SWITCH
    int n_choix = 0;

    printf("Menu\n");
    printf("1: Menu 1\n");
    printf("1: Menu 2\n");
    printf("Choix ?\n");

    scanf("%d", &n_choix);

    switch (n_choix) {
        case 1: printf("Menu 1\n"); break;
        case 2: printf("Menu 2\n"); break;

        default : printf("default\n");
    }

    //Boucle POUR -> nombre d'it�rations connu
    int n_i=0;

    for(n_i=0;n_i<NBI; n_i++) {
        printf("%d", n_i);
    }

    /*for(;n_i<NBI; n_i++) {
        printf("%d", n_i);
    }*/ // -> �a donne la meme chose

    printf("\n");

    //Boucle FAIRE...TANTQUE -> nombre d'it�rations inconnu, entr�e obligatoire
    n_i=0;

    do {
        printf("%d", n_i);

        n_i++;
    } while (n_i < NBI);

    printf("\n");

    //Boucle TANTQUE -> boucle � entr�e conditionn�e
    n_i=0;

     while (n_i < NBI) {
        printf("%d", n_i);

        n_i++;
    }


    return 0;
}
