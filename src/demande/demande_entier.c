#include <stdio.h>
#include <stdlib.h>

int demande_entier()
{
    int number;

    printf("Entrer un entier: ");
    scanf("%d", &number);
    
    return number;
}