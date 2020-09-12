#include<stdio.h>

int main()
{
    char str[50];
    FILE *fp;

    printf("enter file name: \n");
    gets(str);

    fp = fopen(str, "r");

    
}