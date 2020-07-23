#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter any three numbers: ");
    scanf("%d%d%d", &a,&b,&c);

    if (a>b && a>c)
    {
        printf("%d is greatest value ", a);
        
    }
    else if (b>c && b>a)
    {
         printf("%d is the greatest value", b);
 
    }
    else if(c>a && c>b)
    {
         printf("greatest value = %d", c);
         
    }


    if (a<b && a<c)
    {
        printf("\nthe smallest  value is %d\n", a);
    }
    else if (b<a && b<c)
    {
        printf("\nthe smallest value is %d\n", b);
    }

    else if (c<a &&c<b)
    {
        printf("\n the smallest value is %d\n", c);
    }
    
    
    
    
}