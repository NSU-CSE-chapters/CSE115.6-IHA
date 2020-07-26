#include<stdio.h>

int main()
{
    char ch, a;
    printf("Enter a character: ");
    scanf("%c", &ch);
    a= ch<<1;
    
    printf("Result: %c", a);
}