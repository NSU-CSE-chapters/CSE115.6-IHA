#include<stdio.h>

int main()
{
    double height, base, area; 

    printf("Enter the height and base of Triangle: ");
    scanf("%lf %lf", &height, &base);

    area = .5 * base * height;

    printf("the area of the triangle is : %.2lf\n", area);
}