#include<stdio.h>
void fun(int);
int main()
{
    fun(3);
    return 0;
}



void fun(int n){
    if(n==0){
        return;
    }else{
        printf("%d\t", n);
    }
    return fun(n-1);
}
