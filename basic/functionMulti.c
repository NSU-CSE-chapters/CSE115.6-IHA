#include<stdio.h>
void printline();
int main(){

    printline();
    printf("this illustrates the use of C functions\n");
    printline();
}

void printline()
{
    for (int i = 1; i < 40; i++)
    {
        printf("-");
    }
    printf("\n");
    
}