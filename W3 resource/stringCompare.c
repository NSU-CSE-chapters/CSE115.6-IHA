#include<stdio.h>

int main()
{
    char str1[20];
    char str2[20];
   int count1 =0,count2=0;
    fgets(str1, sizeof str1, stdin);
    fgets(str2, sizeof str2, stdin);
    // gets(str2);
    for (int  i = 0; str1[i]!='\0'; i++)    
    {
        count1++;
    }

    for (int i = 0; str2[i]!='\0'; i++)
    {
        count2++;
    }

    if (count1==count2)
    {
        printf("length of the both string are equal\n");
    }else
    {
        printf("not equal\n");
    }
    
    
    


    
}