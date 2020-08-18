#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char string1[20];
    char string2[20];

    printf("enter first string: ");
    gets(string1);

    printf("enter second string: ");
    scanf("%s", string2);

    puts(string1);
    printf("second string is = %s\n", string2);
}