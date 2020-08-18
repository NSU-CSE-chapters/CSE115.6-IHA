//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include<stdio.h>

int gcd(int a, int b);
int main() 
{
 
 
    int num1,num2;
    printf("enter first and second number : ");
    scanf("%d%d", &num1, &num2);
    printf("gcd is : %d\n", gcd(num1, num2));

return 0;
   
}


int gcd(int a, int b)
{
        if (b!=0)
    {
        return gcd(b, a % b);
    }
   else
   {
       return a;
   }
   
    
}