// Write a program to print the product of even numbers from 1 to n.
#include<stdio.h>
int main(){
    int n,even=2;
    int product =2;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=2; i<=n;i++){
        printf("%d is an even number\n",even);
        product *=even;
        even +=2;

    }
    printf("product of %d even number is = %d\n",n,product);
    return 0;
}