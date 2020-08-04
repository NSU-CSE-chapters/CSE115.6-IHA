
#include <stdio.h>

int main()
{
    int a, l, d=3;
    float n; 
    float sum;
    printf("enter first  and last");
    scanf("%d%d", &a,&l);
    // l=a+(n-1)*3;
    n = ((float)(l-a)/(float)d)+1;

    sum = ((float)n/2)*((float)a+l);
    
    printf("%.2f\ntotal sum = %.2f\n",n, sum);
    
    
}

