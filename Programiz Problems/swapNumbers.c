#include<stdio.h>

int main()
{
    int firstNumber, secondNumber,temp;

    printf("Enter your first number: ");
    scanf("%d", &firstNumber);
    printf("Enter your second number: ");
    scanf("%d", &secondNumber);


    // temp = firstNumber;
    // firstNumber = secondNumber;
    // secondNumber = temp;


    // without using other var

    firstNumber = firstNumber+secondNumber;
    secondNumber = firstNumber - secondNumber;
    firstNumber = firstNumber- secondNumber;



    printf("after swapping the first number is : %d\n", firstNumber);
    printf("after swappin the second number is : %d\n", secondNumber);




}