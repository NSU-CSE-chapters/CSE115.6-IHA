 //Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06


#include<stdio.h>

int main()
{
    int num1, num2,sum, product,difference,quotient,remainder;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum= num1+num2;
    product= num1 * num2;
    difference = num1 - num2;
    quotient = num1 / num2;
    remainder = num1 % num2;



    printf("Sum = %d\n", sum); 
    printf("Product = %d\n", product); 
    printf("Difference = %d\n", difference); 
    printf("Quotient = %d\n", quotient); 
    printf("Reminder = %d\n", remainder); 

}