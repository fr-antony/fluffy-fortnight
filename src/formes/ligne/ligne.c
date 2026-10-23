#include <stdio.h>
#include <stdlib.h>
#include "../../utils/clear_screen.h"
#include "../../couleur/creation_couleur.h"
#include "../../demande/demande_entier_borne.h"
#include "../../demande/demande_entier.h"

/**
 * @brief Creates a line in the SVG file
 * @param fichier The SVG file to write to
 */
void formes_ligne(FILE* fichier)
{
    clear_screen();

    char* couleur;
    int x1;
    int y1;
    int x2;
    int y2;
    int epaisseur;

    printf("Couleur de la ligne :\n");
    couleur = creation_couleur();
    
    x1 = demande_entier_borne("Position du premier point en x", -500, 500) + 500;
    y1 = demande_entier_borne("Position du premier point en y", -500, 500) + 500;
    
    x2 = demande_entier_borne("Position du second point en x", -500, 500) + 500;
    y2 = demande_entier_borne("Position du second point en y", -500, 500) + 500;

    epaisseur = demande_entier("Épaisseur de la ligne");

    fprintf(fichier, "<line x1=\"%d\" y1=\"%d\" x2=\"%d\" y2=\"%d\" stroke=\"%s\" stroke-width=\"%d\"/>\n", x1, y1, x2, y2, couleur, epaisseur);
}