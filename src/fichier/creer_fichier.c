#include <stdio.h>
#include <stdlib.h>

#include "../couleur/creation_couleur.h"
#include "../demande/demande_entier_borne.h"
#include "../formes/formes.h"

void creer_fichier()
{
    char nom_fichier[256];
    char *couleur;
    FILE *fichier;
    int choix;
    int x;
    int y;
    int cote;

    printf("Formes disponibles :\n");
    printf("1. Carre\n");
    printf("2. Cercle (non disponible)\n");
    printf("3. Ellipse (non disponible)\n");
    printf("4. Rectangle (non disponible)\n");
    printf("5. Ligne (non disponible)\n");
    printf("6. Enchainement de lignes (non disponible)\n");
    printf("7. Polygone (non disponible)\n");
    printf("8. Trajectoire (non disponible)\n");
    printf("9. Groupe (non disponible)\n");

    choix = demande_entier_borne(1, 9);
    if (choix != 1)
    {
        printf("Cette forme n'est pas encore prise en charge.\n");
        return;
    }

    printf("Nom du fichier SVG a creer (ex. dessin.svg) : ");
    scanf("%255s", nom_fichier);

    printf("Couleur du carre :\n");
    couleur = creation_couleur();
    if (couleur == NULL)
    {
        printf("Impossible de creer la couleur.\n");
        return;
    }

    printf("Position horizontale du carre (0 - 1000) :\n");
    x = demande_entier_borne(0, 1000);

    printf("Position verticale du carre (0 - 1000) :\n");
    y = demande_entier_borne(0, 1000);

    printf("Longueur du cote du carre (1 - 1000) :\n");
    cote = demande_entier_borne(1, 1000);

    fichier = fopen(nom_fichier, "w");
    if (fichier == NULL)
    {
        printf("Impossible de creer le fichier.\n");
        free(couleur);
        return;
    }

    fprintf(fichier, "<svg xmlns=\"http://www.w3.org/2000/svg\" "
                     "width=\"1000\" height=\"1000\">\n");
    formes(fichier, choix, couleur, x, y, cote);
    fprintf(fichier, "</svg>\n");

    fclose(fichier);
    free(couleur);

    printf("Fichier cree : %s\n", nom_fichier);
}