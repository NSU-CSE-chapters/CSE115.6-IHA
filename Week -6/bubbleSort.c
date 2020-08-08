
#include <stdio.h>

int main()
{
  
  int arr[6]={77,42,35,12,101,5};
  
  int temp, i, j;
  
  for(int i=0; i<6;i++){
      for(int j =0; j<6-i-1; j++){
          if(arr[j]>arr[j+1]){
              temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
          }
      }
      
  }
  printf("Sorted elements: ");
  for(i=0;i<6;i++)
      printf(" %d",arr[i]);
 
}

