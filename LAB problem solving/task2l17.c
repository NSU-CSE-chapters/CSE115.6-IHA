//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include <stdio.h>
#include <stdlib.h>
getFibonacciSequence(int n, int arr[]);

int main()
{
    int n;

    scanf("%d", &n);
    int arr[n];
    int *ptr = (int *)malloc(n * sizeof(int));

    getFibonacciSequence(n, arr);
}

getFibonacciSequence(int n, int arr[])
{
    int fibo[n];

    fibo[0] = 0;
    fibo[1] = 1;

    for (int i = 2; i <= n; i++)
        fibo[i] = fibo[i - 1] + fibo[i - 2];

    for (int i = 0; i <= n; i++)
        printf("%d ", fibo[i]);
}