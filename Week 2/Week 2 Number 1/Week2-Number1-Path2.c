#include<stdio.h>

int main() {

    int num1,num2,ans;

    printf("Number 1 : ");
    scanf("%d",&num1);
    printf("Number 2 : ");
    scanf("%d",&num2);

    ans = num1 + num2;
    printf("%d + %d : %d\n",num1,num2,ans);
    ans = num1 - num2;
    printf("%d - %d : %d\n",num1,num2,ans);
    ans = num1 * num2;
    printf("%d * %d : %d\n",num1,num2,ans);
    ans = num1 / num2;
    printf("%d / %d : %d\n",num1,num2,ans);


}