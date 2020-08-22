#include<stdio.h>
#include <stdlib.h>


int main()
{
    char str[50];
    printf("enter input string: ");
    gets(str);
    int count =0;

    for (int  i = 0; str[i]!='\0'; i++)
    {
        count++;
    }

    printf("length of the string: %d\n", count);


    return 0;

    


}