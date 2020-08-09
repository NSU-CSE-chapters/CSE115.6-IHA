//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include<stdio.h>

int main() 
{
 
 int n, sum =0, i=0;
 printf("How many number you want? : ");
 scanf("%d", &n);

 while (i<n)
 {
     scanf("%d", &n);
     sum = sum + n;
     i++;

 }
 printf("sum = %d\n", sum);
 
 
return 0;
   
}