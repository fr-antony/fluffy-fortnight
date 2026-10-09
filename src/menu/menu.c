#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

void menu()
{
    int choix;

    printf("Fluffy-fortnight execution\n\n");
    printf("1. Créer\n2. Editer\n3. Sauver\n4. Charger\n5. Visualiser\n\n");
    printf("Choisissez une option (1-5): ");
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
        default:
            printf("Arrêt de Fluffy-fortnight\n");
            break;
    };
}