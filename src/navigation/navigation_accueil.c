#include <stdio.h>
#include <stdlib.h>

#include "../demande/demande_entier_borne.h"
#include "../fichier/modifier_fichier.h"
#include "../fichier/creer_fichier.h"
#include "../utils/clearscreen.h"
#include "../utils/ascii_art.h"

void navigation_accueil()
{
    int choix;

    printf("1. Créer un fichier\n2. Modifier un fichier\n3. Supprimer un fichier\n4. Quitter\n");
    
    choix = demande_entier_borne(1, 4);

    switch (choix)
    {
        case 1:
            creer_fichier();
            clearScreen();
            break;
        case 2:
            // Fonction modifier fichier
            clearScreen();
            break;
        case 3:
            // Fonction supprimer fichier
            clearScreen();
            break;
        default:
            clearScreen();
            ascii_art(1);
            break;
    }
}