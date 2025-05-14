#include <stdio.h>
#include <math.h>
int main(){
    //ROOTS OF QUADRATIC EQUATION

    float a, b, c, t1, t2;

    printf("Enter the number");
    scanf("%f %f %f", &a, &b, &c);

    t1 = (-b+sqrt(b*b -(4*a*c)))/(2*a); 
    t2 = (-b-sqrt(b*b -(4*a*c)))/(2*a);

    printf("%.2f", t1);
    printf("%.2f", t2);
    
    return 0;
}