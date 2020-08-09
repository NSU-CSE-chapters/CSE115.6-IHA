#include<stdio.h>

int main()
{
    int arr[100];
    int i, num, min;

    scanf("%d", &num);
    printf("enter %d numbers: ", num);

    for (i = 0; i <num; i++)
    {
        scanf("%d", &arr[i]);
    }

    min= arr[0];
    for ( i = 1; i < num; i++)
    {
        if (min>arr[i])
        {
            min = arr[i];
        }
    }

    printf("min elements is %d\n", min);
    



}