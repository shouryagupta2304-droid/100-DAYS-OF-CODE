// Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main(){
    float profit,loss,cp,sp;
    printf("Enter the cost price:");
    scanf("%f",&cp);
    printf("Enter the selling price:");
    scanf("%f",&sp);
    if(sp>cp){
    
         printf("profit is=%.2f%%\n",profit =((sp-cp)/cp)*100);
    }
    else if(sp<cp){
        
        printf("loss is =%.2f%%\n",loss = ((cp-sp)/cp)*100);
    }
    else{
        printf("there is no profit and loss");
    }

    return 0;

}