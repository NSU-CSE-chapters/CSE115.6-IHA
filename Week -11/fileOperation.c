#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("text.txt", "w");

    if (fp!=NULL)
    {
        printf("file found\n");
    }
    else
    {
        printf("file doesnot exit\n");
    }
    
    fclose(fp);

    return 0;

}