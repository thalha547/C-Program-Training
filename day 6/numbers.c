#include <stdio.h>

int main() {
    int i, j;
    for(i = 1; i <= 4; i++) {
        for(j = 1; j <= 4; j++) {
            printf("(%d, %d) ", i, j);  // Better formatting
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}
