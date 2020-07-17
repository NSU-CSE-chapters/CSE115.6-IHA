#include<stdio.h>

int main()

{
    
    int n, current_number=1, total_sum=0;
    
    printf("Enter the number : ");
    scanf("%d", &n);
    
    
    while(current_number<=n)
    {
        total_sum+= current_number;
        current_number++;
    }
    
    printf("total sum = %d\n", total_sum);
}