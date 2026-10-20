#include <stdio.h>

/**
 * @brief Asks the user to enter an integer
 * @param entier The message to display
 * @return int The entered integer
 */
int demande_entier(char* entier)
{
    int nombre;

    printf("%s : ", entier);

    scanf("%d", &nombre);

    return nombre;
}