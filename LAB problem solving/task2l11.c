//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include <stdio.h>


int factorial(int n);
int ncr(int n, int r);
int main()
{
    int n, r;
    int s;

    printf("enter the value of n and r\n");
    scanf("%d%d", &n, &r);

    s = ncr(n, r);

    printf("%d combination %d = %d\n", n, r, s); 

    return 0;
}

int ncr(int n, int r)
{
    int result;

    result = factorial(n) / (factorial(r) * factorial(n - r));

    return result;
}

int factorial(int n)
 {
   
   int result = 1;
 
   for (int i = 1; i <= n; i++)
      result = result*i;
 
   return result;
}