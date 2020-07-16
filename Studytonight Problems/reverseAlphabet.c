#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter a Alphabet:\n");

    scanf("%c", &ch);

    if (islower(ch))
    {
        printf("reverse of %c is %c\n",ch, toupper(ch));
    }
    else
    {
        printf("reverse of %c is %c\n",ch, tolower(ch));
    }
    
    


    // printf("reverse of %c is %c", ch, )
}