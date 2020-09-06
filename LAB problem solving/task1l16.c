//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06


#include <stdio.h>
void calcCircleInfo(int radius, int *area, int *circumference);

int main()
{
    int radius, area, circumference;

    printf("enter radius: ");
    scanf("%d", &radius);

    calcCircleInfo(radius, &area, &circumference);
    printf("area= %d\n", area);
    printf("circumference = %d\n", circumference);
    return 0;
}

void calcCircleInfo(int radius, int *area, int *circumference)
{
    *area = 3.14 * radius * radius;
    *circumference = 2 * 3.14 * radius;
}