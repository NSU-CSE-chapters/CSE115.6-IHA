#include<stdio.h>


int main()
{
    int arr[9] = {34,45,78,52,75,98,68,56,52};
    
    for (int i = 0; i <9; i++)
    {
        printf(" %d", arr[i]);

    }
    printf("\n");

    for (int i = 8; i>=0; i--)
    {
        printf(" %d", arr[i]);
    }
    
    
}