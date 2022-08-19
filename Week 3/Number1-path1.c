#include<stdio.h>

int main() {

    int num,i;

    scanf("%d",&num);
    for (int j = 0; j < num ; j++){
        for (int i = 0; i <= j ; i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
