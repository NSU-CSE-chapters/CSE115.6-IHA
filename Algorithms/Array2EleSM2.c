#include<stdio.h>
#include<stdlib.h>

int sorting(const void *pa, const void *pb){
   const int *p1 = pa;
    const int *p2 = pb;

    return *p1 - *p2;
}
int  main()
{
    int arr[5] ={8,6,7,1,5};

    qsort(arr, 5, sizeof(int), sorting);

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    int sum = 8;

        int l = 0, r = 5-1;

        while (l<r)
        {
            if (arr[l]+arr[r]==sum)
            {
                printf("found\n");
                break;
            }

            else if (arr[l]+arr[r]>sum)
            {
                r--;
            }
            else
            {
                l++;
            }
            
            
            
        }
        // printf("not fpund\n");
        
}