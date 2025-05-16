#include <stdio.h>

int main() {
    int num, reversed = 0, original, remainder;

    // Take input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // Save original number

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;               // Get last digit
        reversed = reversed * 10 + remainder; // Append digit
        num = num / 10;                     // Remove last digit
    }

    // Check if original is equal to reversed
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
