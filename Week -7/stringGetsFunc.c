#include<stdio.h>
#include<string.h>
int main()
{
    char string1[20];
    char string2[20];


    printf("enter first string: ");
    gets(string1);

    printf("enter second string: ");
    scanf("%s", string2);


    printf("first string is = %s\n", string1);
    printf("second string is = %s\n", string2);
}