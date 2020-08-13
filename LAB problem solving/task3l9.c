//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include <stdio.h>

int main()
{
    int n, rem, sum = 0;
    printf("enter N: ");
    scanf("%d", &n);

    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf(" %d\n", sum);

    return 0;
}