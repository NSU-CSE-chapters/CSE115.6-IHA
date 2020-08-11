#include<stdio.h>
int sum(int);

int main()
{
    int n, s;
    scanf("%d", &n);
    s = sum(n);
    printf("sum = %d\n", s);
}


int sum(int n)
{
    if (n==1)
        return 1;
    else
        return n + sum(n-1);

}