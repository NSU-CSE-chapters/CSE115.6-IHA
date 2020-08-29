#include<stdio.h>

#define MAX_SIZE 100  
#define MAX_CHARS 255

int main()
{
    int str[MAX_SIZE];
    int fre[MAX_CHARS];
    int i,max=0,ascii;

    printf("enter a string: \n");
    fgets(str, sizeof str, stdin);


    for ( i = 0; i <MAX_CHARS; i++)
    {
        fre[i]= 0;

    }

    for ( i = 0; str[i]!='\0'; i++)
    {
        ascii = (int) str[i];
        fre[ascii]+=1;   
    }

    for ( i = 0; i < MAX_CHARS; i++)
    {
        if (fre[i]> fre[max])
        {
            max = i;
        }
        
    }
    

        printf("Maximum occurring character is '%c' = %d times.", max, fre[max]);

    

    
}