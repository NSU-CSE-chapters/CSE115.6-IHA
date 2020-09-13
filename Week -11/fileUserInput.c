#include<stdio.h>

int main()
{
    FILE *fp;
    char ch;
    printf("data input\n");

    fp = fopen("input", "w");

    while ((ch=getchar())!=EOF)
    {
        putc(ch, fp);

    }

    fclose(fp);
    printf("data output\n");

    fp = fopen("input", "r");

    while ((ch=getc(fp))!=EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
    
     
}