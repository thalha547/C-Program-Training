#include <stdio.h>
int main(){

    char name[50];
    printf("%s\n", name);

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Your name is %s", name);


    return 0;
}