// Write a program to display the month name and number of days using switch-case for a given month number.
#include<stdio.h>
int main(){
    int month;
    printf("Enter the number of month(1-12):");
    scanf("%d",&month);
    switch(month){
        case 1:
        printf("january\n");
        break;
        case 2:
        printf("february\n");
        break;
        case 3:
        printf("march\n");
        break;
        case 4:
        printf("April\n");
        break;
        case 5:
        printf("May\n");
        break;
        case 6:
        printf("June\n");
        break;
        case 7:
        printf("July\n");
        break;
        case 8:
        printf("August\n");
        break;
        case 9:
        printf("september\n");
        break;
        case 10:
        printf("october\n");
        break;
        case 11:
        printf("NOvember\n");
        break;
        case 12:
        printf("December\n");
        break;

    }
    return 0;
}