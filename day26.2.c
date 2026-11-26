// Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *
#include<stdio.h>
int main(){
    int i,j,k;
    for(i=1;i<=5;i +=2){
        for(j=1;j<=i;j++){
            printf("*\n",j);
        }
        printf("\n");
    }
     for(k =3;k>=1;k -=2){
        for(j=1;j<=k;j++){
            printf("*\n",k);
        }
        if(k>1){
            printf("\n");
        }
    }
    return 0;
}