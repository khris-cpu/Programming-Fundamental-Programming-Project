#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp1;
    FILE *fp2;
    char arr[1000], length, sum = 0;
    fp1 = fopen("a.txt", "r");
    fp2 = fopen("b.txt", "w");
    fscanf(fp1, "%d %d", &arr[0], &arr[1]);
    length = strlen(arr);
    for (int i = 0; i <= length; i++)
    {
        sum += arr[i];
    }
    fprintf(fp2, "%d", sum);
    fclose(fp1);
    return 0;
}