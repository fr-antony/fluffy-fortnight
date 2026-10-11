#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "../creation/creation.h"

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
            printf("Lancement du programme de creation\n\n");
            creation();
            break;
        case 2:
            printf("Lancement du programme d'edition\n\n");
            break;
        case 3:
            printf("Lancement du programme de sauvegarde\n\n");
            break;
        case 4:
            printf("Lancement du programme de chargement\n\n");
            break;
        case 5:
            printf("Lancement du programme de visualisation\n\n");
            break;
        default:
            printf("Arrêt de Fluffy-fortnight\n");
            break;
    };
}