#include <stdlib.h>
#include <stdio.h>
#include "../formes/rectangle/rectangle.h"
#include "../couleur/creation_couleur.h"
#include "../utils/clear_screen.h"
#include "../demande/demande_entier_borne.h"
#include "../utils/slow_printf.h"
#include "../utils/leave.h"
#include "../formes/cercle/cercle.h"
#include "../formes/ellipse/ellipse.h"

/**
 * @brief Creates a new SVG file with a shape
 */
void creer_fichier()
{
    char nom_fichier[256];
    FILE* fichier;
    int choix;

    clear_screen();

    slow_printf("Menu de création\n\n");
    slow_printf("1. Cercle\n2. Ellipse\n3. Rectangle / Carré\n4. Ligne (non disponible)\n5. Enchainement de lignes (non disponible)\n6. Polygone (non disponible)\n7. Trajectoire (non disponible)\n");

    choix = demande_entier_borne("", 1, 7);

    printf("\nNom du fichier SVG a creer (ex. dessin.svg) : ");
    scanf("%255s", nom_fichier);
    
    fichier = fopen(nom_fichier, "w");
    
    fprintf(fichier, "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"1000\" height=\"1000\">\n");
    
    switch (choix)
    {
        case 1:
            formes_cercle(fichier);
            break;
        case 2:
            formes_ellipse(fichier);
            break;
        case 3:
            formes_rectangle(fichier);
            break;
        case 4:
            // Ligne
            break;
        case 5:
            // Enchainement
            break;
        case 6:
            // Polygone
            break;
        case 7:
            // Trajectoire
            break;
        default:
            leave();
            break;
    }

    fprintf(fichier, "</svg>\n");

    fclose(fichier);

    printf("Fichier cree : %s\n", nom_fichier);
}