#include<stdio.h>

int Combinations(int n, int r);

int main()
{
    int n=5, r=2;
    printf("%d\n", Combinations(n,r));
}

int Combinations(int n, int r)
{
if(r == 1) // base case 1
return n;
else if (n == r) // base case 2
return 1;
else //general case
return(Combinations(n-1, r-1) + Combinations(n-1, r));
}