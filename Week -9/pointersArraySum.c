#include <stdio.h>

int main()
{
    int arr[] = {1, 5, 4, 3, 2};
    int sum = 0, *p;

    for ( p = &arr[0]; p <= &arr[4]; p++) // p=a; p<=a+4;p++
    {
        sum += *p;
    }

    printf("%d \n ", sum);
}