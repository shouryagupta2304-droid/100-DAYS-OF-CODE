// Write a program to calculate library fine based on late days as follows: 
// First 5 days late: ₹2/day 
// Next 5 days late: ₹4/day 
// Next 20 days days late: ₹6/day 
// More than 30 days: Membership Cancelled.
#include<stdio.h>
int main(){
    int late_days,fine;
    printf("Number of day got late:");
    scanf("%d",&late_days);
    if(late_days<=5){
        printf("fine is =%d\n",fine = 2*late_days);
    }
    else if(late_days<=10){
         printf("fine is =%d\n",fine = 4*late_days);
    }
    else if(late_days<=30){
         printf("fine is =%d\n",fine = 6*late_days);
    }
    else{
        printf("Membership is cancelled.\n");
    }
    return 0;
}