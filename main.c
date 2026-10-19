#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#include "navigation/navigation_accueil.h"
#include "utils/clear_screen.h"
#include "utils/slow_printf.h"

/**
 * @brief main function of the program
 * @return int
 */
int main()
{
    clear_screen();
    slow_printf("Compilation...", 1);
    slow_printf("Création de bugs runtime...", 1);
    slow_printf("Démarrage du programme", 1);
    sleep(1);
    clear_screen();
    navigation_accueil();
}