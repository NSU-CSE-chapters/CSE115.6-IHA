#include<stdio.h>

int factorial(int);
int main()
{
    int n= 4;
    printf("%d\n", factorial(n));
}

int factorial(int n){
    int retVal;
    if (n==0)
    {
        retVal=1;
    }else
    {
        retVal = n * factorial(n-1);
    }
    return retVal;
    
    
    
}