#include <stdio.h>

int main()
{
    int n, term = 1, sum = 0;
    scanf("%d", &n);
    
    for(int i= 1; i<=n; i++){
        sum += term;
        printf("%d \t", term);
        term= term * 10 +1;
    }
    printf("total = %d\n", sum);
}
