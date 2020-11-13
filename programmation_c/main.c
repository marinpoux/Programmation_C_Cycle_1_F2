#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// string n'existe pas en C et doit être amené dans une bibliothèque
// string étant de base, un tableau de caractères
#define TAILLE 10

int main()
{
    //char c_Chaine[TAILLE]="Hello";

    //c_Chaine="Hello w";
    // interdiction d'utiliser '=' pour une réassignation de la séquence complète du tableau
    //  -> besoin de passer par une boucle pour réassigner

    char c_Chaine[TAILLE]={'H','e','l','l','o',' ','w','o','o'};

    printf("Saisir chaine : \n");
    scanf("%s", c_Chaine);
        // !! PAS de & pour les tableaux de caractères
        // CAR tableau = pointeur !
    printf("Votre chaine : %s \n", c_Chaine);

    strcpy(c_Chaine,"mamapoux");
    //réaffectation de chaine de caractères (sans passer par un tableau)
    // !! nécessite la bibliothèque string.h !!

    int n_lngChaine=strlen(c_Chaine);

    printf("Longueur de la chaine : %d\n", n_lngChaine);

    int n_i=0;
    while(c_Chaine[n_i] != '\0') {
        n_i++;
    }
    printf("%d\n", n_i);

    //int tab[100000000000000000000000000000000000];
    // ce tableau est trop grand -> x4 = taille en octets
    // OR la taille max d'une pile est 2Mo -> c'est largement dépassé

    return 0;
}
