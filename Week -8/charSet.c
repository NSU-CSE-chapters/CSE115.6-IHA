#include<stdio.h>

int main()
{
    int i;
    char c;
    printf("\n\n");
    
    for(c=65;c<=122;c++){
        
        if(i>90 && i<97)
            continue;
        
        printf("|%4d - %c|", c,c);
    }
    
    printf("|\n");
}
