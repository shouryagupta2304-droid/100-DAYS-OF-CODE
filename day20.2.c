// Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main() {
    long long num, temp, factor = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &num);

    // Loop 1: Find the place value of the leftmost digit
    temp = num;
    while (temp >= 10) {
        factor *= 10;
        temp /= 10;
    }

    printf("1's complement: ");

    // Loop 2: Extract digits from left to right and flip each one
    while (factor > 0) {
        int digit = (num / factor) % 10;

        if (digit == 0) {
            printf("1");
        } else {
            printf("0");
        }

        factor /= 10;
    }

    printf("\n");
    return 0;
}