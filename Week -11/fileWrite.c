#include<stdio.h>
#include<string.h>
int main()
{
    FILE *fp;
    char ch[20]= "Fahim Muntashir";
        int length = strlen(ch);

    fp = fopen("text.txt", "w");


    if (fp!=NULL)
    {
        for (int i = 0; i < length; i++)
        {
            fputc(ch[i], fp);
           
        }
        
    }else
    {
        printf("file not found");
    }
    
     fclose(fp);
}