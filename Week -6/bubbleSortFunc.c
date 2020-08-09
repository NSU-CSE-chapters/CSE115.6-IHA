#include<stdio.h>

void bubbleSort(int[], int);

int main() 
{
    int arr[6] = {96,25,78,54,25,5};

     bubbleSort(arr, 6);
    for (int i = 0; i <6; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\n");
 
 
return 0;
   
}

void bubbleSort(int array[], int N)
{
    for (int i = 0; i <N-1; i++)
    {
        for (int j=0; j<N-i-1; j++)
        {
            if (array[j]>array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            
        }
        
    }
    

}