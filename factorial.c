#include <stdio.h>
int factorial(int n)
{
        printf("Enter n\n");
    scanf("%d",&n);
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main()
{

    int factorial();
    return 0;
}
