#include<stdio.h>
#include<math.h>
int main(){
    float p,r,t,n,si,ci;
    printf("Enter principal,Rate of interest, time,compounding frequency:");
    scanf("%f %f %f %f", &p, &r, &t, &n);
    si = (p*r*t)/100;
    ci =p * pow((1+r/n),n*t) - p;
    printf("Simple interest is = %.2f\n",si);
    printf("Compund interest is = %.2f\n",ci);
    return 0;

}