
#include <stdio.h>

int main()
{

    double a, b, c;

    printf("Enter 3 numbers:\n");
    scanf("%lf%lf%lf", &a, &b, &c);

    // a is the largest
    if (a >= b && a >= c)
    {
        if (b >= c)
        {
           
            printf("\n%.2lf is the 2nd largest number\n", b);
        }
        else
        {
            printf("\n%.2lf is the 2nd largest number\n", c);
        }
    }
    else if (b >= a && b >= c)
    {
        if (a >= c)
        {
            printf("\n%.2lf is the 2nd largest number\n", a);
        }
        else
        {
            printf("\n\n%.2lf is the 2nd largest number\n", c);
        }
    }

    else if (c>=a &&c>=b)
    {
        if (a>=b)
        {
            printf("%.2lf is the 2nd largest number\n", a);
        }else
        {
            printf("%.2lf is the 2nd largest number\n", b);
        }
        
        
    }
    


}