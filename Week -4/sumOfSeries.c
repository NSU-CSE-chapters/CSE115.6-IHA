/*Calculate the sum of the following series (! and " are
user inputs).
    x^0+x^1+x^2+..... +x^m 
*/

#include<stdio.h>

int main()
{
    int sum=1, term = 1, m,x;

    printf("Enter the value of X and m : ");
    scanf("%d %d", &x, &m);

    for (int  i = 1; i <= m; i++)
    {
        term = term * x;
        sum = sum + term;
    }

    printf("total sum = %d\n", sum);
    
}