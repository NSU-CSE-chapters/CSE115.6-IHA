#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[30];
    
    printf("enter a string: \n");

    gets(str);

    for (int i = 0;str[i]!='\0'; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
             str[i] = str[i] -32;
        }else if(str[i]>='A' && str[i]<='Z')
        {
          str[i]=  str[i] + 32;
        }
        
        
    }

    printf("%s \n", str);
    
}