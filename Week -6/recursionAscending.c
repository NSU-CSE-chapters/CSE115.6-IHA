#include<stdio.h>
int listNumbersAsc(int, int);
int main()
{

    int start, end, asc;
    // printf("enter the range %d to %d\n", start, &end);
    scanf("%d%d", &start, &end);

    asc = listNumbersAsc(start, end);
    printf("ascending=  %d\n", asc);
}


int listNumbersAsc(int start, int end)
{
    int i = 1;
    if (i<= end)
    {
        printf("%d ", i);
        i++;
        listNumbersAsc(start, end);
    }
   
    
    

}


