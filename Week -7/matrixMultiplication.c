#include<stdio.h>

int main()
{
    int A[10][10], B[10][10], C[10][10],RESULT[10][10], rowsA, colsA, rowsB, colsB;

    int i, j,k, sum=0;

    printf("enter the rows and colums in A : ");
    scanf("%d%d", &rowsA, &colsA);

    printf("enter the rows and colums in B :");
    scanf("%d%d", &rowsB, &colsB);

    if (colsA!=rowsB)
    {
        printf("invalid matrix dimensions\n");
        return 0;
    }
    

    for ( i = 0; i < rowsA; i++)
    {
        for (j= 0; j<colsA; j++)
        {
            printf("A[%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
        
    }

    for ( i = 0; i < rowsB; i++)
    {
        for (j= 0; j<colsB; j++)
        {
            printf("B[%d][%d] : ", i, j);
            scanf("%d", &B[i][j]);
        }
        
    }

    printf("MUlTIPLICATION   of A and  B is : \n");
    for ( i = 0; i < rowsA; i++)
    {
        for ( j=0; j<colsB; j++)
        {
            // sum =0;
            for (k=0; k<rowsB;k++)
            {
                sum += A[i][k] * B[k][j];
            }
            RESULT[i][j]=sum;
            sum = 0;
            
            
        }
        
    }

    for ( i = 0; i <rowsA; i++)
    {
        for (j=0; j<colsB;j++)
        {
            printf("%10d ", RESULT[i][j]);
        }

        printf("\n");
        
    }
    
    
    

}