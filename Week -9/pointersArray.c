#include<stdio.h>

int main()
{

	char str[]= "Hello World";

	char *ptr;

	ptr = str;
	
	ptr[5]='?';
	printf("%s \n", ptr);

	return 0;
}
