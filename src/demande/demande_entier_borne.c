#include <stdio.h>

#include "../utils/slow_printf.h"

/**
 * @brief Asks the user to enter an integer within a specified range
 * @param min The minimum value of the range
 * @param max The maximum value of the range
 * @return int The integer entered by the user
 */
int demande_entier_borne(char* message, int min, int max)
{
    int nombre;
    
    do
    {
        printf("%s (%d - %d) : ", message, min, max);
        
        scanf("%d", &nombre);
        
        if (nombre < min || nombre > max)
        {
            printf("Le nombre est hors de l'intervalle.\n");
        }        
    } while (nombre < min || nombre > max);

    return nombre;
}