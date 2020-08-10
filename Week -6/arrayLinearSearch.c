#include<stdio.h>

int main()
{
    int arr[]= {15,30,85,75,15,52,25};
    int i,n;
    int position = -1;

    printf("enter the search number : ");
    scanf("%d", &n);

    for ( i = 0; i <7; i++)
    {
        if (n==arr[i])
        {
            position = i+1;
            break;
        }
        
    }

    if (position==-1)
    {
        printf("not found\n");
    }else
    {
        printf("the position of %d is %d\n", n, position);
    }
    
    
     
}