#include <stdio.h>
#include <stdlib.h>
#include "../demande/demande_entier_borne.h"
#include "creation_couleur.h"

/**
 * @brief Creates a color in RGB format based on user input
 * @return char* The color in RGB format (e.g., "rgb(255, 0, 0)")
 */
char* creation_couleur()
{
    char *couleur;
    int rouge;
    int vert;
    int bleu;

    rouge = demande_entier_borne("Intensite rouge", 0, 255);

    vert = demande_entier_borne("Intensite verte", 0, 255);

    bleu = demande_entier_borne("Intensite bleue", 0, 255);

    couleur = malloc(32);

    sprintf(couleur, "rgb(%d, %d, %d)", rouge, vert, bleu);

    return couleur;
}