#include <stdio.h>
#include <stdlib.h>
#include "../../utils/clear_screen.h"
#include "../../couleur/creation_couleur.h"
#include "../../demande/demande_entier_borne.h"

/**
 * @brief Draws a rectangle in an SVG file
 * @param fichier The file pointer to the SVG file
 */
void formes_rectangle(FILE *fichier)
{
    clear_screen();

    char* couleur;
    int x;
    int y;
    int xf;
    int yf;
    int largeur;
    int longueur;

    printf("Couleur du rectangle :\n");
    couleur = creation_couleur();
    
    x = demande_entier_borne("Position horizontale du rectangle", -500, 500);
    
    y = demande_entier_borne("Position verticale du rectangle", -500, 500);
    
    largeur = demande_entier_borne("Largeur du rectangle", 1, 1000);
    
    longueur = demande_entier_borne("Longueur du rectangle", 1, 1000);
    
    xf = x + (longueur / 2);
    
    yf = y + (largeur / 2);
    
    fprintf(fichier, "<rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" fill=\"%s\" />\n", xf, yf, largeur, longueur, couleur);
}