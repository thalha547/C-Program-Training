#include <stdio.h>
int main(){

    //simple interest

    float p, r, t;

    printf("Enter p, r, t: ");
    scanf("%f%f%f", &p, &r, &t);

    float si = (p*r*t)/100;

    printf("%.2f\n", si);

    return 0;
}