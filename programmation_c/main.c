#include <stdio.h>
#include <stdlib.h>
#define TAILLE 100
    // remplace tous les TAILLE du programme par cette valeur

//const int TAILLE = 100;

int main()
{
    //exemple

    int n_a = 0, n_b = 0;
    char c_car ='a';
    float flt_f = 0.0;
    int n_test;

    printf("Bonjour\n");
    printf("Programme exemple\n");

    printf("n_a : %d\n", n_a);
    printf("n_b : %d\n", n_b);
    printf("c_acr : %c\n", c_car);
    printf("flt_f : %f\n", flt_f);
    printf("n_test : %d\n", n_test);

    putchar(c_car);
        //renvoie car dans flux de sortie
        //macro qui prend en argument élément de type char OU int !! (convertion ASCII)
        //affichage non formaté

    printf("Saisir un entier : \n");
    scanf("%d", &n_a);
    printf("Saisir un entier : \n");
    scanf("%d", &n_b);

    printf("n_a : %d\n", n_a);
    printf("n_b : %d\n", n_b);

    fflush(stdin);    // vide la mémoire (tampon) de saisie -> vide flux d'entree
        //stdout pour vider flux de sortie
    printf("Saisir un caractere : \n");
    scanf("%c", &c_car);

    printf("c_car : %c\n", c_car);

    fflush(stdin);
    printf("Saisir un caractere : \n");
    c_car = getchar();
        // saisie d'un car sans passer par saisie formatée
        // !! il s'agit d'une macro, et pas d'une fonction

    printf("c_car : %c\n", c_car);




    return 0;
}
