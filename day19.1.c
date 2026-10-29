// Write a program to find the LCM of two numbers.
#include<stdio.h>
int main(){
    int n,m,a,lcm=1;
    printf("enter both the numbers:");
    scanf("%d %d",&n,&m);
    for(a =1;a<=n*m;a++){
        if(a%n== 0 &&  a%m == 0){
            lcm = a;
            break;
        }
    }
    printf("LCM = %d",lcm);

    return 0;
}