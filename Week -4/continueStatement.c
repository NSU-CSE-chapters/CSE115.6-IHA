#include<stdio.h>


int main()
{
    int number, sum=0,n;
    printf("enter the range: ");
    scanf("%d", &number);
    for (int  i = 1; i <= number; i++)
    {
        printf("enter the %d number: \n", i);
        scanf("%d", &n);

        if (n<0){
        
            continue;
        }
        
        sum = sum  + n;
        printf("%d is added\n", n);
    
        
        
    }
    printf("total = %d\n", sum);
    
}