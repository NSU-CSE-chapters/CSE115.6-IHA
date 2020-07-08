#include<stdio.h>

int main()
{
    char name[20];
    printf("enter your full name: ");
    // scanf("%s", &name);
    gets(name);

    printf("full name = %s", name);
}