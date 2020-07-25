#include<stdio.h>



int main()
{
    float radius, area, perimeter,pi = 3.1416;
    printf("enter the radius of a circle: ");
    scanf("%f", &radius);

    area = pi * radius * radius;
    perimeter = 2 * pi * radius;
    
    printf("area of the circle is :%.2f\n", area);
    printf("perimeter of the circle is :%.2f\n", perimeter);
}