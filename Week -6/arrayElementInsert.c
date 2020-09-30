#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("enter array elements \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int pos, element;

    printf("enter the element you want to add \n");
    scanf("%d", &element);

    printf("enter the position you want to add the elements\n");
    scanf("%d", &pos);

    for (int i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[pos] = element;

    printf("after insert\n");

    for (int i = 0; i < n + 1; i++)
    {
        printf("%d  ", arr[i]);
    }
}