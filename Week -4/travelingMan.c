#include<stdio.h>

int main()
{
    float x=0, y=0;
    char dir;
    float mile;
    while (1)
    {
        printf("Enter input as N,S,E,W : ");
        scanf("%c", &dir);
        if (dir=='0')
        {
            break;
        }

        if (dir!='N' && dir!='S' && dir!='E' && dir!='W')    
        {
           printf("Invalid directions, reenter");
           continue;
        }

        printf("Input the mile in %c  directions ", dir);
        scanf("%f", &mile);

        if (dir=='N')
        {
            y+=mile;
        }else if (dir=='S')
        {
            y-=mile;
        }else if (dir=='E')
        {
            x-=mile;
        }else if (dir=='W')
        {
            x+=mile;
        }
        
        
    }

    printf("\n Current direction of A: (%4.2lf, %4.2lf)\n", x,y);
    
}