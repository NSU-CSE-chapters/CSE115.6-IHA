#include<stdio.h>

int checkPerfect(int n);
int PerfectNumbers(int start, int end);



int main()
{
    int start,end, pNum;
    printf("enter the range : ");
    scanf("%d %d", &start,&end);

    pNum = PerfectNumbers(start, end);

    printf("perfect number between %d and %d are : %d\n", start, end, pNum);
    
}



int checkPerfect(int n)
{

    int i, sum = 0;

    for ( i = 1; i < n; i++)
    {
        if (n%i==0)
        {
            sum = sum +i;
        }
        
    }

    if (sum==n)
    {
        return 1;
    }else
    {
        return 0;
    }
    
    
    
}


int PerfectNumbers(int start, int end){


    while (start<=end)
    {
        if (checkPerfect(start))
        {
            printf(" %d ", start);

        }
        start ++;
    }
    
}