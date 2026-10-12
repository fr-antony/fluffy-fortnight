#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int longueur;
    int rotation;
    int couleur;
} carre_t;
typedef struct
{
    int rayon;
    int couleur;
} cercle_t;
typedef struct
{
    int longueur;
    int angle;
    int couleur;
} chemin_t;
typedef struct
{
    int longueur;
    int largeur;
    int couleur;
} ellipse_t;
typedef struct
{
    int longueur;
    int angle;
    int couleur;
} ligne_t;
typedef struct
{
    int longueur;
    int cote;
    int couleur;
} polygones_t;
typedef struct
{
    int longueur;
    int angle;
    int couleur;
    int iteration;
} polylignes_t;
typedef struct
{
    int longueur;
    int largeur;
    int couleur;
} rectangle_t;

void formes(int choix)
{
    const char* top = "<svg xmlns='http://www.w3.org/2000/svg' width='500' height='500' viewBox='0 0 500 500'>";
    const char* bottom = "</svg>";
    printf("%d\n", choix);
    switch (choix)
    {
        case 1:
            carre_t carre;

            printf("Définissez la valeur de la longueur: ");
            scanf("%d", &carre.longueur);
            printf("Définissez la valeur de la rotation: ");
            scanf("%d", &carre.rotation);

            printf("%s", top);
            printf("%d - %d", carre.longueur, carre.rotation);
            printf("%s", bottom);
            break;
        case 2:
            cercle_t cercle;

            printf("Définissez la valeur du rayon: ");
            scanf("%d", &cercle.rayon);

            printf("%s", top);
            printf("%d", cercle.rayon);
            printf("%s", bottom);
            break;
        case 3:
            chemin_t chemin;

            printf("Définissez la valeur de la longueur: ");
            scanf("%d", &chemin.longueur);
            printf("Définissez la valeur de l'angle: ");
            scanf("%d", &chemin.angle);

            printf("%s", top);
            printf("%d - %d", chemin.longueur, chemin.angle);
            printf("%s", bottom);
            break;
        case 4:
            ellipse_t ellipse;

            printf("Définissez la valeur de la longueur: ");
            scanf("%d", &ellipse.longueur);
            printf("Définissez la valeur de la largeur: ");
            scanf("%d", &ellipse.largeur);

            printf("%s", top);
            printf("%d - %d", ellipse.longueur, ellipse.largeur);
            printf("%s", bottom);
            break;
        case 5:
            break;
        case 6:
            ligne_t ligne;

            printf("Définissez la valeur de la longueur: ");
            scanf("%d", &ligne.longueur);
            printf("Définissez la valeur de l'angle: ");
            scanf("%d", &ligne.angle);

            printf("%s", top);
            printf("%d - %d", ligne.longueur, ligne.angle);
            printf("%s", bottom);
            break;
        case 7:
            polygones_t polygones;

            printf("Définissez la valeur de la longueur: ");
            scanf("%d", &polygones.longueur);
            printf("Définissez le nombre de cote: ");
            scanf("%d", &polygones.cote);

            printf("%s", top);
            printf("%d - %d", polygones.longueur, polygones.cote);
            printf("%s", bottom);
            break;
        case 8:
            polylignes_t polylignes;

            printf("Définissez la valeur de la longueur: ");
            scanf("%d", &polylignes.longueur);
            printf("Définissez la valeur de l'angle: ");
            scanf("%d", &polylignes.angle);
            printf("Définissez le nombre d'iteration: ");
            scanf("%d", &polylignes.iteration);

            printf("%s", top);
            printf("%d - %d - %d", polylignes.longueur, polylignes.angle, polylignes.iteration);
            printf("%s", bottom);
            break;
        case 9:
            rectangle_t rectangle;

            printf("Définissez la valeur de la longueur: ");
            scanf("%d", &rectangle.longueur);
            printf("Définissez la valeur de la largeur: ");
            scanf("%d", &rectangle.largeur);

            printf("%s", top);
            printf("%d - %d", rectangle.longueur, rectangle.largeur);
            printf("%s", bottom);
            break;
        default:
            break;
    }
}