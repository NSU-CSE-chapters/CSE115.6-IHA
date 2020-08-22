#include<stdio.h>
#include<string.h>


int main()
{
    char name[20][50];
    char temp[25];
    // int length = strlen(name);

    int n, i,j;
    printf("how many string you want? ");
    scanf("%d", &n);
    for ( i = 0; i <= n; i++)
    {
        fgets(name[i], sizeof name, stdin);
    }

    // for ( i = 0; i <=n; i++)
    // {
    //     printf("%s ", name[i]);
    // }

printf("\n\n");
    printf("After sorting:\n ");

    for ( i = 0; i <n-1; i++)
    {
        for (j=0; j<n-i;j++)
        {
            if (strcmp(name[j], name[j+1])>0)
            {
                strcpy(temp, name[j]);
                strcpy(name[j], name[j+1]);
                strcpy(name[j+1], temp);
            }
            
        }
        
    }

     for(i=0;i<=n;i++){
		 printf("%s\n",name[i]);
    }
    
    
}