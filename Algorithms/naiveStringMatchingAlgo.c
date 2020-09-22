#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void naive(char *, char *);

int main()
{

    char text[] = "My name is Fahim Muntashir ";
    char random[200];

    for (int i = 0; i < 200; i++)
    {
        random[i] = rand() % (90 + 1 - 65) + 65;
    }

    for (int i = 0; i < 200; i++)
    {
        printf("%c", random[i]);
    }
    
    char pattern[] = "LR";

    naive(random, pattern);
}

void naive(char *text, char *pattern)
{
    int M = strlen(pattern);
    int N = strlen(text);

    for (int i = 0; i <= N - M; i++)
    {
        int j;

        for (j = 0; j < M; j++)
        {
            if (text[i + j] != pattern[j])
                break;
        }
        if (j == M)
        {
            printf("Pattern found at index %d \n", i);
        }
    }

}