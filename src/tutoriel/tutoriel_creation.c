#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../utils/leave.h"
#include "../utils/slow_printf.h"
#include "../utils/clear_screen.h"
#include "../navigation/navigation_accueil.h"

/**
 * @brief Displays a tutorial for creating shapes in the SVG file
 */
void tutoriel_creation()
{
    clear_screen();
    slow_printf("Tutoriel de création\n\n");
    slow_printf("1. Cercle\n2. Ellipse\n3. Rectangle / Carré\n4. Ligne (non disponible)\n5. Enchainement de lignes (non disponible)\n6. Polygone (non disponible)\n7. Trajectoire (non disponible)\n");
    slow_printf("(1 - 7) :");
    sleep(1);
    slow_printf(" 1\n\n");

    slow_printf("Il est impératif de mettre .svg en extension");
    sleep(2);
    slow_printf("\rNom du fichier SVG a creer (ex. dessin.svg) : dessin.svg");
    sleep(2);

    clear_screen();

    slow_printf("Couleur du cercle : \n");
    slow_printf("Intensite rouge (0 - 255) : ");
    slow_printf("100\n");
    slow_printf("Intensite vert (0 - 255) : ");
    slow_printf("50\n");
    slow_printf("Intensite bleu (0 - 255) : ");
    slow_printf("255\n\n");
    sleep(1);

    slow_printf("Position horizontale du cercle (-500 - 500) : ");
    slow_printf("0\n");
    
    slow_printf("Position verticale du cercle (-500 - 500) : ");
    slow_printf("0\n\n");

    slow_printf("Le cercle sera centrer");
    sleep(1);
    
    slow_printf("\rLargeur du cercle (1 - 1000) : ");
    slow_printf("254\n\n");
    
    slow_printf("Félicitations vous avez créer votre forme\n\n");
    slow_printf("Appuyer sur entrer pour continuer...");
    getchar();
    getchar();

    navigation_accueil();
}