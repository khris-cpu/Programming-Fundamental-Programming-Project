#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    FILE *fp1;
    FILE *fp2;
    int a, b;
    fp1 = fopen("a.txt", "r");
    fp2 = fopen("b.txt", "w");
    fscanf(fp1, "%d %d", &a, &b);
    fprintf(fp2, "%d", a + b);
    fclose(fp1);
    return 0;
}