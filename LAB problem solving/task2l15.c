//Name: Fahim Muntashir
//ID: 2021183642
//Course code: CSE115L
//Section: 06

#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100];
  	int length, count=0;
 
  	printf(" Enter  string : ");
  	gets(str);
  	
  	length = strlen(str);
  	 	   	
  	for(int i = 0; i < length; i++)
	{
		if(str[i] != str[length - i - 1])
		{
			count = 1;
			break;	
		} 
	}
	if(count == 0)
	{
		printf(" %s is a palindrome\n", str);
	}
	else
	{
		printf(" %s is not a palindrome \n", str);
	}	
	
  	return 0;
}