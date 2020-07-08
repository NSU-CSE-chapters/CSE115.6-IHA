#include<stdio.h>

int main()
{
    float height, width, length, volume;

    printf("Enter the height: \n");
    scanf("%f", &height);
    printf("Enter the width: \n");
    scanf("%f", &width);
    printf("Enter the length: \n");
    scanf("%f", &length);

    volume = height*width*length;
    printf("The volume of the rectangle is = %.2f\n", volume);
}