#include <stdio.h>

void  main()
{
  int n,sum=0;
  int mn,mx;

  printf("Input the  number : ");
  scanf("%d",&n);
    
 printf("The positive divisor  : ");
    for (int i=1;i<n;i++)
      {
      if(n%i==0)
         {
         sum=sum+i;
         printf("%d  ",i);
         }
       }
printf("\nThe sum of the divisor is : %d",sum);
    if(sum==n)
      printf("\nSo, the number is perfect.");
    else
      printf("\nSo, the number is not perfect.");
printf("\n");
}