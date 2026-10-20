#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "navigation/navigation_accueil.h"
#include "utils/clear_screen.h"
#include "utils/slow_printf.h"

/**
 * @brief The main function of the program
 * @return The exit status of the program
 */
int main()
{
    clear_screen();
    slow_printf("Compilation...\n");
    slow_printf("Création de bugs runtime...\n");
    slow_printf("Démarrage du programme\n");
    sleep(1);
    navigation_accueil();
    return 0;
}