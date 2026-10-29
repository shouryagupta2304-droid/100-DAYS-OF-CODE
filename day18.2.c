// Write a program to find the HCF (GCD) of two numbers.
#include<stdio.h>
int main(){
    int n,m,a,hcf=1;
    printf("enter both the numbers:");
    scanf("%d %d",&n,&m);
    for(a =1;a<=n && a<=m;a++){
        if(n%a == 0 && m%a == 0){
            hcf =a;
        }
    }
    printf("HCF = %d",hcf);

    return 0;
}