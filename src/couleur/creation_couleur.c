#include <stdio.h>
#include <stdlib.h>
#include "../demande/demande_entier_borne.h"

void creation_couleur()
{
    int r = demande_entier_borne(0,255);
    int g = demande_entier_borne(0,255);
    int b = demande_entier_borne(0,255);
    printf("rgb(%d %d %d)", r, g, b);
}