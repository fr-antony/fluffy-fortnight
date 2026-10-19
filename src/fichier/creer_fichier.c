#include <stdlib.h>
#include <stdio.h>

#include "../formes/carre/carre.h"
#include "../formes/rectangle/rectangle.h"
#include "../couleur/creation_couleur.h"
#include "../utils/clear_screen.h"
#include "../demande/demande_entier_borne.h"
#include "../utils/slow_printf.h"

/**
 * @brief Creates a new SVG file with a shape
 */
void creer_fichier()
{
    char nom_fichier[256];
    FILE* fichier;
    int choix;

    clear_screen();

    slow_printf("Menu de création\n", 1);

    choix = demande_entier_borne("1. Carre\n2. Cercle (non disponible)\n3. Ellipse (non disponible)\n4. Rectangle\n5. Ligne (non disponible)\n6. Enchainement de lignes (non disponible)\n7. Polygone (non disponible)\n8. Trajectoire (non disponible)\n", 1, 8);

    printf("\nNom du fichier SVG a creer (ex. dessin.svg) : ");
    scanf("%255s", nom_fichier);
    
    fichier = fopen(nom_fichier, "w");
    
    fprintf(fichier, "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"1000\" height=\"1000\">\n");
    
    switch (choix)
    {
        case 1:
            formes_carre(fichier);
            break;
        case 2:
            // Cercle
            break;
        case 3:
            // Ellipse
            break;
        case 4:
            formes_rectangle(fichier);
            break;
        case 5:
            // Ligne
            break;
        case 6:
            // Enchainement
            break;
        case 7:
            // Polygone
            break;
        case 8:
            // Trajectoire
            break;
    }

    fprintf(fichier, "</svg>\n");

    fclose(fichier);

    printf("Fichier cree : %s\n", nom_fichier);
}