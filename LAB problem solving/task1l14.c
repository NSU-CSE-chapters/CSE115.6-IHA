//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include<stdio.h>

int main() 
{
 
 int arr[3][3];

 printf("enter the elements of the array : \n");

 for (int  i = 0; i <3; i++)
 {
     for (int j = 0; j < 3; j++)
     {
         printf("arr[%d][%d] : ", i,j);
         scanf("%d", &arr[i][j]);
     }
     
 }


 int position,n;

  printf("enter the search number : ");
    scanf("%d", &n);

    for (int i = 0; i <3; i++)
    {
        for(int j=0;j<3;j++){
        if (n==arr[i][j])
        {
            position = i+1;
            break;
        }
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