#include <stdio.h>
int main(){
    printf("Arithmetic Operators\n");

    /*
    Arithmetic Operators
    + addition
    - subraction
    * multiplication
    / division
    % modulus
    */

    int a = 10;
    int b = 20;

    int sum = a+b;
    printf("%d\n", sum);

    int sub = b-a;
    printf("%d\n", sub);

    int mul = a*b;
    printf("%d\n", mul);

    int div = a/b;
    printf("%d\n", div);

    int mod = a%b;
    printf("%d\n", mod);

    return 0;
}