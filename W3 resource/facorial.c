#include<stdio.h>

int main()
{
    int n, factorial=1;
    printf("enter any positive number: ");
    scanf("%d", &n);

    for (int  i = 1; i <=n; i++)
    {
        factorial = factorial * i;
    }
    printf("factorial= %d\n", factorial);
    
}