#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// string n'existe pas en C et doit �tre amen� dans une biblioth�que
// string �tant de base, un tableau de caract�res
#define TAILLE 10

int main()
{
    //char c_Chaine[TAILLE]="Hello";

    //c_Chaine="Hello w";
    // interdiction d'utiliser '=' pour une r�assignation de la s�quence compl�te du tableau
    //  -> besoin de passer par une boucle pour r�assigner

    char c_Chaine[TAILLE]={'H','e','l','l','o',' ','w','o','o'};

    printf("Saisir chaine : \n");
    scanf("%s", c_Chaine);
        // !! PAS de & pour les tableaux de caract�res
        // CAR tableau = pointeur !
    printf("Votre chaine : %s \n", c_Chaine);


    strcpy(c_Chaine,"mamapoux");
    //r�affectation de chaine de caract�res (sans passer par un tableau)
    // !! n�cessite la biblioth�que string.h !!

    int n_lngChaine=strlen(c_Chaine);

    printf("Longueur de la chaine : %d\n", n_lngChaine);

    int n_i=0;
    while(c_Chaine[n_i] != '\0') {
        n_i++;
    }
    printf("%d\n", n_i);


    //int tab[100000000000000000000000000000000000];
    // ce tableau est trop grand -> x4 = taille en octets
    // OR la taille max d'une pile est 2Mo -> c'est largement d�pass�

    printf("Saisir chaine : \n");
    gets(c_Chaine);
        // au lieu de scanf()
    printf("Votre chaine : %s \n", c_Chaine);

    printf("Saisir chaine : \n");
    fgets(c_Chaine, TAILLE, stdin);
        // recup�re le flux d'entr�e
    //printf("Votre chaine : %s \n", c_Chaine);
    fputs(c_Chaine, stdout);


    fflush(stdin);

    for(n_i=0;n_i<TAILLE;n_i++) {
        printf("Car : \n");
        scanf("%c", &c_Chaine[n_i]);
        printf("%c\n", c_Chaine[n_i]);
    }





    return 0;
}
