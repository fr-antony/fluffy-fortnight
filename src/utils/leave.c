#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "../utils/clear_screen.h"
#include "../utils/slow_printf.h"
#include "../utils/dog.h"

/**
 * @brief Exits the program gracefully
 */
void leave()
{
    clear_screen();
    slow_printf("Arrêt du programme\n");
    slow_printf("Début de la faim\n");
    dog();
    sleep(1);
    clear_screen();
}