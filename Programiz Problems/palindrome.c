#include<stdio.h>
#include<string.h>
int main()
{
    char str[50], swap;
    int length;
    printf("Enter any number of string :\n");
    gets(str);

    length = strlen(str);

    for (int  i = 0; i < length/2; i++)
    {
        swap = str[i];
        str[i] = str[length-1-i];
        str[length - 1- i] = swap;
    }

    if (str==swap)
    {
        printf("palindrome number");
    }
    else
    {
        printf("not a palindrome number");
    }
    
    
     
}