// 65010077 - นายกิตติพศ หลำบางช้าง

#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("swap : %d %d", x, y);
    return 0;
}