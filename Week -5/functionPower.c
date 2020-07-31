#include<stdio.h>
int power(int ,int );
int main()
{

	int x=2,y=8,z;
	z=power(x,y);
	printf("%d\n", z);
	



}


int power(int a, int b)
{
	int i, result=1;
	for(i=1;i<=b;i++)
	{
		result = result*a;
	}
	 
	return result;

}	
