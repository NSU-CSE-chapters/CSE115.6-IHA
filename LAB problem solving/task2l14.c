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

    printf("Enter matrix elements: \n");


    


    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j<n; j++)
        {
           
            scanf("%d", &A[i][j]);
        }
        
    }

    
    printf("\n");

    int colSum, rows, cols,sum=0;
    printf("Enter which column to find sum of: ");

    scanf("%d", &colSum);

     for (i = 1; i <= colSum; ++i) { 
        for (j = 1; j <= colSum; ++j) { 
  
            
            sum = sum + A[j][i]; 
        }
     } 

    printf("Sum of column %d:", colSum, sum);
 
return 0;
   
}