#include<stdio.h>

int factorial(int);
int main()
{
    int n,r;
    int result;
    printf("Enter the value of n and r: ");
    scanf("%d%d", &n, &r);

    result = factorial(n)/ (factorial(r)*factorial(n-r));
    printf("%d combination %d is = %d\n", n,r,result);
    return 0;


}


int factorial(int x)
{
    int  i, fact=1;

    for ( i = 1; i <=x; i++)
    {
        fact = fact * i;
    }

    return fact;
    
}