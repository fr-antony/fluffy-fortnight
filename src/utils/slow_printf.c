#define _POSIX_C_SOURCE 199309L
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * @brief Prints a message character by character with a delay
 * @param message The message to print
 */
void slow_printf(char* message)
{
    struct timespec delai = {
        .tv_sec = 0,
        .tv_nsec = 20000000L
    };

    setvbuf(stdout, NULL, _IONBF, 0);

    for (size_t i = 0; message[i]; i++)
    {
        printf("%c", message[i]);
        nanosleep(&delai, NULL);
    }
}