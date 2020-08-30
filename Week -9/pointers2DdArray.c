#include<stdio.h>


int main()
{
    int r,c;
    scanf("%d%d", &r,&c);

    int arr[r][c], *p;

    for (p = &arr[0][0]; p<=&arr[r-1][c-1];p++)
    {
        scanf("%d", p);
    }


     for (p = &arr[0][0]; p<=&arr[r-1][c-1];p++)
    {
        printf("\n %d ", *p);
    }
    
    
    
}