//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include<stdio.h>

int main() 
{
 int n,i=1, fact=1;
 printf("enter N : ");
 scanf("%d", &n);

    do
    {
        fact = fact * i;
        i++;
    } while (i<=n);
    printf("factorial of %d is %d\n", n, fact);


 
 
return 0;
   
}