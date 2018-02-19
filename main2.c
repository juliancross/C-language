#include <stdio.h>
#include <stdlib.h>

/*
sizeof (<données>) retourne la taille en octets d'une donnée
malloc(<taille en octet>) : allouer dynamiquement une zone memoire
free(<donneé alloué>) : libére la mémoire allouée dynamiquement
calloc(<donnees>, <taille en octet>);
realloc(<donnees>, <nouvelle taille>); realloue un espace mémoire
*/

int main(void)
{

    int players = 2;
    int* listePlayers = NULL;
    int i = 0;

    listePlayers = malloc(sizeof(int) * players);
    //listePlayers = calloc(players, sizeof(int)); => pareil que malloc mais initialise à 0 ce que fait pas malloc();

    if (listePlayers == NULL)
        exit(1);

    for (i = 0; i < players; i++) {
        printf("Le numero du joueur %d est le numéro --> %d\n", i + 1, i * 3);
        listePlayers[i] = i * 3;
    }

    for (i = 0; i < players; i++) {
        printf("[%d]\n", listePlayers[i]);
    }

    /*------------------------------------*/

    players = 5;
    listePlayers = realloc(listePlayers, sizeof(int) * players);

    if (listePlayers == NULL)
        exit(1);

    for (i = 0; i < players; i++) {
        printf("Le numero du joueur %d est le numéro --> %d\n", i + 1, i * 3);
        listePlayers[i] = i * 3;
    }

    for (i = 0; i < players; i++) {
        printf("[%d]\n", listePlayers[i]);
    }

    free(listePlayers);

    return 0;
}