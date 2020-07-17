#include<stdio.h>

int main()
{
    int a,b,c,d;
    a= 6;
    b=3;

    c= a++;
    d=--b;
    printf("%d %d\n", a,b);
    printf("%d %d\n", c,d);

}