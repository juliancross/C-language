#include <stdio.h>
#include <string.h>

typedef struct Player { // structure prend different espace mémoire par rapport à union
    char userName[256]; // bug signed char était trop petit avec[256]
    int hp;
    int mp;
} Player;
// typedef struct Player Player
/*---------------------------------------------------------------------------*/

void createPlayer(Player* p)
{
    strcpy((*p).userName, "Julian");
    p->hp = 800;
    (*p).mp = 200;
}

/*---------------------------------------------------------------------------*/

int main(void)
{

    Player p1 = { "Jamy", 100, 100 };
    printf("Le prénom est du joueur est %s \n", p1.userName);
    printf("PV :  %d et PM :  %d\n", p1.hp, p1.mp);

    strcpy(p1.userName, "Jennifer"); //pour les chaines de caracteres stcrpy
    p1.hp -= 50;
    printf("Le prénom est du joueur est %s \n", p1.userName);
    printf("PV : %d \n", p1.hp);

    Player p2 = { " ", 0, 0 };
    createPlayer(&p2);
    printf("Le prénom est du joueur est %s \n", p2.userName);
    printf("PV : %d \n", p2.hp);

    return 0;
}

/*---------------------------------------------------------------------------*/