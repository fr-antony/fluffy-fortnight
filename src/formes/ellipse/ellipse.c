#include <stdio.h>
#include <stdlib.h>
#include "../../utils/clear_screen.h"
#include "../../couleur/creation_couleur.h"
#include "../../demande/demande_entier_borne.h"

/**
 * @brief Creates an ellipse in the SVG file
 * @param fichier The SVG file to write to
 */
void formes_ellipse(FILE* fichier)
{
    clear_screen();

    char* couleur;
    int x;
    int y;
    int xf;
    int yf;
    int largeur;
    int longueur;

    printf("Couleur de l'ellipse :\n");
    couleur = creation_couleur();
    
    x = demande_entier_borne("Position horizontale de l'ellipse", -500, 500);
    
    y = demande_entier_borne("Position verticale de l'ellipse", -500, 500);
    
    largeur = demande_entier_borne("Largeur de l'ellipse", 1, 1000);
    
    longueur = demande_entier_borne("Longueur de l'ellipse", 1, 1000);
    
    xf = x + 500;
    yf = y + 500;

    fprintf(fichier, "<ellipse cx=\"%d\" cy=\"%d\" rx=\"%d\" ry=\"%d\" fill=\"%s\" />\n", xf, yf, largeur, longueur, couleur);
}