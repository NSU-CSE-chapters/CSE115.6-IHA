#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];

    int i, length, temp;
    fgets(str, sizeof str, stdin);
    for ( i = 0;i<strlen(str)-1; i++)
    {
        for (int j=0;j<strlen(str)-1-i;j++)
        {
            if (str[j]>str[j+1])
            {
                temp = str[j];
                str[j] = str[j+1];
                str[j+1]= temp;
            }
            
        }
    }

    printf("after sorting : %s\n", str);
    
}