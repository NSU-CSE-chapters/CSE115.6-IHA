#include<stdio.h>

int main()
{
    int number1, number2, reminder,gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);

    while (number2!=0)
    {
        reminder = number1%number2;
        number1 = number2;
        number2 = reminder;
    }
    gcd = number1;
    
    printf("GCD : %d\n", gcd);
    
}