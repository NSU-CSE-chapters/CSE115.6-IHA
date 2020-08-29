#include<stdio.h>


int main()
{
    int n;
    scanf("%d", &n);

    int arr[n], *p;
    printf("enter elements: \n");
    for (p= arr; p <= arr +n-1; p++)
    {
        scanf("%d", p);
    }

    printf("reverse number : \n");

    for (p = arr + n-1; p>=arr; p--)
    {
        printf(" %d ", *p);
    }
    
    
}