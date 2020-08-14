#include <stdio.h>
int listNumbersDesc(int start, int end);
int main()
{
    int start, end;
    scanf("%d%d", &start, &end);
    int desc = listNumbersDesc(start, end);

    printf("%d ", desc);
}

int listNumbersDesc(int start, int end)
{
    int i;

    for (i = end; i > start; i--)
    {
        printf("%d ", i);
    }
}