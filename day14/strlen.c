#include <stdio.h>
int main(){

    char str[50] = "";
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[length] != '\0'){
        length ++;
    }

    printf("The length of the string is: %d", length);



    return 0;
}