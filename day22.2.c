// write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms
#include<stdio.h>
int main(){
    int n;
    double sum = 0.0;
    printf("Enter the number of terms (n):");
    scanf("%d", &n);
    if(n<=0) {
        printf("enter the positive number");
        return 1;
    }
    for(int i=1;i<=n;i++){
        if(i == 1){
            sum +=1.0;
        }else{
            sum +=(double)(2*i-1)/(2*i);
        }
    }
    printf(" sum of the series up to %d terms =%.4f\n",n,sum);
    return 0;
}