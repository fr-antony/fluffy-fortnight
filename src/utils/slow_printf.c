#define _POSIX_C_SOURCE 199309L
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


void slow_printf(char* message, int vitesse)
{
    struct timespec slent = {
        .tv_sec = 0,
        .tv_nsec = 20000000L
    };

    struct timespec srapide = {
        .tv_sec = 0,
        .tv_nsec = 10000000L
    };

    setvbuf(stdout, NULL, _IONBF, 0);

    if( vitesse == 1 )
    {
        for (size_t i = 0; message[i]; i++)
        {
            printf("%c", message[i]);
            nanosleep(&slent, NULL);
        }
    }
    else{
        for (size_t i = 0; message[i]; i++)
        {
            printf("%c", message[i]);
            nanosleep(&srapide, NULL);
        }
    }

    printf("\n");
}