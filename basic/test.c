#include<stdio.h>

int main()
{
    int n, sum=0, current_n = 1;

    printf("enter any number :");
    scanf("%d", &n);

    while (current_n<=n)
    {
        sum += current_n;
        current_n++;
    }
    printf("%d", sum);
    
}