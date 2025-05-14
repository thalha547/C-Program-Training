#include <stdio.h>
int main(){

    //CHECK WHETHER A CHARACTER IS VOWEL OR CONSONANT.

    char a;

    printf("Enter the Character: ");
    scanf("%c", &a);

    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U'){
        printf("The Character you entered is a vowel!");
    }else {
        printf("The Character you entered is a Consonant!");
    }

    return 0;
}