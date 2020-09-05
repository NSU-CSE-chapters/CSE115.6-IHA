#include<stdio.h>

struct feetInch
{
    int feet;
    double inch; 
};

typedef struct feetInch fi;

int main()
{

    fi c1,c2, result;

    printf("enter 1st distance;\n");

    printf("enter feet: ");
    scanf("%d", &c1.feet);

    printf("enter inch: ");
    scanf("%lf", &c1.inch);

    printf("\n");

    printf("enter 2nd distance;\n");

    printf("enter feet: ");
    scanf("%d", &c2.feet);

    printf("enter inch: ");
    scanf("%lf", &c2.inch);

    result.feet = c1.feet+ c2.feet;
    result.inch = c1.inch+c2.inch;
    printf("Sum of distances = %d'-%lf\n", result.feet, result.inch );


}