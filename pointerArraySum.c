#include<stdio.h>


int main()
{
    int arr[10], *ptr;
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }


    ptr = arr;

    for (int i = 0; i < 10; i++)
    {
        sum  =  sum + *ptr;
        ptr++;
    }


    printf("sum  = %d\n", sum);
    


    
}