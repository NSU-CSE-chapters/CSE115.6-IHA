#include<stdio.h>
#define N 10

int main() 
{
    
    int arr[N];

    for (int i = 0; i <N; i++)
    {
        printf("enter the arr[%d] elements: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n");
    printf("elements in array are :\n");

    for (int i = 0; i <N; i++)
    {
        printf("%d ", arr[i]);
    }
    
    

 
 
 
return 0;
   
}