#include <stdio.h>
#include <time.h>

void bubbleSort(int arr[], int size);
void ImprovedbubbleSort(int arr[], int size);

int main()
{
    int arr[1000];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 1000 - i;
    }

    printf("AFter sorting : ");

    clock_t start, end;
    start = clock();

    bubbleSort(arr, 1000);

    end = clock();

    //  for (int i = 0; i < 10; i++)
    //  {
    //      printf("%d ", arr[i]);
    //  }

    double cputime = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\n%lf  before im\n", cputime * 1000);


     for (int i = 0; i < 10; i++)
    {
        arr[i] = 1000 - i;
    }
    start = clock();

    ImprovedbubbleSort(arr, 1000);

    end = clock();
    cputime = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\n%lf  after Im", cputime * 1000);
}

void bubbleSort(int arr[], int size)
{
    int i, j, temp;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void ImprovedbubbleSort(int arr[], int size)
{
    int i, j, temp;

    int flag = 1;

    for (int i = 0; i < size - 1 && flag; i++)
    {
        flag = 0;
        for (int j = 0; j < size - 1 - i; j++)
        {
            flag =1;
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}