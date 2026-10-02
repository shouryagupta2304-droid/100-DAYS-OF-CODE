//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include<stdio.h>
int main(){
    char a;
    printf("enter a word:");
    scanf("%c",&a);
    if(a = 'a','e','i','o','u'){
        printf("It is an vowel");
    }
    else{
        printf("It is an consonant");
    }
    return 0;
}