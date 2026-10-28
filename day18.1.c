// Write a program to print all factors of a given number.Write a program to print all factors of a given number.
#include<stdio.h>
int main(){
    int n,factor=1;
    printf("Enter the Number:");
    scanf("%d",&n);
    for(factor =1;factor<=n;factor++){
        if(n%factor ==0){
            printf("%d",factor);
        }
        printf("\n");
    }
    return 0;
}