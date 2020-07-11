#include<stdio.h>

int main()
{

    int n, count = 0;

    printf("enter any positive number : ");
    scanf("%d", &n);

    for (int i =2 ; i < n; i++)
    {
        if (n%i==0)
        {
            count++;
        break;
        }
    }

    if (count==0)   
    {
        printf("Prime Number\n");  
    }
    else
    {
        printf("not a prime number\n");
    }
    
    
    
}