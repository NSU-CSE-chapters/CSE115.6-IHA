#include<stdio.h>

void swap(int *a, int *b);


int main()
{
    int x=100, y=200;

    printf("before swapping - %d  %d \n", x,y);


    swap(&x,&y);

    printf("After swapping - %d %d ", x,y);
}

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b= temp;
}