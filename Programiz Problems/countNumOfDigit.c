#include<stdio.h>

int main()
{
    int n, count = 0;
    printf("enter number :");
    scanf("%d", &n);

    while (n!=0)
    {
        count++;
        n=n/10;
    }
    printf("Total digit: %d\n", count);
    
}