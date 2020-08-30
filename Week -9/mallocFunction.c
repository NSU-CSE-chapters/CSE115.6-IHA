#include<stdio.h>

#include<stdlib.h>


int main()
{
    int n;
    scanf("%d", &n);

    int *ptr = (int*) malloc (n*sizeof(int));

    if (ptr==NULL)
    {
        printf("memory not available");
        exit (1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("enter an integer: \n");
        scanf("%d", ptr+i);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr+i));
    }
    
    
    
}