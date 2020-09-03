#include<stdio.h>

struct complexNum
{
    int real;
    int imaginary;

};

typedef struct complexNum Complex;

int main()
{

    Complex c1,c2,c3;

    printf("enter the first number: \n");
    scanf("%d%d", &c1.real, &c1.imaginary);

    printf("enter the second number : \n");
    scanf("%d%d", &c2.real, &c2.imaginary);

    c3.real = c1.real + c2.real;
    c3.imaginary = c1.imaginary + c2.imaginary;

    printf("Sum = %d+%di\n", c3.real, c3.imaginary);

    return 0;

}