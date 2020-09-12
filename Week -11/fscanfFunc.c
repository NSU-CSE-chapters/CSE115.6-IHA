#include<stdio.h>


int main()
{
    FILE  *in, *out;
    int n;

    in = fopen("in.txt", "r");
    out = fopen("out.txt", "w");

    if (in!=NULL)
    {
        fscanf(in, "%d", &n );
        fprintf(out, "%d", n*n);
    }else
    {
        printf("file not found");
    }

    fclose(in);
    fclose(out);

    return 0;
    
    
}