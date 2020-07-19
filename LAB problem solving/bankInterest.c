#include<stdio.h>

int main()
{
    double balance, interest_rate, time, total_balance;

    printf("Enter the banlance, interest and annual fee: ");
    scanf("%lf %lf %lf", &balance, &interest_rate, &time);


    total_balance = ((balance * time * interest_rate)/100)+balance;
    printf("total balance will be : %.2lf\n",total_balance);

}