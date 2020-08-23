//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include<stdio.h>

int main() 
{
 
 int A[5];
 int B[5];
 int i,j,n=5;

 printf("enter input A : \n");

 for (int  i = 0; i < n; i++)
 {
     printf(" A[%d] : ", i);
     scanf("%d", &A[i]);
 }

  printf("enter input B : \n");

 for (int  i = 0; i < n; i++)
 {
     printf(" B[%d] : ", i);
     scanf("%d", &B[i]);
 }



 if (A[i]==B[i])
 {
     printf("Identical\n");
 }else
 {
     printf("Not identical\n");
 }
 
 
 
return 0;
   
}