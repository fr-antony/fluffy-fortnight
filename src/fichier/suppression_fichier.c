#include <stdio.h>
#include <stdlib.h>
#include "../utils/clear_screen.h"
#include "../utils/slow_printf.h"
#include "../navigation/navigation_accueil.h"

/**
 * @brief Deletes a file from the system
 */
void suppression_fichier()
{
    char fichier[32];
    char approve;

    clear_screen();
    slow_printf("Menu de suppression\n\n");
    slow_printf("Entrer le nom du fichier (ex. dessin.svg) : ");
    scanf("%31s", fichier);

    clear_screen();

    printf("/!\\ ATTENTION\n");
    printf("/!\\ Le fichier %s sera supprimé de manière définitive\n", fichier);
    printf("/!\\ Souhaitez-vous vraiment le supprimer ? [y/N] : ");
    scanf(" %c", &approve);

    if (approve == 'y')
    {
        remove(fichier);
    }
    clear_screen();
    navigation_accueil();
}