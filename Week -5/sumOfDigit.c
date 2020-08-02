#include<stdio.h>

int sumOfDigits(int x);

int main()
{
    int digit;

    printf("enter digit : ");
    scanf("%d", &digit);

    printf("total sum = %d\n", sumOfDigits(digit));
}


int sumOfDigits(int x)
{
    int sum = 0, rem;
    while (x!=0)

    
    {
        rem = x%10;
        sum = sum+rem;
        x=x/10;   
    }
    return sum;
    
}