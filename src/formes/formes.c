#include <stdio.h>
#include <stdlib.h>

typedef struct carre
{
    int longueur;
    int rotation;
    int couleur;
} carre_t;
typedef struct cercle
{
    int rayon;
    int couleur;
} cercle_t;
typedef struct chemin
{
    int longueur;
    int angle;
    int couleur;
} chemin_t;
typedef struct ellipse
{
    int longueur;
    int largeur;
    int couleur;
} ellipse_t;
typedef struct ligne
{
    int longueur;
    int angle;
    int couleur;
} ligne_t;
typedef struct polygones
{
    int longueur;
    int cote;
    int couleur;
} polygones_t;
typedef struct polylignes
{
    int longueur;
    int angle;
    int couleur;
    int iteration;
} polylignes_t;
typedef struct rectangle
{
    int longueur;
    int largeur;
    int couleur;
} rectangle_t;

// Faire le système de groupe !!!!!!!!!!!!!!!!

void formes(int choix)
{
    char filename[15];
    printf("%d\n", choix);
    switch (choix)
    {
        case 1:
            printf("Nom du fichier (15 char. max.) : ");
            scanf("%s", filename);
            FILE* file = fopen(filename, "w");
            fprintf(file, "Nouveau contenu");
            fclose(file);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        default:
            break;
    }
}