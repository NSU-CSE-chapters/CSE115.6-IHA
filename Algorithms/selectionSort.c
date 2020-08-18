#include <stdio.h>

void selectionSort(int arr[], int size);

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
    for (int i = 0; i < elements; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");

    printf("After sorting: \n");

    selectionSort(arr, elements);
    for (int i = 0; i < elements; i++)
    {
        printf(" %d ", arr[i]);
    }
}

void selectionSort(int arr[], int size)
{
    int i, j, temp, min;

    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}