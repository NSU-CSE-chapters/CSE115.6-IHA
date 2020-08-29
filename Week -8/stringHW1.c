#include<stdio.h>

int main()
{
    char str[20];

    printf("enter the string: \n");
    gets(str);

    int i, vowels=0, cons = 0;


    for ( i = 0; str[i]!='\0'; i++)
    {
        if (str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122)
        {
            if ( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
            str[i] == 'U')
            {
                vowels++;
            }else
            {
                cons++;
            }
            
            
        }
        
    }

    printf("total vowels = %d \n", vowels);
    printf("total consonants = %d\n", cons);
    
}