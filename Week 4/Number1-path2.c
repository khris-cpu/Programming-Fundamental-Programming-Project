#include<stdio.h>

int main() {

    int num,i=0,j;
    printf("Enter Number : ");
    scanf("%d",&num);
    
    while (i < num){
        j = 0;
        while(j <= i){
            printf("*");
            j = j + 1;
        }
        printf("\n");
        i = i + 1;
    }

    return 0;
}