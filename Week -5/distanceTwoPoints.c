#include<stdio.h>
#include<math.h>

double distance(double, double,double,double);
int main()
{
    double dis = distance(9,3,7,2);
    printf("distance = %.2lf\n", dis); 
    return 0;
}

double distance(double x1, double y1, double x2, double y2)
{
    double dist =  sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return dist;
}