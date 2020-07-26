//9+99+999+9999+999999

#include<stdio.h>

int main()
{
    int n, term = 9, sum=0;
    printf("enter the number of terms: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + term;
        printf("%d\t", term);
        term = term*10+9;
    }
    printf("\ntotal sum is: %d\n", sum);
    
}