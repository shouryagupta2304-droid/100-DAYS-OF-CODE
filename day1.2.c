// sum,difference,product and quotient of two numbers //
#include<stdio.h>
int main(){
    int a,b,sum ,difference,product, quotient;
    printf("Enter the numbers:");
    scanf("%d %d",&a, &b);
    sum = a+b;
    difference = a-b;
    product = a*b;
    quotient = a/b;
    printf("The sum of %d and %d is:%d\n",a,b,sum);
    printf("The difference of %d and %d is:%d\n",a,b,difference);
    printf("The product of %d and %d is:%d\n",a,b,product);
    printf("The quotient of %d and %d is:%d\n",a,b,quotient);
    return 0;
}