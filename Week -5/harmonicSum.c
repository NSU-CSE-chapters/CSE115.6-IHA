#include<stdio.h>
double harmonicSum(int );

int main()
{
    int num;
    float i=0,sum=0;

    printf("Enter the value of series :- ");
    scanf("%d",&num);

    printf("%.2lf\n", (double) harmonicSum(num));


}

double harmonicSum(int n)
{
    float sum =0;
     for(int i=1;i<=n;i++)
    {
        sum = sum + 1/i;

    }
        return sum;
}
