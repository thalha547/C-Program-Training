#include <stdio.h>
int main(){
    //SUGGEST OUTFIT BASED ON TEMPERATURE

    float a;

    printf("Enter the Temperature in Celsius: ");
    scanf("%f", &a);

    if (a < 10){
        printf("Prefer wearing Jacket");
    } else if (a >= 10 && a <= 20){
        printf("Prefer wearing Sweater");
    } else {
        printf("Prefer wearing T-shirt");
    }

    return 0;
}