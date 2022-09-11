#include<stdio.h>
#include<stdlib.h>

int main(){

    int num,rol_col;
    scanf("%d",&num);
    rol_col = num - 1;

    for(int i = 0 ; i <= rol_col ; i++){
        for(int j = -rol_col ; j <= rol_col ; j++){
            if(abs(i) < abs(j)){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}