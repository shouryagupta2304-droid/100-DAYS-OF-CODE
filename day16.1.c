// Write a program to take a number as input and print its equivalent binary representation.
#include<stdio.h>
int main(){
    int n,binary = 0,remainder;
    int place =1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    if(n<0){
        printf("Enter a non negative number");
        return 1;
    }

    do{
        remainder = n%2;
        binary = binary + remainder*place;
        n = n/2;
        place = place*10;
    }while(n>0);
    printf("Binary Representation = %d",binary);

    return 0;
}