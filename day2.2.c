#include<stdio.h>
int main(){
    float radius,area,circumference;
    printf("Enter the radius of circle:");
    scanf("%f",&radius);
    area = 22/7*radius*radius;
    circumference = 2*22/7*radius;
    
    printf("area of circle is = %.2f\n",area);
    printf("circumference pf circle is = %.2f\n",area);
    return 0;
}