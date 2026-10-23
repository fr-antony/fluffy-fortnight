#include <stdio.h>
#include "../utils/slow_printf.h"

/**
 * @brief Demande à l'utilisateur de saisir un entier
 * @param message Le message à afficher
 * @return L'entier saisi par l'utilisateur
 */
int demande_entier(char* message)
{
    int nombre;
        printf("%s : ", message);
        
        scanf("%d", &nombre);
    return nombre;
}