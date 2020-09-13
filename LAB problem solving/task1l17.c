//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06


#include<stdio.h>
#include<stdlib.h>
int* getFibonacciSequence(int n);
int main()
{
        int n;
        scanf("%d", &n);
        int *ptr = (int*) malloc(n*sizeof(int));

        int arr[n];
        printf("%d ", getFibonacciSequence(n));
        return 0;
}

int* getFibonacciSequence(int n)
{
    int first = 0, second=1, next;
     for (int i = 1; i <= n; i++) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }
}