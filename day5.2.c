#include<stdio.h>
int main(){
   int total_seconds;
    int seconds,minutes,hours;

    printf("Enter the time in seconds:");
    
    if(scanf("%d",&total_seconds) !=1 || total_seconds < 0){
        printf("Error:please enter a valid positive integer.\n");
        return 1;
    }
    hours = total_seconds/3600;
    minutes = (total_seconds%3600)/60;
    seconds = total_seconds%60;
    printf("Formatted Time (HH:MM:SS):%02d:%02d:%02d\n",hours,minutes,seconds);

    return 0;
}