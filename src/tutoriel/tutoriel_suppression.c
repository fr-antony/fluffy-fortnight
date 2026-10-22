#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../utils/clear_screen.h"
#include "../utils/slow_printf.h"
#include "../navigation/navigation_accueil.h"

void tutoriel_suppression()
{
    clear_screen();
    slow_printf("Tutoriel de suppression\n\n");
    slow_printf("Entrer le nom du fichier (ex. dessin.svg) : ");
    sleep(1);
    slow_printf("dessin.svg\n\n");
    
    slow_printf("/!\\ ATTENTION\n");
    slow_printf("/!\\ Le fichier dessin.svg sera supprimé de manière définitive\n");
    slow_printf("/!\\ Souhaitez-vous vraiment le supprimer ? [y/N] : ");
    sleep(1);
    slow_printf("y\n\n");

    slow_printf("Félicitations vous avez modifié votre forme\n\n");
    slow_printf("Appuyer sur entrer pour continuer...");
    getchar();
    getchar();
    
    clear_screen();
    navigation_accueil();
}