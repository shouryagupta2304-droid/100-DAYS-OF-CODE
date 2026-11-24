// write a program to check if a number is a strong number.
#include <stdio.h>

int main() {
    int num, originalNum, digit, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("%d is not a strong number.\n", num);
        return 0;
    }

    originalNum = num;

    while (num > 0) {
        digit = num % 10;

        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact; 
        num /= 10;   
    }

    if (sum == originalNum) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }

    return 0;
}
