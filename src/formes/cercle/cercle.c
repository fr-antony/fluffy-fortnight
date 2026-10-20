#include <stdio.h>
#include <stdlib.h>
#include "../../utils/clear_screen.h"
#include "../../couleur/creation_couleur.h"
#include "../../demande/demande_entier_borne.h"

/**
 * @brief Draws a circle in an SVG file
 * @param fichier The file pointer to the SVG file
 */
void formes_cercle(FILE *fichier)
{
    clear_screen();

    char* couleur;
    int x;
    int y;
    int xf;
    int yf;
    int largeur;

    printf("Couleur du cercle :\n");
    couleur = creation_couleur();
    
    x = demande_entier_borne("Position horizontale du cercle", -500, 500);
    
    y = demande_entier_borne("Position verticale du cercle", -500, 500);
    
    largeur = demande_entier_borne("Largeur du cercle", 1, 1000);

    xf = x + largeur;

    yf = y + largeur;
    
    fprintf(fichier, "<circle cx=\"%d\" cy=\"%d\" r=\"%d\" fill=\"%s\"/>\n", xf, yf, largeur, couleur);
}