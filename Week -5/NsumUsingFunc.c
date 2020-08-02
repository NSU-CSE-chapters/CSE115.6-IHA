#include<stdio.h>
int sum(int);
int main()
{
    int num; 
    printf("enter N :");
    scanf("%d", &num);  
    // int arg = sum(num);
    printf("total = %d\n", sum(num));
}

int sum(int n)
{

    int i, sum = 0;
    for ( i = 1; i <=n; i++)
    {
        sum = sum + i;
    }
    return sum;
    

}

