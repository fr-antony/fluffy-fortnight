#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "../formes/rectangle/rectangle.h"
#include "../couleur/creation_couleur.h"
#include "../utils/clear_screen.h"
#include "../demande/demande_entier_borne.h"
#include "../utils/slow_printf.h"
#include "../navigation/navigation_accueil.h"
#include "../formes/ligne/ligne.h"
#include "../formes/cercle/cercle.h"
#include "../formes/ellipse/ellipse.h"

/**
 * @brief Creates a new SVG file and adds shapes to it until the user stops
 */
void creer_fichier()
{
    char nom_fichier[256];
    FILE* fichier;
    int choix;
    int nb_formes = 0;

    clear_screen();

    printf("Nom du fichier SVG a creer (ex. dessin.svg) : ");
    scanf("%255s", nom_fichier);

    fichier = fopen(nom_fichier, "w");

    fprintf(fichier, "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"1000\" height=\"1000\" viewBox=\"0 0 1000 1000\">\n");

    do
    {
        clear_screen();

        slow_printf("Menu de création (");
        printf("%d", nb_formes);
        slow_printf(" forme.s ajoutée.s)\n\n");
        slow_printf("1. Cercle\n2. Ellipse\n3. Rectangle / Carré\n4. Ligne\n5. Enchainement de lignes (non disponible)\n6. Polygone (non disponible)\n7. Trajectoire (non disponible)\n8. Terminer et enregistrer\n");

        choix = demande_entier_borne("", 1, 8);

        switch (choix)
        {
            case 1:
                formes_cercle(fichier);
                nb_formes++;
                break;
            case 2:
                formes_ellipse(fichier);
                nb_formes++;
                break;
            case 3:
                formes_rectangle(fichier);
                nb_formes++;
                break;
            case 4:
                formes_ligne(fichier);
                nb_formes++;
                break;
            case 5:
            case 6:
            case 7:
                printf("\nCette forme n'est pas encore disponible.\n");
                break;
            default:
                break;
        }
    } while (choix != 8);

    fprintf(fichier, "</svg>\n");

    fclose(fichier);

    printf("Fichier cree : %s (%d forme(s))\n", nom_fichier, nb_formes);
    sleep(1);

    clear_screen();
    navigation_accueil();
}