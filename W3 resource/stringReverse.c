#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    int length;

    gets(str);

    length = strlen(str);

    for (int i =length; i>=0; i--)
    {
        printf("%c ", str[i]);
    }
    
}