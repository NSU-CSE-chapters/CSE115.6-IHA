#include<stdio.h>

int main()
{
    double number;
    printf("Enter any number: ");
    scanf("%lf", &number);

    if (number<0)
    {
        printf("Negetive number\n");
    // }else if (number==0)
    // {
    //     printf("positive numebr\n");
    }
    else
    {
        printf("Positive number\n");
    }
    
    
    
}