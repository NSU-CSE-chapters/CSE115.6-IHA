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
    

    int A[m][n],  T[m][n];


   
   int i,j;

    
    printf("Enter matrix elements:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
          
            scanf("%d", &A[i][j]);
        }

    

   
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            T[j][i] = A[i][j];
        }

    
    printf("Transpose:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++) {
            printf("%d  ", T[i][j]);
            if (j == n - 1)
                printf("\n");
        }
 
return 0;
   
}