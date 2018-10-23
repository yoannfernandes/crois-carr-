#include <stdio.h>
#include <stdlib.h>

int main()
{

//------------------ déclaration des variables --------------------------------------------
    int x;
    int y;
    int taille;
    char solo;

//------------------Début du corps---------------------------------------------------------

    printf("Votre caractere ?\n");    //demande de saisie d'un caractère
    scanf("%c", &solo);               //lecture du caratère saisie
    printf("Votre taille ?\n");       //demande de la taille de la croix
    scanf("%d", &taille);             //lecture de la taille

    for(x=1; x <= taille; x++){                  //conditionnel SI pour gerer les lignes
        for(y=1; y <= taille; y++){              //conditionnel SI pour gerer les colonnes
                if ((x==y) || ((x+y)-1)==taille)
                    printf("%c", solo);          //ecriture du caractère de l'utilisateur
                else
                    printf(" ");                 //ecriture de "vide" pour la construction de la croix
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}
