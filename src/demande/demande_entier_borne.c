#include <stdio.h>
#include <stdlib.h>

int demande_entier_borne(int min, int max)
{
    int number;

    do
    {
        printf("Entrer un entier (%d - %d): ", min, max);
        scanf("%d", &number);
    }
    while(number < min || number > max);

    return number;
}