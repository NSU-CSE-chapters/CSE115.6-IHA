#include<stdio.h>

int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);

    ch = ch+ 1;
    printf("The next char will be : %c\n", ch);
}