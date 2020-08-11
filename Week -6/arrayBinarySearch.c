#include<stdio.h>
#define N 100
void main()
{
    int arr[N];
    int ele;
    printf("how many elements you want to add in array? ");
    scanf("%d", &ele);

    printf("enter %d elements\n", ele);

    for (int i = 0; i < ele; i++)
    {
        printf("enter arr[%d] elements \n", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < ele; i++)
    {
        printf(" %d ", arr[i]);
    }


    int mid, n=ele, value, low=0, high=n-1;
    printf("enter the value you want to search? ");
    scanf("%d", &value);



    while (low<=high)
    {
        mid = (low+high)/2;
        if (value==arr[mid])
        {
            printf("value found at index %d\n", mid);
            return;
        }
        else if (value<arr[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }

    }


    printf("value not found\n");

}