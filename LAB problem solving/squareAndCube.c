#include<stdio.h>


int  main()
{
    int number, square, cube;
    
    printf("Enter a number: ");
    scanf("%d", &number);

    square = number * number;
    cube = square * number;
 

 printf("Square is = %d\n",square);
 printf("Cube is = %d\n",cube);

}