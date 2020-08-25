//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include<stdio.h>

int main() 
{


    int m,n;

    printf("Enter number of rows: ");

    scanf("%d", &m);

    printf("Enter number of columns: ");
    scanf("%d", &n);
    
 
  int A[m][n], B[m][n], C[m][n];

   
    int i,j;




    

    printf("Enter first matrix elements: \n");

    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j<n; j++)
        {
           
            scanf("%d", &A[i][j]);
        }
        
    }

        printf("Enter second matrix elements: \n");
    
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j<n; j++)
        {
           
            scanf("%d", &B[i][j]);
        }
        
    }
   

    int rowsA, colA, rowsB, colB;
    

   


    if (rowsA!=rowsB || colA!=colB)
    {
        printf("invalid matrix dimension\n");
        return 0;
    }


    printf("\n");


   
  


    printf("Sum : \n");
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


    
    

 
 
 
return 0;
   
}