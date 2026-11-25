// Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *
#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i-1; j++){
            printf(" "); 
           }
           for(int k =i;k<=5;k++){
            printf("*");
           }
        printf("\n");
    }          
    return 0;
}