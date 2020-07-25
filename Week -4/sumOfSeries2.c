//Calculate the sum of the following series (! is user input).

//  1/1- 1/2+1/3-...... +- 1/n;



#include<stdio.h>


int main()
{
    int n;
    double term, sum= 0;

    printf("enter the number of n: ");
    scanf("%d", &n);

    for (int i = 1; i <=n; i++)
    {
        term  = 1.0 / i;

        if (i%2==0)
        {
            sum = sum- term;
        }else
        {
            sum = sum+term;
        }
        

    }

    printf("total sum = %.2lf\n", sum);
    
}


