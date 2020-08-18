
#include<stdio.h>

void bubbleSort(int arr[], int size);

#define N 100
int main()
{
    
    int arr[N];

    int elements;
    printf("how many elements you want to add array? : \n");
    scanf("%d", &elements);

    printf("Enter elements of the array: \n");

    for (int i = 0; i < elements; i++)
    {
        printf("arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n");

   


    printf("Before Sorting: \n");
    for (int  i = 0; i < elements; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");


    printf("After sorting: \n");

    bubbleSort(arr, elements);
    for (int i = 0; i < elements; i++)
    {
        printf(" %d ", arr[i]);
    }
    
    
    

}


void bubbleSort(int arr[], int size)
{

    int i,j,temp;

    for ( i = 0; i <size - 1; i++)
    {
        for (j=0; j<size-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }

    

}