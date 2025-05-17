#include <stdio.h>

int main(){

    int a;

    printf("Enter your Age: ");

    scanf("%d", &a);

    if (a >= 18){
        printf("You're eligible for Voting\n");
    }else{
        printf("You're not eligible for Voting\n");
    }

    return 0;

}