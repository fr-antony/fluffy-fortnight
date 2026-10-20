#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../formes/cercle/cercle.h"
#include "../formes/rectangle/rectangle.h"
#include "../couleur/creation_couleur.h"
#include "../utils/clear_screen.h"
#include "../demande/demande_entier_borne.h"
#include "../utils/slow_printf.h"

/**
 * @brief Modifies an existing SVG file
 */
void modifier_fichier()
{
    char fichier[32];

    clear_screen();
    slow_printf("Menu d'édition\n");
    slow_printf("Entrer le nom du fichier (ex. icon.svg)");
    scanf("%31s", fichier);

    FILE* fichier_svg = fopen(fichier, "r");
    FILE* fichier_sortie = fopen("temp.svg", "w");

    char ligne_actual[256];
    int ligne = 0;

    clear_screen();
    slow_printf("Modification du fichier SVG\n");

    while (fgets(ligne_actual, sizeof(ligne_actual), fichier_svg) != NULL)
    {
        if (strstr(ligne_actual, "<rect") || strstr(ligne_actual, "<circle") || strstr(ligne_actual, "<ellipse") || strstr(ligne_actual, "<line"))
        {
            ligne++;

            if (strstr(ligne_actual, "<rect"))
            {
                printf("\nLigne %d contient un rectangle.\n", ligne);
                formes_rectangle(fichier_sortie);
            }
            else if (strstr(ligne_actual, "<circle"))
            {
                printf("\nLigne %d contient un cercle.\n", ligne);
                formes_cercle(fichier_sortie);
            }
            else if (strstr(ligne_actual, "<ellipse"))
            {
                printf("\nLigne %d contient une ellipse.\n", ligne);
                
            }
            else if (strstr(ligne_actual, "<line"))
            {
                printf("\nLigne %d contient une ligne.\n", ligne);
                
            }
        }
        else
        {
            fprintf(fichier_sortie, "%s", ligne_actual);
        }
    }

    fclose(fichier_svg);
    fclose(fichier_sortie);

    printf("\nLe fichier SVG a ete modifie:\n%s\n", fichier);
}