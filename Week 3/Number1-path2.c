#include<stdio.h>

int main(){

    int num,roll_col,i = 0;
    scanf("%d",&num);

    roll_col = num - 1;
    for(int i = 0 ; i <= roll_col; i++){
        for(int j = 0 ; j <= roll_col ; j++){
            if(i < j){
                printf(" ");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
