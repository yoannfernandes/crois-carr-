#include <stdio.h>
#include <stdlib.h>

int main()
{

//------------------------Declaration des variables----------------------------

    int x;
    int y;
    int taille;
    char car_1;
    char car_2;

//------------------------Debut du corps---------------------------------------

    printf("Choisssisez un premier caractere\n");       //demande d'un premier caractere
    scanf("%c", &car_1);                                //lecture du premier caractere
    fflush(stdin);
    printf("Choissisez un deuxieme caractere\n");       //demande d'un deuxieme caractere
    scanf("%c", &car_2);                                //lecture du deuxieme caractere
    printf("Choissisez la taille\n");                   //demande de la taille
    scanf("%d", &taille);                               //lecture de la taille

    for(x=1;x<=taille;x++){                             //boucle POUR sert a afficher la première ligne
        printf("%c ",car_1);                            //ecriture de la premiere ligne
    }
    printf("\n");
    for(x=1;x<=taille-2;x++){                           //boucle POUR sert a afficher les lignes intermediaires
        printf("%c ",car_1);                            //ecrit le premier caractere de la ligne
        for(y=1;y<=taille-2;y++){                       //boucle POUR sert a remplir la ligne du deuxieme caractere
            printf("%c ",car_2);
        }
        printf("%c ",car_1);                            //ecrit le dernier caractere de la ligne
        printf("\n");
    }
    for(x=1;x<=taille;x++){                             //boucle POUR sert a ecrire la derniere ligne
        printf("%c ",car_1);
    }
    printf("\n");
    return 0;
}
