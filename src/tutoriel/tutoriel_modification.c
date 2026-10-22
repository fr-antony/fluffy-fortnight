#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../utils/leave.h"
#include "../utils/slow_printf.h"
#include "../utils/clear_screen.h"
#include "../navigation/navigation_accueil.h"
#include "../utils/slow_printf.h"

void tutoriel_modification()
{
    clear_screen();

    slow_printf("Tutoriel d'édition\n\n");

    slow_printf("Entrer le nom du fichier (ex. dessin.svg) : ");
    sleep(1);
    slow_printf("dessin.svg\n\n");

    slow_printf("Couleur du cercle :\n");
    slow_printf("\rDans ce tutoriel, ce sera un cercle.");
    slow_printf("Intensite rouge (0 - 255) : ");
    sleep(1);
    slow_printf("255     \n");
    slow_printf("Intensite vert (0 - 255) : ");
    sleep(1);
    slow_printf("66     \n");
    slow_printf("Intensite bleu (0 - 255) : ");
    sleep(1);
    slow_printf("67     \n\n");

    slow_printf("\rLe cercle sera positionne en haut a gauche.\n");
    slow_printf("Position horizontale du cercle(-500 - 500) : \n");
    sleep(1);
    slow_printf("-500     \n");

    slow_printf("Position verticale du cercle(-500 - 500) : \n\n");
    sleep(1);
    slow_printf("-500     \n");


    slow_printf("Largeur du cercle(1 - 1000) : ");
    sleep(1);
    slow_printf("500     \n\n");

    slow_printf("Le fichier SVG a ete modifie: dessin.svg\n\n");
    
    slow_printf("Félicitations vous avez modifié votre forme\n\n");
    slow_printf("Appuyer sur entrer pour continuer...");
    getchar();
    getchar();

    navigation_accueil();
}