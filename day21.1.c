// Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int num, temp, firstDigit, lastDigit;
    int multiplier = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // If the number is a single digit, it remains unchanged
    if (num >= -9 && num <= 9) {
        printf("Swapped number: %d\n", num);
        return 0;
    }

    // Handle negative numbers
    int sign = 1;
    if (num < 0) {
        sign = -1;
        num = -num;
    }

    // 1. Get the last digit
    lastDigit = num % 10;

    // 2. Loop to find the first digit and its place value (multiplier)
    temp = num;
    while (temp >= 10) {
        temp /= 10;
        multiplier *= 10;
    }
    firstDigit = temp;

    // 3. Extract the middle part of the number
    int middle = (num % multiplier) / 10;

    // 4. Construct the new number with swapped digits
    int swapped = (lastDigit * multiplier) + (middle * 10) + firstDigit;

    printf("Swapped number: %d\n", sign * swapped);

    return 0;
}