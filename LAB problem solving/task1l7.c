 //Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include<stdio.h>

int main()
{

    char operator;
    int a, b;
    printf("Enter the operator: ");
    scanf("%c", &operator);
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    switch (operator)
    {
    case '+':
        printf("Result: %d\n", a+b);
        break;

    case '-':
        printf("Result: %d\n", a-b);
        break;

    case '*':
        printf("Result: %d\n", a*b);
        break;

    case '/':
        printf("Result: %d\n", a/b);
        break;

    default:
        printf("Invalid operator\n");
        break;
    }


    return 0;

}