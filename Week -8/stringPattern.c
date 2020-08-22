#include<stdio.h>

int main()

{
	int i,d;
	char str[]="CProgramming";
	printf("\n\n");
	printf("--------------------\n");
	for(int i=0;i<=11;i++);
	{
		d= i+1;
		printf("|%-12.*s|\n", d, str);
	}
	printf("|--------------------|");
	
	for(int i=11;i>=0;i--){
	    d= i+1;
	    	printf("|%-12.*s|\n", d, str);
	    
	}
	
	printf("--------------------");
}
