#include<stdio.h>


int main()
{
    float celcius, fahrenheit;

    printf("Enter the degree of celcius : ");

    scanf("%f", &celcius);

    fahrenheit = ((9*celcius)/5)+32;

    printf("Fahrenheit = %.2f degrees\n", fahrenheit );
}