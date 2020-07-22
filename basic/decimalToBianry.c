#include<stdio.h>

int main()
{
    int binary[50], i=0,j,n;
    
    printf("enter a value: ");
    scanf("%d", &n);
    
    
    while(n!=0){
        binary[i] = n%2;
        n= n/2;
        i++;
    }
    
    for(j=i-1; j>=0; j--){
        printf("%d", binary[j]);
    }
}
