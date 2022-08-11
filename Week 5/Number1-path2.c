#include<stdio.h>

int main() {

    int arr[100],i = 0,j;

    while(i < 10){
        scanf("%d",&arr[i]);
        if((arr[i + 1]%2 != 0) && (arr[i - 1]%2 != 0)){
            printf("%d ",arr[i]);
        }
        i = i  +1;
    }
    return 0;
}