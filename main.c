/* Aperçu
Fluffy-fortnight execution


1. Créer
2. Editer
3. Sauver
4. Charger
5. Visualiser

Choisissez une option (1-5): 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int choix;
    
    printf("Fluffy-fortnight execution\n\n");
    printf("1. Créer\n2. Editer\n3. Sauver\n4. Charger\n5. Visualiser\n\n");
    printf("Choisissez une option (1-5): ");
    scanf("%d", &choix);

    switch (choix)
    {
        case 1:
            printf("Choix 1");
            break;
        case 2:
            printf("Choix 2");
            break;
        case 3:
            printf("Choix 3");
            break;
        case 4:
            printf("Choix 4");
            break;
        case 5:
            printf("Choix 5");
            break;
        default:
            printf("Arrêt de Fluffy-fortnight");
            return EXIT_SUCCESS;
            break;
    };
    return EXIT_SUCCESS;
}