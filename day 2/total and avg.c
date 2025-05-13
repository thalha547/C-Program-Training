#include <stdio.h>
int main(){

    int tamil, english, maths, science, social, total;
    float average;

    printf("Tamil: ");
    scanf("%d", &tamil);

    printf("English: ");
    scanf("%d", &english);

    printf("Maths: ");
    scanf("%d", &maths);

    printf("Science: ");
    scanf("%d", &science);

    printf("Social: ");
    scanf("%d", &social);

    total = tamil + english + maths + science + social;
    average = total / 5.0;

    printf("Total: %d\n", total);
    printf("Average: %.2f\n", average);

    return 0;
}