#include <stdbool.h>
#include <stdio.h>
int main()
{
	bool isPizzaHealthy;

	printf("do you believe in the power of pizza? 1 is for true and 0 is for false : ");
	int temp;
	scanf("%d", &temp);

	isPizzaHealthy = temp;
	if (isPizzaHealthy)
	{
		printf("welcome to my youtube videos \n");
	}
	else
	{
		printf("why pizza not healthy \n");
	}
}