#include <stdio.h>
#include <stdlib.h>

#include "creation_couleur.h"
#include "../demande/demande_entier_borne.h"

char* creation_couleur()
{
    char *couleur;
    int rouge;
    int vert;
    int bleu;

    printf("Intensite rouge :\n");
    rouge = demande_entier_borne(0, 255);

    printf("Intensite verte :\n");
    vert = demande_entier_borne(0, 255);

    printf("Intensite bleue :\n");
    bleu = demande_entier_borne(0, 255);

    couleur = malloc(32);

    sprintf(couleur, "rgb(%d, %d, %d)", rouge, vert, bleu);

    return couleur;
}