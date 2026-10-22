#include <stdio.h>
#include <stdlib.h>
#include "../utils/slow_printf.h"
#include "tutoriel_creation.h"
#include "../utils/clear_screen.h"
#include "../demande/demande_entier_borne.h"
#include "../navigation/navigation_accueil.h"
#include "tutoriel_modification.h"
#include "tutoriel_suppression.h"

/**
 * @brief Displays a tutorial for using the application
 */
void tutoriel()
{
    int choix;

    clear_screen();
    slow_printf("Tutoriel\n\n");

    slow_printf("1. Création de fichier\n2. Modification de fichier\n3. Suppression de fichier\n4. Quitter\n\n");
    slow_printf("Sur quoi avez-vous besoin d'aide ?\n");
    choix = demande_entier_borne("", 1, 4);

    switch (choix)
    {
        case 1:
            tutoriel_creation();
            break;
        case 2:
            tutoriel_modification();
            break;
        case 3:
            tutoriel_suppression();
            break;
        default:
            navigation_accueil();
            break;
    }
}