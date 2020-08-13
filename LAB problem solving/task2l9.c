//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include <stdio.h>

int main()
{
    int n, fibo, first = 0, second = 1;
    printf("enter N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf(" %d ", first);
        int fibo = first + second;
        first = second;
        second = fibo;
    }

    return 0;
}