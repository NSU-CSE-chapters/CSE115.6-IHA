#include<stdio.h>

int main()
{



int x, count, even;
x = 0;
even = 0;
scanf("%d", &count);

while(x < count)

{
    printf("%d",even);
 even = even+2;
x = x+1;
}

}