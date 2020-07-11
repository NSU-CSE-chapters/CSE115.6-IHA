#include<stdio.h>

int main()
{
    int current_number = 1;
    int sum;

    while (current_number<=10)
    {
        sum += current_number;
        current_number++;
    }
    printf("Total sum = %d\n", sum);
    
}