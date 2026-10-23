#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "../formes/cercle/cercle.h"
#include "../formes/rectangle/rectangle.h"
#include "../formes/ligne/ligne.h"
#include "../formes/ellipse/ellipse.h"
#include "../couleur/creation_couleur.h"
#include "../utils/clear_screen.h"
#include "../demande/demande_entier_borne.h"
#include "../utils/slow_printf.h"
#include "../navigation/navigation_accueil.h"

/**
 * @brief Modifies an existing SVG file
 */
void modifier_fichier()
{
    char fichier[32];

    clear_screen();
    slow_printf("Menu d'édition\n\n");
    slow_printf("Entrer le nom du fichier (ex. dessin.svg) : ");
    scanf("%31s", fichier);

    FILE *fichier_svg = fopen(fichier, "r");
    FILE *fichier_sortie = fopen("temp.svg", "w");

    char ligne_actuelle[256];
    int ligne = 0;

    clear_screen();

    while (fgets(ligne_actuelle, sizeof(ligne_actuelle), fichier_svg) != NULL)
    {
        if (strstr(ligne_actuelle, "<rect") || strstr(ligne_actuelle, "<circle") || strstr(ligne_actuelle, "<ellipse") || strstr(ligne_actuelle, "<line"))
        {
            ligne++;

            if (strstr(ligne_actuelle, "<rect"))
            {
                printf("\nLigne %d contient un rectangle.\n", ligne);
                formes_rectangle(fichier_sortie);
            }
            else if (strstr(ligne_actuelle, "<circle"))
            {
                printf("\nLigne %d contient un cercle.\n", ligne);
                formes_cercle(fichier_sortie);
            }
            else if (strstr(ligne_actuelle, "<ellipse"))
            {
                printf("\nLigne %d contient une ellipse.\n", ligne);
                formes_ellipse(fichier_sortie);
            }
            else if (strstr(ligne_actuelle, "<line"))
            {
                printf("\nLigne %d contient une ligne.\n", ligne);
                formes_ligne(fichier_sortie);
            }
        }
        else
        {
            fprintf(fichier_sortie, "%s", ligne_actuelle);
        }
    }

    fclose(fichier_svg);
    fclose(fichier_sortie);
    remove(fichier);
    rename("temp.svg", fichier);

    printf("\nLe fichier SVG a ete modifie : %s", fichier);
    sleep(1);

    clear_screen();
    navigation_accueil();
}