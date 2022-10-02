#include <stdio.h>

void max()
{
    int arr[1000];
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (arr[0] > arr[1])
    {
        printf("%d  >  %d", arr[0], arr[1]);
    }
    else if (arr[0] < arr[1])
    {
        printf("%d  <  %d", arr[0], arr[1]);
    }
    else
    {
        printf("%d == %d", arr[0], arr[1]);
    }
}

int main()
{
    max();
    return 0;
}