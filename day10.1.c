// Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main()
{
 float a,b,c;
 printf("Enter the three sides of triangle:");
 scanf("%f %f %f",&a,&b,&c);
 
 if((a+b>c)&&(a+c>b)&&(b+c>a)){
    printf("The triangle is VALID.\n");
 }
  if (a==b && b==c){
  printf("It is an equilateral Triangle.\n");
}
  else if (a==b || b==c || c==a){
  printf("It is an isosceles Triangle.\n");
  }
  if((a*a + b*b == c*c)||
     (a*a + c*c == b*b)||
     (b*b + c*c == a+a)){
  printf("It is also a Right-Angled Triangle.\n");
  }

  else if((a*a + b*b == c*c)||
          (a*a + c*c == b*b)||
          (b*b + c*c == a+a)){
		printf("It is a Right-Angled Triangle.\n");
		  }
  else  {
        printf("It is a scalene Triangle.\n");
    }
        printf("The Triangle is not valid.\n");
	return 0;
 }
	