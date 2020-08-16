#include<stdio.h>

int main()
{
    int arr[5][5]={{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1}, {15,7,3,2,9},{6,14,2,6,0}};

    int i, j, sum=0, n=5;

    printf("Row sum : ");
    for ( i = 0; i <n ; i++)
    {
        for (j=0;j<n; j++)
        {
            sum = sum + arr[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }

    printf("\n");

    printf("Column sum : ");
    for ( j= 0; j <n ; j++)
    {
        for (i=0;i<n; i++)
        {
            sum = sum + arr[i][j];
        }
        printf("%d ", sum);
        sum = 0;
    }

    
}