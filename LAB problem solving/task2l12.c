//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include<stdio.h>

int sum_natural(int x);

int main() 
{
    int num, sumOfNatural;
    printf("enter N :");
    scanf("%d", &num);

    sumOfNatural = sum_natural(num);

    printf("sum of natural number is : %d \n", sumOfNatural);


 
 
return 0;
   
}

int sum_natural(int x)
{
    if (x!=0)
    {
        return x + sum_natural(x-1);
    }
    else
    {
        return x;
    }
    
    
}