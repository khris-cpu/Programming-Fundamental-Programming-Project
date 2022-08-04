#include<stdio.h>

int main() {

    char firstname[100],lastname[100];
    int id;

    printf("Enter Your Firstname : ");
    scanf("%s",&firstname);
    printf("Enter Your Lastname : ");
    scanf("%s",&lastname);
    printf("Enter Your Student ID : ");
    scanf("%d",&id);

    printf("+-------------+------------+-------------+\n\n");
    printf("|\t%s|\t%s|\t%d|\n\n",firstname,lastname,id);
    printf("|%s\t|%s\t|\t%d|\n\n",firstname,lastname,id);
    printf("|%s\t|\t%s|\t%d|\n\n",firstname,lastname,id);
    printf("+-------------+------------+-------------+\n");
    return 0;
}
