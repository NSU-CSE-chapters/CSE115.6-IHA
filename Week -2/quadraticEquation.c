#include<stdio.h>
#include<math.h>
int main()

{
    double a,b,c,discriment, root1, root2, realPart, imagPart;

    printf("Enter the value of a, b and c: \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriment = sqrt((b*b)- 4*a*c);

    if (discriment > 0)
    {
        root1 = (-b+discriment)/2*a;
        root2 = (-b-discriment)/2*a;

        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }
    else if (discriment == 0)
    {
        root1 = root2 = -b/2*a;

        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }
    else
    {
        realPart = -b/2*a;
        imagPart = -discriment / (2*a);

        printf("root1= %.2lf+%.2lf and root2= %.2lf-%.2lfi", realPart, imagPart, realPart, imagPart);
    }
    
    
    
}