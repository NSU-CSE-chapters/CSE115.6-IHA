#include<stdio.h>
#include<string.h>

int main()
{
    char ch[50], swap;
    int i,len;

    printf("Enter a string: ");
    scanf("%[^\n]ch", &ch);


    len = strlen(ch);

    for (i = 0; i < len/2; i++)
    {
        swap = ch[i];
        ch[i] = ch[len-1-i];
        ch[len-1-i]= swap;
    }

    printf("Reverse is : %s\n", ch);
    


}