#include <stdio.h>

#include "../utils/slow_printf.h"

/**
 * @brief Prompts the user to enter an integer value
 * @param entier The prompt message for the user
 * @return int The integer value entered by the user
 */
int demande_entier(char* entier)
{
    int nombre;

    printf("%s : ", entier);

    scanf("%d", &nombre);

    return nombre;
}