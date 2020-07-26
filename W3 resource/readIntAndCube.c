#include<stdio.h>

int main()
{
    int n, cube;
    scanf("%d", &n);
    printf("Input number of terms : %d\n", n);

    
    for (int i = 1; i <= n; i++)
    {
        cube = i*i*i;
        
        printf("Number is %d and the cube is %d\n ", i, cube);
    }
    
}