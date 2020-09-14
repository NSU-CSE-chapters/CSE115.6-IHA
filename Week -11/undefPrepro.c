#include<stdio.h>

#define iOS
#undef iOS
int main()
{
    #if defined(iOS)
        printf("iOS defined\n");
    

    #else
        printf("macro iOS has undefined \n");

    #endif
}