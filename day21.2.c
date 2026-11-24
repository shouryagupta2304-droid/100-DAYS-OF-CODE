// Write a program to check if a number is a perfect number.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int sum = 0;
    for(int i =1;i<=n-1;i++){
        if(n%i==0){
            sum +=i;
        }
    }
    if(sum == n && n>0) printf("It is a perfect number");
        else printf("it's not a perfect number");
    return 0;
}