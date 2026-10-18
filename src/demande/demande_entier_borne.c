#include <stdio.h>

int demande_entier_borne(int min, int max)
{
    int nombre;

    do
    {
        printf("Entrer un entier (%d - %d) : ", min, max);

        scanf("%d", &nombre);

        if (nombre < min || nombre > max)
        {
            printf("Le nombre est hors de l'intervalle.\n");
        }
    } while (nombre < min || nombre > max);

    return nombre;
}