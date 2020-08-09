//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include<stdio.h>

int main()
{

    int i, n;
    double term, sum= 0;
    printf("enter the range of n: ");
    scanf("%d", &n);
    for (i = 1; i <=n; i++)
    {
        term = 1.0 / (i*i);
        sum =  sum + term;
    }


    printf("sum of the following series is %.2lf\n", sum);


    return 0;

}