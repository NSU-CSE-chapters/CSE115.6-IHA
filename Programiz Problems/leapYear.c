#include<stdio.h>

int main()

{
    int year;
    printf("Enter any year: ");
    scanf("%d", &year);

    if (year%400==0)
    {
        printf("It's a leap year.\n ");
    }else if (year%100!=0 && year%4==0)
    {
        printf("Its a leap year\n");
    }else
    {
        printf("Its not a leap year\n");
    }
    
    
    
}