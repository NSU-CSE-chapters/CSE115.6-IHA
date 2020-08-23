//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include<stdio.h>

int main() 
{
 
 int arr[10], n=10,temp;

 printf("enter elements of the array : \n");

 for ( int i = 0; i < n; i++)
 {
     printf("arr[%d] : ", i);
     scanf("%d", &arr[i]);
 }


 for (int i = 0; i < n-1; i++)
 {
     for (int j=0;j<n-i-1;j++)
     {
         if (arr[j]<arr[j+1])
         {
             temp = arr[j];
             arr[j]= arr[j+1];
             arr[j+1] = temp;
         }
         
     }
     
 }


 printf("largest elements in the array is : %d\n", arr[0]);
 


 
return 0;
   
}