#include<stdio.h>

int main()
{
    FILE *fp;
    char ch[20];

    fp = fopen("text.txt","w");

    if (fp==NULL)
    {
        printf("file doesnot exist");
    }else
    {
        printf("emter your name: \n");
        gets(ch);

        fputs(ch, fp);
    }
    
    
}