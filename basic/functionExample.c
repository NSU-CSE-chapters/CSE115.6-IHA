#include<stdio.h>

int areaOfRect(int height, int width);

int main()
{
    int l=5, w=10;
    int area = areaOfRect(l,w);
    printf("area = %d\n", area);
}


int areaOfRect(int height, int width)
{

    int area = height * width;
    return area;
}