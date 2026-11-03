// Write a program to find the product of odd digits of a number.
#include<stdio.h>
int main(){
    int n,digit,product=1,odd;
    printf("enter the number:");
    scanf("%d",&n);

    while(n!=0){
        digit =n%10;
        if(digit % 2 !=0){
            product=product*digit;
            odd++;
        }
        n = n/10;
    }
    if(odd>0){
        printf("product of odd digits =%d",product);
    } else{
        printf("No odd digits found");
    }
    return 0;
}
  


