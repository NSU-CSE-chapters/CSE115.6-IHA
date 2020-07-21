 //Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include<stdio.h>

int main()
{
    int num1, num2, num3;
    float avg;
    printf("Insert first number: ");
    scanf("%d", &num1);

    printf("Insert second number: ");
    scanf("%d", &num2);

    printf("Insert third number: ");
    scanf("%d", &num3);

    avg =  ((num1 + num2+ num3)/3.0);

    printf("The average is: %.1f\n", (float)avg);
}