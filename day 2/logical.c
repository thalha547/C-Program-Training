#include <stdio.h>
#include <string.h>
int main(){

    /*LOGICAL OPERATORS

    and (&&)
    or (||)
    not (!)*/

    int a;
    char b[10];

    printf("Enter your Age: ");
    scanf("%d", &a);

    printf("Do you have a License? (yes/no): ");
    scanf("%s", b);

    if (a >= 18 && (strcmp(b, "Yes") == 0 || strcmp(b, "yes") == 0)) {
        printf("You are eligible\n");
    } else {
        printf("You are not eligible\n");
    }

    return 0;


}