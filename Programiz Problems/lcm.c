#include<stdio.h>

int main()
{
    int number1, number2, gcd, lcm,reminder;

    printf("Enter two numbers : ");
    scanf("%d %d", &number1, &number2);

    while (number1!=0)
    {
        reminder = number1 % number2;
        number1 = number2;
        number2 = reminder;
    }
    gcd = number1;
    lcm = (number1*number2)/gcd;

    printf("LCM: %d", lcm);
    

}


