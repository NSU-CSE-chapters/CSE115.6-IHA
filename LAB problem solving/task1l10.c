//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include<stdio.h>

int main() 
{
 
 int i, j, rows;
 printf("enter rows: ");
 scanf("%d", &rows);

 for(i=1;i<=rows;i++)
    {
        for(j=rows;j>=i;j--)
        {
            printf("%d ",j);
        }
         printf("\n");
    }
 
 
return 0;
   
}