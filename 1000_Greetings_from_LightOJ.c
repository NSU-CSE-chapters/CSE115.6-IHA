#include <stdio.h>

int main()
{
    int t;
    int a, b, sum;
    scanf("%d", &t);

    if (t <= 125)
    {

        for (int i = 1; i <= t; i++)
        {

            scanf("%d%d", &a, &b);
            sum = a + b;

            printf("Case %d: %d\n", i, sum);
        }
    }
    return 0;
}