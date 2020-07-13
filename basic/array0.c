#include<stdio.h>

int main()
{
    int N;
    int score[N];

    printf("enter the number");
    scanf("%d" , &N);

    for (int  i = 0; i < N; i++)
    {
        printf("Number: %d ", score[i]);
        scanf("%d", score[i]);
    }
    
}