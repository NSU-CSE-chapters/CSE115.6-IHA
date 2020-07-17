#include<stdio.h>

int main()
{
    double height, width, area, perimeter;

    printf("Enter the height and width of rectangle : ");
    scanf("%lf %lf", &height, &width);

    area = height* width;
    perimeter = 2 * (height+width);

    printf("Area of the rectangle is : %.2lf\n", area);
    printf("Perimeter of the rectangle is : %.2lf\n", perimeter);
}