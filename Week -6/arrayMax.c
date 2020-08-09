#include<stdio.h>

int main()
{
    int arr[100];
    int i, num, max;

    scanf("%d", &num);
    printf("enter %d numbers: ", num);

    for (i = 0; i <num; i++)
    {
        scanf("%d", &arr[i]);
    }

    max= arr[0];
    for ( i = 1; i < num; i++)
    {
        if (max<arr[i])
        {
            max = arr[i];
        }
    }

    printf("Max elements is %d\n", max);
    



}