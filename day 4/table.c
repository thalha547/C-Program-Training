#include <stdio.h>

int main() {
    int number, i;

    // Ask user for the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Print the multiplication table
    printf("Multiplication Table of %d:\n", number);
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", number, i, number * i);
    }

    return 0;
}
