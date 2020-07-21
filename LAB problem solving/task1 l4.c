//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include<stdio.h>

int main()
{
    float celcius, fahrenheit;

    printf("Enter a temperature in celcius: ");
    scanf("%f", &celcius);

    fahrenheit = ( celcius * 9)/5 +32;

    printf("Temperature in farenheit is : %.2f\n", fahrenheit); 
}