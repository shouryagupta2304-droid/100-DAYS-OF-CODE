// Write a program to check if a number is a palindrome.
#include <stdio.h>

int main(void) {
    long long num, original, reversed = 0, digit;

    printf("Enter a number: ");
    if (scanf("%lld", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    original = num;

    // Negative numbers are not palindromes (the '-' sign breaks symmetry)
    if (num < 0) {
        printf("%lld is not a palindrome.\n", original);
        return 0;
    }

    while (num > 0) {
        digit = num % 10;           // extract last digit
        reversed = reversed * 10 + digit;  // append it to reversed
        num /= 10;                  // drop last digit
    }

    if (original == reversed)
        printf("%lld is a palindrome.\n", original);
    else
        printf("%lld is not a palindrome.\n", original);

    return 0;
}