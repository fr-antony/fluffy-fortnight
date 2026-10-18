#include <stdio.h>
#include "formes.h"
#include "carre/carre.h"

void formes(FILE* fichier, int type, const char* couleur, int x, int y, int taille)
{
    if (type == 1)
    {
        formes_carre(fichier, couleur, x, y, taille);
    }
}