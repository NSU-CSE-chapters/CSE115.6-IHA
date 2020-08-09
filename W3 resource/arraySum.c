#include<stdio.h>
#define N 100
int main() 
{
 int arr[N];
 int n, sum = 0; 
 scanf("%d", &n);

 for (int i = 0; i <n; i++)
 {
     printf("enter arr[%d] elements : \n", i);
     scanf("%d", &arr[i]);
 }

 for (int i = 0; i <n; i++)
 {
     sum = sum + arr[i];
 }
 printf("sum is %d\n", sum);
 
 
 
return 0;
   
}