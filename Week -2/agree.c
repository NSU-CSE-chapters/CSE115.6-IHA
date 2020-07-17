#include<stdio.h>

int main()
{
    char c;

    printf("Are you agree? ");

    scanf ("%c", &c);

    if (c=='Y' || c=='y')   
    {
        printf("agreed !\n");
    }
    else if (c=='N' || c=='n')
    {
        printf("not agreed\n");
    }
    
    
}