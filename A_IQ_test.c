#include <stdio.h>

int main()
{
    
    int n1, n2, rem, gcd, lcm;
    int n, t;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d%d", &n1, &n2);

        int a = n1, b= n2;

        while (n2!=0)
        {
            rem= n1%n2;
             n1 = n2;
             n2 = rem;
        }

        gcd = n1;
        lcm = (a*b)/gcd;

        printf("%d %d\n", gcd,lcm);
        

        
    }
}