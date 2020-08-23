//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include<stdio.h>

int main() 
{
 
 int arr[10];

 int i,n=10, value;
 int position = -1;

 

 printf("enter the elements of the array: \n");

 for ( i = 0; i < n; i++)
 {
     printf("arr[%d] : ", i);
     scanf("%d", &arr[i]);
 }


 printf("enter the value you want :");
 scanf("%d",&value);


     for ( i = 0; i <n; i++)
    {
        if (value==arr[i])
        {
            position = i+1;
            break;
        }
        
    }

    if (position==-1)
    {
        printf("Not found\n");
    }else
    {
        printf("Found\n");
    }
    
    
     



 
 
return 0;
   
}