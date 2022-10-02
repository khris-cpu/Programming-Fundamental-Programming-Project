#include <stdio.h>

void max(int a, int b)
{
    if (a > b)
    {
        printf("A is greater than B");
    }
    else if (b > a)
    {
        printf("B is greater than A");
    }
    else
    {
        printf("A and B are equals");
    }
}

int main()
{
    int a, b;
    printf("Enter A : ");
    scanf("%d", &a);
    printf("Enter B : ");
    scanf("%d", &b);
    max(a, b);
    return 0;
}