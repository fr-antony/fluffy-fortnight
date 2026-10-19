#include <stdlib.h>

#include "clear_screen.h"

/**
 * @brief Clears the terminal screen
 */
void clear_screen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}