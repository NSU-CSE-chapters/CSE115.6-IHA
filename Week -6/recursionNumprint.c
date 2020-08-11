#include<stdio.h>
int naturalNumber(int, int);
int main()
{

    int number=1, counter;
    scanf("%d", &counter);
    printf("%d ", naturalNumber(number, counter));

}


int naturalNumber(int n,int count)
{
    if (n<count)
    {
        printf("%d ", n);

        naturalNumber(n+1, count);
        
    }
    
    

}