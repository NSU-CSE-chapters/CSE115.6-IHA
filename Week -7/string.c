#include<stdio.h>

int main()
{
    char string[]= "I love Bangladesh";
    int count = 0;

    for (int  i = 0; string[i]!='\0'; i++)
    {
        count++;
    }

            printf("%s sentence contains %d letters\n", string, count);


    return 0;
    
}