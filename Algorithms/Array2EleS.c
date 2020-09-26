#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int i, j;
    int count = 0;
    int x = 9, sum = 0;
    for (i = 0; i < 5 - 1; i++)
    {
        for (j = 1; j < 5; j++)
        {
            if ((arr[i] + arr[j]) == x)
            {
                count = 1;
                break;
            }
        }
    }

    if (count == 1)
    {
        printf("found\n");
    }
    if (count == 0)
    {
        printf("not found\n");
    }
}