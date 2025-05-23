#include <stdio.h>
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main() {
    int num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    result = gcd(num1, num2);
    printf("GCD (HCF) of %d and %d is: %d\n", num1, num2, result);
    return 0;
}