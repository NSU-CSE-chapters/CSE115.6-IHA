//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include <stdio.h>

int factorial(int x);
int series(int a);

int main()
{

    int n;
    printf("enter N :");
    scanf("%d", &n);

    int s = series(n);
    printf("sum of series is = %d", s);

    return 0;
}

int factorial(int x)
{
    int fact = 1, i;
    for (i = 1; i <= x; i++)
        fact *= i;
    return fact;
}
int series(int a)
{
    int i, comb, sum = 0;
    for (i = 1; i <= a; i++)
    {
        comb = factorial(a) / (factorial(i) * factorial(a - i));
        sum += comb;
    }
    return sum;
}