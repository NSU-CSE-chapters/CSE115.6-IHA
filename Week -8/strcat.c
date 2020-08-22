#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20]= "welcome to ";
    char str2[20] = "our academy";
    // stpcpy(str2, str1);
    // stpcpy(str1, str2);
    strcat(str1,str2);

    printf("%s", str1);

}
