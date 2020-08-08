#include<stdio.h>

#define N 100
int main()
{
    int arr[N];
    int n, i, j, temp;

    scanf("%d", &n);
    for (int i = 0; i <n; i++)
    {
        printf("enter the arr[%d] element\n", i);
        scanf("%d", &arr[i]);
    }

    printf(" elements: ");
  for(int i=0;i<n;i++)
      printf(" %d",arr[i]);


    for ( i = 0; i < n-1; i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }

    printf("\nSorted elements: ");
  for(i=0;i<n;i++){
      printf(" %d",arr[i]);
  }
}
