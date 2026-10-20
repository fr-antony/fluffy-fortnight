#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "utils/slow_printf.h"

/**
 * @brief Displays an Easter egg in the form of ASCII art depicting a dog
 */
void dog()
{
    slow_printf("         .--.             .---.              \n");
    slow_printf("        /:.  '.         .' ..  '._.---.      \n");
    slow_printf("       /:::-.  \\.-\"\"\"-;` .-:::.     .::\\\n");
    slow_printf("      /::'|  `\\/  _ _  \\'   `\\:'   ::::|  \n");
    slow_printf("  __.'    |   /  (o|o)  \\     `'.   ':/     \n");
    slow_printf(" /    .:. /   |   ___   |        '---'       \n");
    slow_printf("|    ::::'   /:  (._.) .:\\                  \n");
    slow_printf("\\    .='    |:'        :::|                 \n");
    slow_printf(" `\"\"`       \\     .-.   ':/               \n");
    slow_printf("             '---`|I|`---'                   \n");
    slow_printf("                  '-'                        \n");
}