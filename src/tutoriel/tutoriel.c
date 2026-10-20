#include <stdio.h>
#include <stdlib.h>
#include "../utils/leave.h"
#include "../utils/slow_printf.h"
#include "tutoriel_creation.h"
#include "../utils/clear_screen.h"
#include "../demande/demande_entier_borne.h"

void tutoriel()
{
    int choix;

    clear_screen();
    slow_printf("Tutoriel\n\n");

    slow_printf("1. Création de fichier\n2. Modification de fichier\n3. Suppression de fichier\n\n");
    slow_printf("Sur quoi avez-vous besoin d'aide ?\n");
    choix = demande_entier_borne("", 1, 3);

    switch (choix)
    {
        case 1:
            tutoriel_creation();
            break;
        case 2:
            // C
            break;
        case 3:
            // C
            break;
        default:
            leave();
            break;
    }
}