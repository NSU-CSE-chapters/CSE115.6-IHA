//Final Exam
//Task1
//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include <stdio.h>

double seriesSum(int n);

int main()
{
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // double res;
    // res = seriesSum(N);
    printf("Sum : %lf\n", seriesSum(N));
}

double seriesSum(int n)
{
    int term = 1;
    int ans = term + 3;
    if (n == 1)
    {
        return 1;
    }
    else
    {
        seriesSum(term + (term / ans));
    }
}