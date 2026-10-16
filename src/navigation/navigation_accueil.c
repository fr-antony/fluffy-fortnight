#include <stdio.h>
#include <stdlib.h>
#include "../fichier/creer_fichier.h"
#include "../fichier/modifier_fichier.h"

void navigation_accueil(int choix)
{
    printf("1. Créer un fichier\n2. Modifier un fichier\n3. Supprimer un fichier\n4. Visionner un fichier\n5. Quitter\n");
    scanf("%d", &choix);

    switch(choix)
    {
        case 1:
            creer_fichier();
            break;
        case 2:
            modifier_fichier();
            break;
        case 3:
            // Fonction supprimer fichier
            break;
        case 4:
            // Fonction visionner fichier
            break;
        default:
            break;
    }
}