#include <stdio.h>
int constantTime()
{
    int arr[6] = {1,2,3,4,5,6};
    int index = 5;
    //accessing the element at index 3
    int value = arr[index];

    printf("value at index %d is %d\n",index, value);
}
int main()
{
    //calling the function
    constantTime();
    return 0;
}
