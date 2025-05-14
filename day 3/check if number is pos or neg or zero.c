#include <stdio.h>
int main(){
    int a;
    printf("Enter the Number: ");
    scanf("%d", &a);

    if (a == 0){
        printf("The Number you entered is Zero");
    } else if (a < 0){
        printf("The Number you entered is Negative");
    } else{
        printf("The Number you entered is Positive");
    }

    return 0;
}