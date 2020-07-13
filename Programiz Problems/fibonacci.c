#include<stdio.h>

int main()

{

    int n;
    int first = 0, second = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", first);
       int fibo = first+second;
       first= second;
       second = fibo;
        

    }
          
}