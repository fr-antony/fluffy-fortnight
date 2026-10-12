#include <stdio.h>
#include <stdlib.h>
#include "creation.h"

void creation()
{
    int choix;

    printf("Création de votre fichier SVG\n");
    printf("Que souhaitez-vous faire ?\n\n");
    printf("1. Carré\n2. Cercle\n3. Chemin\n4. Ellipse\n5. Groupe\n6. Ligne\n7. Polygones\n8. Polylignes\n9. Rectangle\n\n");
    printf("Choisissez une option (1-9): ");
    scanf("%d", &choix);

    switch (choix)
    {
        case 1:
            printf("Choix 1\n");
            break;
        case 2:
            printf("Choix 2\n");
            break;
        case 3:
            printf("Choix 3\n");
            break;
        case 4:
            printf("Choix 4\n");
            break;
        case 5:
            printf("Choix 5\n");
            break;
        case 6:
            printf("Choix 6\n");
            break;
        case 7:
            printf("Choix 7\n");
            break;
        case 8:
            printf("Choix 8\n");
            break;
        case 9:
            printf("Choix 9\n");
            break;
        default:
            printf("Choix défault\n");
            break;
    }
}