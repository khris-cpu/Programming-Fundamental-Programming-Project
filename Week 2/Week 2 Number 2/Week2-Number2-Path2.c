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
    printf("\n");

    // Start

    printf("+-------------+------------+-------------+\n\n");

    // Row 1

    printf("|");
    printf("        %s",firstname);
    printf("|");
    printf("    %s",lastname);
    printf("|");
    printf("    %d",id);
    printf("|");
    printf("\n\n");

    // Row 2

    printf("|");
    printf("%s        ",firstname);
    printf("|");
    printf("%s    ",lastname);
    printf("|");
    printf("    %d",id);
    printf("|");
    printf("\n\n");

    // Row 3

    printf("|");
    printf("%s        ",firstname);
    printf("|");
    printf("    %s",lastname);
    printf("|");
    printf("    %d",id);
    printf("|");
    printf("\n\n");

    // End

    printf("+-------------+------------+-------------+\n\n");
    printf("\n");
    return 0;
}