#include <stdio.h>

int main()

{
    int n;
    printf("Enter the range: ");
    scanf("%d", &n);

    for (int i = 5; i < n; i += 5)
    {
        printf("%d\n", i);
    }
}