#include <stdio.h>
#define N 10
int main()
{

    int A[N][N], B[N][N], C[N][N];

    int rowsA, colA, rowsB, colB;
    int i,j;

    printf("enter the number of rows in A: ");
    scanf("%d", &rowsA);

    printf("enter the number of cols in A: ");
    scanf("%d", &colA);

    printf("enter the number of rows in B: ");
    scanf("%d", &rowsB);

    printf("enter the number of cols in B: ");
    scanf("%d", &colB);


    if (rowsA!=rowsB || colA!=colB)
    {
        printf("invalid matrix dimension\n");
        return 0;
    }


    for ( i = 0; i < rowsA; i++)
    {
        for ( j = 0; j<colA; j++)
        {
            printf("A[%d][%d] : ", i,j );
            scanf("%d", &A[i][j]);
        }
        
    }

    for ( i = 0; i < rowsB; i++)
    {
        for ( j = 0; j<colB; j++)
        {
            printf("B[%d][%d] : ", i,j );
            scanf("%d", &B[i][j]);
        }
        
    }

    printf("\n");


     for ( i = 0; i < rowsB; i++)
    {
        for ( j = 0; j<colB; j++)
        {
            printf("B[%d][%d] : ", i,j );
            scanf("%d", &B[i][j]);
        }
        
    }
    printf("\n");


    printf("result : \n");
     for ( i = 0; i < rowsA; i++)
    {
        for ( j = 0; j<colA; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            
        }
        
    }

     for ( i = 0; i < rowsA; i++)
    {
        for ( j = 0; j<colA; j++)
        {
            printf("%10d ", C[i][j] );
            
        }
        printf("\n");
        
    }


    
    
}