#include<stdio.h>

int main()
{
int n, count=0;

int z[10];
 
scanf("%d", &n);
	
	for (int i = 1;i <= n;i++) {
		scanf("%d", &z[i]);

		if (z[i]) {
            count++;
			
		}
	}
	if (count==0) {
		printf("EASY\n");
	}
	else {
		printf("HARD\n");
	}
	return 0;
}

