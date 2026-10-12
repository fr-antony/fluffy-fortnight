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
    printf("%d\n", choix);
}