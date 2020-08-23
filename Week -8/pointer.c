#include<stdio.h>

int main()
{
    int a=10;
    int *ptr;
    ptr = &a;

    *ptr = 20;  // dereference operator

    printf("%d\n", *ptr);

}