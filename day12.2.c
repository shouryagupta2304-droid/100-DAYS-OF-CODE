// Write a program to calculate electricity bill based on units consumed with these rates: 
// First 100 units at ₹5/unit 
// Next 100 units at ₹7/unit 
// Next 100 units at ₹10/unit 
// Above at ₹12/unit
#include<stdio.h>
int main(){
    int unit,electricity_bill;
    printf("Number of unit consumed");
    scanf("%d",&unit);
    if(unit<=100){
        printf("Electricity bill is =%d\n",electricity_bill = 5*unit);
    }
    else if(unit<=200){
        printf("Electricity bill is =%d\n",electricity_bill = 7*unit);
    }
    else if(unit<=300){
        printf("Electricity bill is =%d\n",electricity_bill = 10*unit);
    }
    else{
        printf("Electricity bill is =%d\n",electricity_bill = 12*unit);
    }
    return 0;
}