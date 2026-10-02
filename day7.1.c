// Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include<stdio.h>
int main(){
    int year ;
    printf("Enter a year:");
    scanf("%d",&year);
    year%4==0? printf("Is a leap year"): printf("not an leap year");
    return 0;
}