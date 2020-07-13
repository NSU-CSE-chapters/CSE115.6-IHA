#include<stdio.h>

int main()
{


    int intSize;
    float floatSize;
    double doubleSize;
    char charSize;

     long longSize;
     long double lDoubleSize;


    printf("The size of int : %ld bytes\n", sizeof(intSize));
    printf("The size of float : %ld bytes\n", sizeof(floatSize));
    printf("The size of double : %ld bytes\n", sizeof(doubleSize));
    printf("The size of char : %ld bytes\n\n", sizeof(charSize));
    printf("the size of long int : %zu bytes\n",sizeof(longSize) );
    printf("the size of long double : %zu bytes\n",sizeof(lDoubleSize) );


}