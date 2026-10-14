#include <stdio.h>
#include <stdlib.h>
#include "creation.h"
#include "../formes/formes.h"
#include "../../main.h"

void creation()
{
    int choix;

    printf("Création de votre fichier SVG\n");
    printf("Que souhaitez-vous faire ?\n\n");
    printf("1. Carré\n2. Cercle\n3. Chemin\n4. Ellipse\n5. Groupe\n6. Ligne\n7. Polygones\n8. Polylignes\n9. Rectangle\n\n");
    printf("Choisissez une option (1-9): ");
    scanf("%d", &choix);

    if(choix >= 1 && choix <= 9)
    {
        formes(choix);
    }
    else
    {
        main();
    }
}