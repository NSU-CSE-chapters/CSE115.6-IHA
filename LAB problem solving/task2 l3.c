 //Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06


#include<stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a=b;
    b= temp;

    printf("After swapping, a is %d and b is %d\n", a,b);

}