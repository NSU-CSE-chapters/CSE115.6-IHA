#include<stdio.h>

int length(char*);
int main()
{
    char str[10], l;

    gets(str);

    l  = length(str);

    printf("%d\n", l);
}

int length(char *ptr)
{
    int count = 0;

    while (*ptr!='\0')
    {
        count++;
        ptr++;
    }
    return count;
}