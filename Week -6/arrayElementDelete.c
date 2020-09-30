#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    printf("enter array elements : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int delete;
    scanf("%d", &delete);
    int pos;

    for (int i = 0; i < n; i++)
    {
        if (delete == arr[i])
        {
            pos = arr[i];
        }
    }

    for (int i = pos - 1; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
}