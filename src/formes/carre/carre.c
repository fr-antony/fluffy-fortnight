#include <stdio.h>
#include <stdlib.h>

#include "../../utils/clear_screen.h"
#include "../../couleur/creation_couleur.h"
#include "../../demande/demande_entier_borne.h"

/**
 * @brief Draws a square in an SVG file
 * @param fichier The file pointer to the SVG file
 */
void formes_carre(FILE *fichier)
{
    clear_screen();

    char* couleur;
    int x;
    int y;
    int xf;
    int yf;
    int cote;

    couleur = creation_couleur();
    
    x = demande_entier_borne("Position horizontale du carre", -500, 500);
    
    y = demande_entier_borne("Position verticale du carre", -500, 500);
    
    cote = demande_entier_borne("Longueur du cote du carre", 1, 1000);

    xf = ((1000-cote)/2)+x;

    yf = ((1000-cote)/2)+y;
    
    fprintf(fichier, "<rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" fill=\"%s\" />\n", xf, yf, cote, cote, couleur);
}