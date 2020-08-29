#include<stdio.h>


int main()
{
    char str[50];

    int word = 1;

    printf("enter a string: \n");
    gets(str);

    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i]==' ')
        {
            word++;
        }
        
    }

    printf("total words %d\n", word);
    
}