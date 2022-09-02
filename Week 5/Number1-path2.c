#include<stdio.h>

int main(){
    
    int num;
    scanf("%d",&num);
    for(int y = - num + 1; y <= num - 1; y++){
        for(int x = -num + 1; x <= num - 1; x++){
            if((x + y <= 0 && x <= y && x <= 0 ) || (x + y >= 0 && x >= y && x >0)){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
