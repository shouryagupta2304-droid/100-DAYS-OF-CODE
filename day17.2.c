// Write a program to check if a number is prime.
#include<stdio.h>
int main(){
    int n,i,prime =1;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n<2){
        printf("Input is invalid");
       }    
       else{
        for(i=2;i*i<=n;i++){
            if(n%1==0){
                prime = 0;
                break;

            }
        }
        if(prime == 0){
            printf("%d is a prime number\n",n);
        }
        else{
            printf("%d is not a prime number\n",n);
        }
    }
    
    return 0;
}