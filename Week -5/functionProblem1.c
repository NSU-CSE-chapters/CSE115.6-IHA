#include<stdio.h>
int func(int num);

int main()
{

    int num;
    num = func(435);
    printf("%d\n", num);
}


int func(int num)
{
    int count = 0;
    while (num)
    {
        count++;
        num>>=1;
    }
    return count;
    
}