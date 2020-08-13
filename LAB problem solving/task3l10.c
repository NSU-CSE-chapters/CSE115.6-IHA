//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include <stdio.h>

int main()
{

    int rows, i, j;

    printf("enter Rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {

        for (j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        for (j = i - 1; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = rows - 1; i >= 1; i--)
    {

        for (j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        for (j = i - 1; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}