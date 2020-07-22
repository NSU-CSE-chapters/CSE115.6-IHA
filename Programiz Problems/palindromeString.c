#include <stdio.h>
#include <string.h>

int main()
{
	char str[50];
	int length, i;

	printf("Enter a string: ");

	gets(str);

	length = strlen(str);

	for (i = 0; i < length / 2; i++)
	{
		if(str[i] != str[length-1-i])
		{
			printf("Not a palindome\n");
			break;
		}
	}

	if (i == length / 2)
	{
		printf("Palindrome\n");
	}
}
