#include <stdlib.h>
#include <stdio.h>

#include "../fichier/creer_fichier.h"
#include "../fichier/modifier_fichier.h"
#include "../utils/clear_screen.h"
#include "../demande/demande_entier_borne.h"
#include "../utils/slow_printf.h"

/**
 * @brief Navigates the user to the main menu
 */
void navigation_accueil()
{
    int choix;

    slow_printf("Menu principal\n", 1);

    choix = demande_entier_borne("1. Créer un fichier\n2. Modifier un fichier\n3. Supprimer un fichier\n4. Quitter\n", 1, 4);

    switch (choix)
    {
        case 1:
            creer_fichier();
            break;
        case 2:
            // Fonction modifier fichier
            break;
        case 3:
            // Fonction supprimer fichier
            break;
        default:
            break;
    }
}