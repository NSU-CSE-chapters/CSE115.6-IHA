#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];

    // gets(str);

    fgets(str, sizeof str, stdin);

    printf("%s\n", str);

    return 0;
}