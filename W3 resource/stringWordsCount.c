#include<string.h>

#include<stdio.h>


int main()
{
    char str[100];
    int word = 1;

    fgets(str, sizeof str, stdin);

    for (int  i = 0; str[i]!='\0'; i++)
    {
        if (str[i]==' ' || str[i]=='\n'|| str[i]== '\t')
        {
            word++;
        }
        
    }

    printf("total number of word is = %d\n", word-1);
    
}