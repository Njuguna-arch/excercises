#include <stdio.h>
void bubble_sort(int arr[], int size)
{
    for(int i = 0; i < size-1; i++){
        for(int j = 0; j < size-i-1; j++)
    {
        if(arr[j] > arr[j+1])
        {
            //swap arr[j] and arr[j+1]
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}
}

int main()
{
    int arr[] = {94, 90, 64, 34, 25, 22, 12, 11, 5};// reverse order
    int size = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, size);//function call

    printf("Sorted array: \n");
    for( int i = 0; i < size; i++)
    {
        printf("%d,", arr[i]);
    }
    printf("\n");

    return 0;
}
