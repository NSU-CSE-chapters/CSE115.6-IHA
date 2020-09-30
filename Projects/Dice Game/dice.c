#include <stdio.h>
#include <time.h>
#include <stdlib.h>

FILE *fp;

int main()
{
    srand(time(0));

    printf("player-1: press enter to roll your dice\n");
    getc(stdin);

    int p1 = (rand() % 6) + 1;

    printf("player-2: press enter to roll your dice\n");
    getc(stdin);

    int p2 = (rand() % 6) + 1;

    printf("player 1 rolling %d and player 2 rolling %d \n", p1, p2);

    if (p1 == p2)
    {
        printf("tied");
    }
    else if (p1 > p2)
    {
        printf("p1 win\n");
    }
    else
    {
        printf("p2 win\n");
    }
}