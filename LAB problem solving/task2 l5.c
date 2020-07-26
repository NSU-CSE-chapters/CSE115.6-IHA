#include<stdio.h>
#include<math.h>


int main()
{
    int  a,x,y, calc, calc2;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    
    calc = pow(2,x)*a/pow(2,y);



    printf("Result: %d\n", calc);

    return 0;

}
