#include <stdio.h>
#include <stdlib.h>

void formes_carre(FILE *fichier, const char *couleur, int x, int y, int cote)
{
    fprintf(fichier, "<rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" fill=\"%s\" />\n", x, y, cote, cote, couleur);
}