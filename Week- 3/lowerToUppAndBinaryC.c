#include<stdio.h>

int main()
{
    char ch= 0;
    printf("Enter a character : ");
    scanf("%c", &ch);

    if (ch>=97 && ch<=122)  
    {
        ch = ch - 32;
        printf("Uppercase: %c\n", ch);
    }else
    {
        printf("your input is not small character. ");
    }
    
    
   



}