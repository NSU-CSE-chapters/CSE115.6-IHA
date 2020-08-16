//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include<stdio.h>
int perfectNumber(int n);
int main() 
{
    int n, s;
    printf("enter a positive integer : ");
    scanf("%d", &n);

    s = perfectNumber(n);
     if (s==n)
    {
        printf("%d perfect number\n", n);
    }else
    {
        printf("%d not a perfect number\n", n);
    }
   
 
 
return 0;
   
}


int perfectNumber(int n)
{
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            sum = sum+i;
        }
    }
    
        return sum;

   
    
    
    
}