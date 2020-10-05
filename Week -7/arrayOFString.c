#include<stdio.h>


int main()
{
	// //char ch[MAX][length]
	// char ch[4][20] = {"hello", "hey", "whatsup", "fahim"};

	// printf("%c\n", ch[3][4]);

	char str[3][10];
	printf("enter string: \n");
	for (int i = 0; i < 3; i++)
	{
		// gets(str);
		scanf("%s", str[i]);
	}

	printf("print string that you typed\n");

	for (int i = 0; i < 3; i++)
	{
		printf("%s \n", str[i]);
	}
	


	
}