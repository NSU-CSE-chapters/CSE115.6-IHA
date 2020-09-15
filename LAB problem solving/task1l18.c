//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include <stdio.h>
 struct distance
    {
        float a;
        float b;
    };
int main()
{
   

    struct distance x, y,res;

    printf("enter x points\n");
    scanf("%f%f", &x.a, &x.b);

    printf("enter y points\n");
    scanf("%f%f", &y.a, &y.b);

    res.a = x.a-x.b;
    res.b = y.a - y.b;

    printf("M.D = %f\n", res.a+res.b);
}