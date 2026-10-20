#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "../fichier/creer_fichier.h"
#include "../fichier/modifier_fichier.h"
#include "../utils/clear_screen.h"
#include "../demande/demande_entier_borne.h"
#include "../utils/slow_printf.h"
#include "../utils/leave.h"
#include "../tutoriel/tutoriel.h"

/**
 * @brief Navigates the user to the main menu
 */
void navigation_accueil()
{
    int choix;

    clear_screen();

    slow_printf("Menu principal\n\n");

    slow_printf("1. Créer un fichier\n2. Modifier un fichier\n3. Supprimer un fichier\n4. Tutoriel\n5. Quitter");

    choix = demande_entier_borne("", 1, 5);

    switch (choix)
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
            tutoriel();
            break;
        default:
            leave();
            break;
    }
}