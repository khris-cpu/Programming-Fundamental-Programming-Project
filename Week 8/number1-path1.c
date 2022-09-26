#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    x = x - y;
    y = x + y;
    x = y - x;
    printf("swap : %d %d", x, y);
    return 0;
}
