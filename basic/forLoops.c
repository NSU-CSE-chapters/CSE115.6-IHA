#include<stdio.h>

int main()
{
    int n;
    
    printf("enter a numebr  :");
    scanf("%d", &n);
    
    
    for(;n!=100;){
        printf("Enter the number again: ");
        scanf("%d", &n);
    }
}
