#include<stdio.h>

int main()
{
    char str[50];
    int alph,digit, splch, i;
    alph=digit=splch=0;

    fgets(str, sizeof str, stdin);

    for ( i = 0; str[i]!='\0'; i++)
    {
        if (str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {
            alph++;
        }else if (str[i]>='0' && str[i]<='9')
        {
            digit++;
        }else
        {
            splch++;
        }

    }

    printf("Number of Alphabets in the string is: %d\n ", alph);
    printf("Number of Digits in the string is : %d\n", digit);
    printf("Number of Special characters in the string is : %d\n", splch);    

}