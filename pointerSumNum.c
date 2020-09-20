#include<stdio.h>


int main()
{
    int a,b,c, *p1, *p2, *p3;

    scanf("%d%d", &a,&b);

    p1 = &a;
    p2 = &b;
    p3 = &c;

    *p3 = (*p1)+(*p2);

    printf("sum = %d\n",c );
}