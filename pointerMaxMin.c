#include<stdio.h>

int main()
{
    int arr[10], *ptr, max = -32768, min = 32767;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;


    for (int i = 0; i < 10; i++)
    {
        if (*ptr > max)
        {
            max = *ptr;
        }
        if (*ptr < min)
        {
            min = *ptr;
        }

        ptr++;
        
        
    }
    
    printf("max = %d \n min = %d\n", max,min);
}