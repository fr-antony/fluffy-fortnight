#include <stdio.h>
#include "../utils/slow_printf.h"

/**
 * @brief Asks the user to enter an integer within a specified range
 * @param message The message to display
 * @param min The minimum value (inclusive)
 * @param max The maximum value (inclusive)
 * @return int The entered integer
 */
int demande_entier_borne(char* message, int min, int max)
{
    int nombre;
    
    do
    {
        printf("%s(%d - %d) : ", message, min, max);
        
        scanf("%d", &nombre);
        
        if (nombre < min || nombre > max)
        {
            printf("Le nombre est hors de l'intervalle.\n");
        }        
    } while (nombre < min || nombre > max);

    return nombre;
}
