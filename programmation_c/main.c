#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

//prototype
void fichierDecimal();
void fichierDecimal();

int main()
{
    //fichierDecimal();
    fichierBinair();

    return 0;
}

void fichierDecimal(){

    FILE *fSortie=NULL;
    FILE *fEntree=NULL;

    int n_val=0;
    int n_occurence=0;
    int n_NombreVal=0;
    char str_nomFichier[21];

    printf("Doner le nom du fichier a creer :\n");
    scanf("%20s", str_nomFichier);
    fflush(stdin);

    if((fSortie=fopen(str_nomFichier,"w"))==NULL){

        fprintf(stderr,"Erreur ouverture et creation du fichier : %s\n", strerror(errno));
    }else{

        do{

            printf("Donner un entier different de 0 :\n");
            scanf("%d", &n_val);

            if(n_val!=0){

                fprintf(fSortie,"%d\n", n_val);
                n_occurence++;
            }
        }while(n_val!=0);
    }

    fclose(fSortie);

    printf("Donnez le nom du fichier a lire :\n");
    scanf("%20s", str_nomFichier);
    fflush(stdin);

    if((fEntree=fopen(str_nomFichier,"r"))==NULL){

        fprintf(stderr,"Erreur ouverture du fichier :%s\n", strerror(errno));
    }else{

        while(n_NombreVal<n_occurence){

            fscanf(fEntree,"%d", &n_val);
            printf("%d\n", n_val);
            n_NombreVal++;
        }
    }

    fclose(fEntree);    //fermeture du descripteur de fichier
}

void fichierBinair(){

    FILE *fSortie=NULL;
    FILE *fEntree=NULL;

    int n_val=0;
    int n_occurence=0;
    int n_NombreVal=0;
    char str_nomFichier[21];

    printf("Doner le nom du fichier a creer :\n");
    scanf("%20s", str_nomFichier);
    fflush(stdin);

    if((fSortie=fopen(str_nomFichier,"wb"))==NULL){

        fprintf(stderr,"Erreur ouverture et creation du fichier : %s\n", strerror(errno));
    }else{

        do{

            printf("Donner un entier different de 0 :\n");
            scanf("%d", &n_val);

            if(n_val!=0){

                fwrite(&n_val, sizeof(int),1,fSortie);
                n_occurence++;
            }
        }while(n_val!=0);
    }

    fclose(fSortie);

    printf("Donnez le nom du fichier a lire :\n");
    scanf("%20s", str_nomFichier);
    fflush(stdin);

    if((fEntree=fopen(str_nomFichier,"rb"))==NULL){

        fprintf(stderr,"Erreur ouverture du fichier :%s\n", strerror(errno));
    }else{

        while(n_NombreVal<n_occurence){

            fread(&n_val, sizeof(int),1,fEntree);
            printf("%d\n", n_val);
            n_NombreVal++;
        }
    }

    fclose(fEntree);    //fermeture du descripteur de fichier
}
