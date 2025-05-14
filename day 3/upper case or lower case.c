#include <stdio.h>
int main(){
    //CHECK IF A CHARACTER IS UPPERCASE OR LOWERCASE

    char a;
    int b;

    printf("Enter the Character: ");
    scanf("%c", &a);
    b = a;

    if (b >= 65 && b <= 90){
        printf("The Character you entered is an uppercase letter");
    } else if (b >= 97 && b <= 122){
        printf("The Character you entered is a lowercase letter");
    } else{
        printf("The Character you entered is neither an uppercase letter nor a lowercase letter");
    }

    return 0;
}