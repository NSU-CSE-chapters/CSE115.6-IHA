#include<stdio.h>

int main()
{
    FILE  *in, *out;

    char ch;
    in = fopen("in.txt", "r");

    out = fopen("out.txt", "w");

    if (in!=NULL)
    {
       ch= fgetc(in);
       fputc(ch, out);
    }else
    {
        printf("fille not found\n");
    }
    fclose(in);
    fclose(out);

    return 0;
    
    
}