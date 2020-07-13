#include<stdio.h>

int main()
{
    int number, facotrial=1;
    printf("enter a positive number: \n");
    scanf("%d", &number);

    if (number<0)
    {
        printf("Factorial of negetive number doesn't exixt");
    }else
    {
        for (int i = 1; i <= number; i++)
    {
        facotrial = facotrial*i;
        
    }
    printf("%d\n", facotrial);
    }
    
    

    

    
    
}