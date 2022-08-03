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
    printf("|      %s|         %s|        %d|\n\n",firstname,lastname,id);
    printf("|%s      |%s         |        %d|\n\n",firstname,lastname,id);
    printf("|%s      |         %s|        %d|\n\n",firstname,lastname,id);
    printf("+-------------+------------+-------------+\n");
    return 0;

    // Hint 2

    // printf("|");
    // printf("        %s",firstname);
    // printf("|");
    // printf("    %s",lastname);
    // printf("|");
    // printf("\n");
    printf("+-------------+------------+-------------+");
    return 0;
}