#include<stdio.h>
int odd();
int even();
int n=1;


int main(){
    odd();
    

}


int odd()
{
    if (n<=10)
    {
        printf("%d\t", n+1);
        n++;
        even();
    }
    return;
       
}



int even()
{
    if (n<=10)
    {
        printf("%d\t", n-1);
        n++;
        odd();
    }
    return;
    
}