#include<stdio.h>

int main(){

    int num,i = 0;
    printf("Enter Your Number : ");
    scanf("%d",&num);

    while(i < num){   
        int j = 0;
        while(j < num){
            printf("*");
            j = j + 1;
        }
        printf("*\n");
        i = i + 1;
    }

    return 0;
}