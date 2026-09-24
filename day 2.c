#include<stdio.h>
int main()
{
  float L1,B1,L2,B2,L3,B3;
  float P1,P2,P3,max;
  
  printf("Enter length and breadth of Rectangle 1:");
  scanf("%f %f ",&L1,&B1);
  printf("Enter length and breadth of Rectangle 2:");
  scanf("%f %f" ,&L2,&B2);
  printf("Enter length and breadthof Rectangle 3:");
  scanf("%f %f", &L3,&B3);
  P1 =2*(L1+B1);
  P2 =2*(L2+B2);
  P3 =2*(L3+B3);
  max =(P1>P2)?((P1>P3)?P1:P3):((P2>P3)?P2:P3);
  printf("Perimeter of Rectangle 1=%.2f\n",P1);
  printf("Perimeter of Rectangle 2=%.2f\n",P2);
  printf("Perimeter of Rectangle 3=%.2f\n",P3);
  
  printf("Highest perimeter = %.2f\n",max);
  
  return 0;
}