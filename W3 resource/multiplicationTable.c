#include<stdio.h>

int main()
{
    int n, count;
    printf("enter the number: ");
    scanf("%d", &n);

    for (int i = 1; i <=10; i++)
    {
        count = n * i;
        printf("%d X %d = %d\n", n, i, count);
    }
    
}