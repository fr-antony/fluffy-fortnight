#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265358979323846

typedef struct
{
    int longueur;
    int largeur;
    int rotation;
    int rayon;
    int couleur;
    int angle;
    int cote;
    int iteration;
    int x1_axe;
    int y1_axe;
    int x2_axe;
    int y2_axe;
} formes_t;

void formes(int choix)
{
    const char* top = "<svg xmlns='http://www.w3.org/2000/svg' width='500' height='500' viewBox='0 0 500 500'>";

    const char* bottom = "</svg>";
    printf("%d\n", choix);

    formes_t formes;
    
    switch (choix)
    {
        case 1:
            printf("Définissez la valeur de la longueur: ");
            scanf("%d", &formes.longueur);
            printf("Définissez la valeur de la rotation: ");
            scanf("%d", &formes.rotation);

            printf("%s", top);
            printf("<rect width='%d' height='%d' transform='rotate(%d, 50, 50)'/>\n", formes.longueur, formes.longueur, formes.rotation);
            printf("%s", bottom);
            break;
        case 2:
            printf("Définissez la valeur du rayon: ");
            scanf("%d", &formes.rayon);

            printf("%s", top);
            printf("<circle cx='250' cy='250' r='%d'/>", formes.rayon);
            printf("%s", bottom);
            break;
        case 3:

  /*  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //\\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\
 //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\
//  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //    \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\

\\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\    //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //   
 \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //
  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\//  //  //  //  //  //  //  //  //  //  //  //  //  //  //  */

            break;
        case 4:
            printf("Définissez la valeur de l'axe x: ");
            scanf("%d", &formes.x1_axe);
            printf("Définissez la valeur de l'axe y: ");
            scanf("%d", &formes.y1_axe);
            printf("Définissez la valeur de la longueur: ");
            scanf("%d", &formes.longueur);
            printf("Définissez la valeur de la largeur: ");
            scanf("%d", &formes.largeur);

            printf("%s", top);
            printf("<ellipse cx='%d' cy='%d' rx='%d' ry='%d' fill='black'/>", formes.x1_axe, formes.y1_axe, formes.longueur, formes.largeur);
            printf("%s", bottom);
            break;
        case 5:
            break;
        case 6:
        
  /*  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //\\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\
 //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\
//  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //    \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\

\\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\    //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //   
 \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //  //
  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\  \\//  //  //  //  //  //  //  //  //  //  //  //  //  //  //  */

            break;
        case 7:
            printf("Définissez le nombre d'iteration: ");
            scanf("%d", &formes.iteration);

            int n = formes.iteration;
            double R = 80;
            double c = cos(2 * PI / n);
            double s = sin(2 * PI / n);
            double vx = 0, vy = -R;

            printf("<svg xmlns='http://www.w3.org/2000/svg' width='200' height='200'>\n");
            printf("<polygon fill='none' stroke='black' stroke-width='2' points='");

            for (int i = 0; i < n; i++)
            {
                printf("%.2f,%.2f ", 100 + vx, 100 + vy);
                double nx = vx * c - vy * s;
                vy = vx * s + vy * c;
                vx = nx;
            }

            printf("'/></svg>\n");
            break;
        case 8:
            printf("Définissez la valeur de la longueur: ");
            scanf("%d", &formes.longueur);
            printf("Définissez la valeur de l'angle: ");
            scanf("%d", &formes.angle);
            printf("Définissez le nombre d'iteration: ");
            scanf("%d", &formes.iteration);

            printf("%s", top);
            printf("%d - %d - %d", formes.longueur, formes.angle, formes.iteration);
            printf("%s", bottom);
            break;
        case 9:
            printf("Définissez la valeur de la longueur: ");
            scanf("%d", &formes.longueur);
            printf("Définissez la valeur de la largeur: ");
            scanf("%d", &formes.largeur);

            printf("%s", top);
            printf("%d - %d", formes.longueur, formes.largeur);
            printf("%s", bottom);
            break;
        default:
            break;
    }
}