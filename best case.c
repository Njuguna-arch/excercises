
#include <stdio.h>
int linear_search(int arr[], int size, int target)
{
    for (int i = 0;i < size; i++)
    {
        if(arr[i] == target)
        {
            return i; // target found
        }
    }
    return -1; // target not found
}
int main()
{
    int arr[] = {4, 3, 2, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 4;// target in th first index

    int result = linear_search(arr, size, target);
    if (result != -1)
    {
        printf("Element found at index %d\n", result);
    }
    else
    {
        printf("Element not found\n");
    }
    return 0;
}
