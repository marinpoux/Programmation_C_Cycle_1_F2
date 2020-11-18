#include <stdio.h>
#include <stdlib.h>

//prototypes
    void jet_de_des(int *place, int const jet1, int const jet2);

int main()
{
    //procedure
    int place=0;
    int jet1=10;
    int jet2=10;
    //appel et passage par adresse
    jet_de_des(&place,jet1,jet2);

    return 0;
}


//procedure et passage par adresse -->modification valeur en argument d'une procédure
//*pointeur
void jet_de_des(int *place, int const jet1, int const jet2){

    *place += jet1+jet2;
}
