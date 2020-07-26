#include<stdio.h>

int main()
{
    int sum = 0, n;
    float avg;

    for (int  i = 1; i <= 10; i++)
    {
        printf("Number- %d\n", i);
        scanf("%d", &n);

        sum = sum + n;
    }
    avg = sum / 10.0;

    printf("The sum of %d no is : %d\nThe Average is :%f\n", 10, sum, avg );
    
}