//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include<stdio.h>

int main() 
{
 
 int n;
 scanf("%d", &n);

 int arr[n];

 printf("enter the elements: \n");

 for (int  i = 0; i < n; i++)
 {
     printf("arr[%d] : ", i);
     scanf("%d", &arr[i]);
 }

 printf("reverse the array is : \n");

 for (int  i = n-1; i >=0; i--)
 {
     printf(" %d ", arr[i]);
 }
 
 


 
return 0;
   
}