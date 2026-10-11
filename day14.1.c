// Write a program to print the sum of the first n odd numbers.
#include<stdio.h>
int main(){
    int n,odd=1;
    int sum =0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        printf("%d is an odd number\n",odd);
         sum +=odd;
         odd +=2;
    }
   printf("sum of first %d odd numbers = %d",n,sum);
   return 0;
}