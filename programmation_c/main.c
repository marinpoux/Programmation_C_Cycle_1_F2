<<<<<<< HEAD
//macro analys�es par requ�te au pr�-processeur (avant de build)
#include <stdio.h>
#include <stdlib.h>
    //biblioth�ques
    //.h -> fichiers de d�clarations (header) de primitives utilis�es dans le programme

//extension .c -> fichiers sources pour programmes en langage C
// d'o� main.c

int main()
//int() -> fonction qui retourne un int
//main n'a pas besoin d'�tre une fonction int() : void main() -> proc�dure
=======
//macro analysées par requête au pré-processeur (avant de build)
#include <stdio.h>
#include <stdlib.h>
    //bibliothèques
    //.h -> fichiers de déclarations (header) de primitives utilisées dans le programme

//extension .c -> fichiers sources pour programmes en langage C
// d'où main.c

int main()
//int() -> fonction qui retourne un int
//main n'a pas besoin d'être une fonction int() : void main() -> procédure
>>>>>>> b78306ed4b06b26b45a68ae369be4354c5d3df70
{
    /* comm para */
    //com ligne

<<<<<<< HEAD
    //unsigned: non sign� -> xple unsigned short
=======
    //unsigned: non signé -> xple unsigned short
>>>>>>> b78306ed4b06b26b45a68ae369be4354c5d3df70

    //types d'entiers
        short sn_entier; //entier court
        int n_entier;
        long l_entier; //entier long

        printf("Taille octets de short : %d\n", sizeof(sn_entier));
        printf("Taille octets de int : %d\n", sizeof(n_entier));
        printf("Taille octets de long : %d\n", sizeof(l_entier));
            //sizeof permet d'obtenir la taille en octets
<<<<<<< HEAD
            //�l�ments cod�s sur 16(2*8bits) ou 32(4*8bits) bits

    //r�el
=======
            //éléments codés sur 16(2*8bits) ou 32(4*8bits) bits

    //réel
>>>>>>> b78306ed4b06b26b45a68ae369be4354c5d3df70
        float flt_reel;
        double dbl_reel;
        long double ldbl_reel;

        printf("Taille octets de float : %d\n", sizeof(flt_reel));
        printf("Taille octets de double : %d\n", sizeof(dbl_reel));
        printf("Taille octets de long double : %d\n", sizeof(ldbl_reel));

<<<<<<< HEAD
    //caract�re
=======
    //caractère
>>>>>>> b78306ed4b06b26b45a68ae369be4354c5d3df70
        char c_car;
        printf("Taille octets de char : %d\n", sizeof(c_car));

    //booleen
        //de base, le type booleen/la fonction booleenne n'existe pas en C!!
        //mais utilisation d'expression booleenne !!
        // -> renvoie 0 ou 1

    // http://cplusplus.com/reference/cstdio/

<<<<<<< HEAD
    //op�rateurs
=======
    //opérateurs
>>>>>>> b78306ed4b06b26b45a68ae369be4354c5d3df70
        int n_a = 255;
        int n_b = 0;

        printf("%d\n",(n_a>n_b));
            // -> expression booleenne

        // ==
        // <=
        // >=
        // !=

        // +
        // -
        // *
        // /
<<<<<<< HEAD
            // ATTENTION : si division sur entiers : division enti�re !!
=======
            // ATTENTION : si division sur entiers : division entière !!
>>>>>>> b78306ed4b06b26b45a68ae369be4354c5d3df70
            // pour division standart, nb flottants !!
        // %

        // =
<<<<<<< HEAD
        // ,  -> s�parateur de s�quences
=======
        // ,  -> séparateur de séquences
>>>>>>> b78306ed4b06b26b45a68ae369be4354c5d3df70

        // & (&&)   -> ET
        // | (||)   -> OU
        // !        -> NON

        // ++
        // --
        // +=
        // -=
        // '/='
        // *=

    /* ------------------------------------------------------------------------------- */

<<<<<<< HEAD
    //ECRIRE -> saisie format�e
        printf("val de n_a : %d et n_b : %d\n", n_a, n_b);
            // les �l�ments sont affich�s dans l'ordre
=======
    //ECRIRE -> saisie formatée
        printf("val de n_a : %d et n_b : %d\n", n_a, n_b);
            // les éléments sont affichés dans l'ordre
>>>>>>> b78306ed4b06b26b45a68ae369be4354c5d3df70
        printf("val de n_a : %x et n_b : %x\n", n_a, n_b);
            // d% affiche des entiers, // convertit en hexadecimale

    //LIRE
        printf("Saisir un entier dans n_a, puis n_b : \n");

        scanf("%d", &n_a);
        scanf("%d", &n_b);
        // ATTENTION : penser au & !!

        printf("val de n_a : %d et n_b : %d\n", n_a, n_b);


    return 0;
<<<<<<< HEAD
    //point de sortie 0 permet au programme de savoir que toutes les routines se sont ex�cut�es au point de sortie
=======
    //point de sortie 0 permet au programme de savoir que toutes les routines se sont exécutées au point de sortie
>>>>>>> b78306ed4b06b26b45a68ae369be4354c5d3df70

    //retours sur l'environnement :
        //except
        return -1;
}
