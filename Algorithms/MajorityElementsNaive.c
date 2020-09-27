#include <stdio.h>
void majorityElementNaive(int arr[], int size);

int main()
{

    // int arr[9] = {2, 8, 6, 8, 2, 2, 2, 4, 2};
    int n;
    scanf("%d", &n);
    int arr[n];

    printf("enter array elements : \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("all the elements you enter : \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    int size = sizeof(arr) / sizeof(int);
    printf("\n\n");
    majorityElementNaive(arr, size);
}

void majorityElementNaive(int arr[], int size)
{

    int maxCount = 0;
    int index = -1;

    for (int i = 0; i < size; i++)
    {
        int count = 0;

        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > maxCount)
        {
            maxCount = count;
            index = i;
        }
    }

    if (maxCount > size / 2)
    {
        printf(" Majority element : %d \n", arr[index]);
    }
    else
    {
        printf("No majority elements \n");
    }
}