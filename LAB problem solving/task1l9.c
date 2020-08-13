//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include <stdio.h>

int main()
{

    int num1, num2, rem = 0;
    printf("enter two positive integers: ");
    scanf("%d%d", &num1, &num2);

    while (num2 != 0)
    {
        rem = num1 % num2;
        num1 = num2;
        num2 = rem;
    }
    printf("GCD of the two integers is : %d\n", num1);

    return 0;
}