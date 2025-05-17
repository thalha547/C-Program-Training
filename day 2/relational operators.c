#include <stdio.h>

int main(){

    /* RELATIONAL OPERATORS
    == equal to
    != not equal
    > greater than
    < less than
    >= greater than or equal to
    <= less than or equal to */

    int a, b;

    printf ("Enter any two number: ");
    scanf ("%d %d", &a, &b);

    /*a = 100;
    b = 150;*/

    if (a == b){
        printf ("a is equal to b\n");
    } else {
        printf ("a is not equal to b\n");
    }

    printf("a is greater than b %d\n", a>b);

    if (a<=b){
        printf("a is less than or equal to b\n");
    }else{
        ("a is not less than or equal to b\n");
    }
    {
        /* code */
    }
    

    return 0;
}